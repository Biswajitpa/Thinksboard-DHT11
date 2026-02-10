#include <WiFi.h>
#include <PubSubClient.h>
#include "DHT.h"
#include <ArduinoJson.h>

#define WIFI_SSID       "biswajit"
#define WIFI_PASSWORD   "12345678"

#define TOKEN           "4ubnd74a2g7lyuwimmds"
#define THINGSBOARD_SERVER  "thingsboard.cloud"

#define DHTPIN 4
#define DHTTYPE DHT11
#define LED_PIN 5

WiFiClient espClient;
PubSubClient client(espClient);
DHT dht(DHTPIN, DHTTYPE);

// ===== Reconnect =====
void reconnect() {
  while (!client.connected()) {
    Serial.print("Connecting to ThingsBoard...");
    if (client.connect("ESP32_Device", TOKEN, NULL)) {
      Serial.println("connected!");
      // Subscribe to shared attributes
      client.subscribe("v1/devices/me/attributes");
      // Request current attribute values
      client.publish("v1/devices/me/attributes/request/1", "{}");
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" retrying in 5 seconds");
      delay(5000);
    }
  }
}

// ===== Callback =====
void callback(char* topic, byte* payload, unsigned int length) {
  StaticJsonDocument<200> doc;
  DeserializationError error = deserializeJson(doc, payload, length);

  if (!error) {
    if (doc.containsKey("led_state")) {
      bool ledState = doc["led_state"];
      digitalWrite(LED_PIN, ledState ? HIGH : LOW);
      Serial.println(ledState ? "LED ON" : "LED OFF");

      // ✅ Send confirmation back so dashboard switch doesn’t timeout
      StaticJsonDocument<200> response;
      response["led_state"] = ledState;
      char buffer[200];
      serializeJson(response, buffer);
      client.publish("v1/devices/me/attributes", buffer);
    }
  }
}

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  dht.begin();

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("WiFi Connected!");

  client.setServer(THINGSBOARD_SERVER, 1883);
  client.setCallback(callback);
}

void loop() {
  if (!client.connected()) {
    reconnect();
  }
  client.loop();

  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  if (!isnan(temperature) && !isnan(humidity)) {
    StaticJsonDocument<200> payload;
    payload["temperature"] = temperature;
    payload["humidity"] = humidity;

    char buffer[256];
    serializeJson(payload, buffer);
    client.publish("v1/devices/me/telemetry", buffer);

    Serial.print("Sent: ");
    Serial.println(buffer);
  }

  delay(5000);
}
