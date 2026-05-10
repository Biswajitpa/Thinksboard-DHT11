🌐 ESP32 + DHT11 + ThingsBoard Cloud IoT Monitoring System
<p align="center"> <img src="https://raw.githubusercontent.com/your-username/your-repo/main/assets/iot-logo.png" width="180" alt="IoT Logo"/> </p>
🚀 Project Overview
📡 Real-time temperature and humidity monitoring system
🔌 Built using ESP32 microcontroller + DHT11 sensor
☁️ Data is transmitted to ThingsBoard Cloud IoT platform
📊 Live visualization using dashboards (graphs, gauges, widgets)
🔔 Useful for smart homes, agriculture, weather stations, and industrial monitoring
🎯 Key Features
📶 Wireless data transmission using ESP32 (WiFi enabled)
🌡️ Reads Temperature & Humidity from DHT11 sensor
☁️ Sends data to cloud (ThingsBoard IoT platform)
📊 Live dashboard visualization (graphs + charts)
🔁 Real-time auto-refresh monitoring
📱 Mobile & web dashboard support
⚡ Low-cost IoT solution for real-world applications
🧠 Tech Stack
🧩 Microcontroller: ESP32
🌡️ Sensor: DHT11
☁️ Cloud Platform: ThingsBoard Cloud
💻 Programming: Arduino C++
📡 Protocol: MQTT / HTTP
🛠️ IDE: Arduino IDE / PlatformIO
🔌 Hardware Required
ESP32 Development Board
DHT11 Temperature & Humidity Sensor
Jumper Wires
Breadboard
USB Cable
WiFi Network
⚙️ System Architecture
📟 DHT11 Sensor → collects environmental data
🧠 ESP32 → processes sensor data
🌐 WiFi Module → sends data to cloud
☁️ ThingsBoard → stores & visualizes data
📊 Dashboard → displays live graphs
🔄 Working Principle
ESP32 connects to WiFi network
DHT11 sensor reads temperature & humidity
Data is formatted in JSON
Sent to ThingsBoard cloud via MQTT/HTTP
Dashboard updates in real-time automatically
📊 Dashboard Features (ThingsBoard)
🌡️ Temperature Gauge
💧 Humidity Chart
📈 Historical Data Graph
⏱️ Real-time updates
📍 Device status monitoring
🧾 Sample Data Format
{
  "temperature": 28.5,
  "humidity": 65
}
💡 Applications
🏠 Smart Home Monitoring
🌾 Smart Agriculture Systems
🏭 Industrial Environment Monitoring
🌦️ Weather Data Collection System
🏫 Educational IoT Projects
🛠️ Installation & Setup
Clone the repository
git clone https://github.com/your-username/esp32-dht11-thingsboard.git
Install required libraries in Arduino IDE:
WiFi.h
ThingsBoard.h
DHT sensor library
Configure:
WiFi SSID & Password
ThingsBoard Access Token
Device credentials
Upload code to ESP32
Open ThingsBoard dashboard and monitor live data 📊
📷 Project Preview
<p align="center"> <img src="https://raw.githubusercontent.com/your-username/your-repo/main/assets/dashboard.png" width="600"/> </p>
🧑‍💻 Author
👤 Your Name: Satyabrata Sahoo
🎓 Role: Embedded Systems & IoT Developer
📍 Focus: ESP32, VLSI, AIoT Systems
⭐ Future Improvements
📡 Add multiple sensors (MQ2, DHT22, Soil Moisture)
📱 Mobile App integration
🤖 AI-based prediction of temperature trends
🔋 Battery-powered IoT node
🌍 GPS-based environment tracking
🏁 Conclusion
This project demonstrates a real-world IoT data monitoring system
Combines hardware + cloud + real-time analytics
Highly scalable for industrial and research applications
