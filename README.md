# 🌐 ESP32 + DHT11 + ThingsBoard Cloud IoT Monitoring System

<p align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=0:0f2027,100:00c6ff&height=200&section=header&text=ESP32%20IoT%20Project&fontSize=35&fontColor=ffffff&animation=fadeIn"/>
</p>

## 🚀 Project Overview

- 📡 Real-time temperature and humidity monitoring system  
- 🔌 Built using ESP32 microcontroller + DHT11 sensor  
- ☁️ Data is transmitted to ThingsBoard Cloud IoT platform  
- 📊 Live visualization using dashboards (graphs, gauges, widgets)  
- 🔔 Useful for smart homes, agriculture, weather stations, and industrial monitoring  

---

## 🎯 Key Features

- 📶 Wireless data transmission using ESP32 (WiFi enabled)  
- 🌡️ Reads Temperature & Humidity from DHT11 sensor  
- ☁️ Sends data to cloud (ThingsBoard IoT platform)  
- 📊 Live dashboard visualization (graphs + charts)  
- 🔁 Real-time auto-refresh monitoring  
- 📱 Mobile & web dashboard support  
- ⚡ Low-cost IoT solution for real-world applications  

---

## 🧠 Tech Stack

- 🧩 Microcontroller: ESP32  
- 🌡️ Sensor: DHT11  
- ☁️ Cloud Platform: ThingsBoard Cloud  
- 💻 Programming: Arduino C++  
- 📡 Protocol: MQTT / HTTP  
- 🛠️ IDE: Arduino IDE / PlatformIO  

---

## 🔌 Hardware Required

- 🔌 ESP32 Development Board  
- 🌡️ DHT11 Temperature & Humidity Sensor  
- 🔗 Jumper Wires  
- 🧱 Breadboard  
- 🔋 USB Cable  
- 📶 WiFi Network  

---

## ⚙️ System Architecture

- 📟 DHT11 Sensor → collects environmental data  
- 🧠 ESP32 → processes sensor data  
- 🌐 WiFi → sends data to cloud  
- ☁️ ThingsBoard → stores & visualizes data  
- 📊 Dashboard → displays live graphs  

---

## 🔄 Working Principle

- ESP32 connects to WiFi network  
- DHT11 reads temperature & humidity  
- Data is converted into JSON format  
- Sent to ThingsBoard via MQTT/HTTP  
- Dashboard updates in real-time  

---

## 📊 Dashboard Features

- 🌡️ Temperature Gauge  
- 💧 Humidity Chart  
- 📈 Historical Data Graph  
- ⏱️ Real-time updates  
- 📍 Device status monitoring  

---

## 🧾 Sample Data Format

json
{
  "temperature": 28.5,
  "humidity": 65
}

💡 Applications
- 🏠 Smart Home Monitoring
- 🌾 Smart Agriculture
- 🏭 Industrial Monitoring
- 🌦️ Weather Station
- 🏫 IoT Learning Project

## 🛠️ Setup Steps
- Clone repository
- git clone https://github.com/your-username/esp32-dht11-thingsboard.git
- Install libraries
- WiFi.h
- ThingsBoard.h
- DHT sensor library
- Configure WiFi & ThingsBoard token
- Upload code to ESP32
- Open dashboard and monitor live data

##  📷 Project Preview
<p align="center"> <img src="https://raw.githubusercontent.com/your-username/your-repo/main/assets/dashboard.png" width="600"/> </p>

## 🧑‍💻 Author
- 👤 Biswajit Pattanaik
- 🎓 Embedded Systems & IoT Developer
- 📍 ESP32 | IoT | VLSI | AIoT
 ## ⭐ Future Improvements
- 📡 Multiple sensor integration
- 📱 Mobile app support
- 🤖 AI prediction model
- 🔋 Battery-powered device
- 🌍 GPS tracking system
##  🏁 Conclusion
- Real-time IoT cloud monitoring system
- Combines hardware + cloud + analytics
- Scalable for industrial and research use
