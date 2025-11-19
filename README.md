# PulseGuard
IoT-Enabled Health Monitoring and Muscle-Stimulation System(PULSE GUARD)
PULSEGUARD – IoT-Enabled Health Monitoring & Muscle Stimulation System

PULEGUARD is a wearable IoT-based device designed to support elderly individuals, paralysis patients, and fitness users by combining real-time vital monitoring with safe muscle stimulation (EMS + vibration therapy).

Developed as part of the DTIL (Design Thinking & Idea Lab) course, this project aims to create a compact, low-cost, and accessible rehabilitation solution that brings physiotherapy into daily life.

🚀 Features
1. Real-Time Health Monitoring

Heart Rate

Body Temperature

Movement / Activity

2. Intelligent Muscle Stimulation

EMS (Electrical Muscle Stimulation) for muscle activation

Vibration motor for gentle therapy

Helps:

Elderly with weak muscles

Paralysis / post-surgery recovery

Arthritis and stiffness

Gym users & athletes for recovery

3. IoT Cloud Connectivity

ESP32 sends data to cloud

Live dashboard for monitoring

Alerts, reminders, and doctor/patient connection

4. Mobile App (Prototype)

Real-time data display

Stimulation control

Notifications

Doctor chat (demo)

Built using Figma

🧩 Architecture Overview
Hardware Stack

ESP32 Dev Module (WiFi + Bluetooth)

EMS Module

Vibration Motor

Li-ion Rechargeable Battery

Electrodes (conductive fabric)

Elastic Belt (knee/leg mounted)

Software Stack

Arduino/PlatformIO

Firebase / MQTT (choose one based on your implementation)

Mobile App (Figma prototype)

Cloud dashboard (optional)

📦 Repository Structure (Recommended)
PulseGuard/
│
├── /hardware/
│   ├── circuit_diagram.png
│   ├── component_list.md
│   └── hardware_notes.md
│
├── /firmware/
│   ├── esp32_code.ino
│   ├── sensors/
│   ├── ems_control/
│   └── vibration_control/
│
├── /mobile_app/
│   ├── screenshots/
│   └── figma_link.txt
│
├── /cloud/
│   ├── firebase_config.md
│   └── mqtt_topics.md
│
├── /docs/
│   ├── project_report.pdf
│   ├── presentation.pptx
│   └── research_papers.md
│
└── README.md

🛠️ Installation & Setup
1. ESP32 Firmware

Install Arduino IDE

Add ESP32 board manager

Install libraries:

WiFi.h
PubSubClient.h
DHT.h (if temp sensor)


Upload esp32_code.ino

🔌 Hardware Connections
Component	ESP32 Pin
EMS Signal	GPIO 14
Vibration Motor	GPIO 27
Heart Rate Sensor	GPIO 33
Temp Sensor	GPIO 4
Battery Input	VIN
📡 Cloud Configuration

Choose one:

Option A: Firebase

Create Firebase project

Add Realtime DB or Firestore

Paste API key into firmware

Option B: MQTT

Use CloudMQTT / HiveMQ

Set topics:

pulseguard/vitals

pulseguard/stimulation

📱 Mobile App Prototype

Figma preview:
(insert your link)

Features:

Real-time vitals

Therapy control

Alerts & reminders

Doctor communication

📊 Research & Validation

This project is backed by:

EMS muscle stimulation studies

IoT wearable research

User interviews with elderly & paralysis patients

DTIL human-centered design process

Key benefits verified:

Improved muscle tone

Better circulation

Less stiffness

More independence

🌍 Future Roadmap

AI-driven therapy suggestions

Medical-grade stimulation safety model

Production-ready PCB

Full mobile app release

Real clinical pilot testing

👥 Team – Infinity Crew

Pranav Gaikwad (Team Leader)

Prathamesh Pagar

Bhagwan Kote

Prajwal Kote

Saish Kote
Guided by Mr. Kiran Wakchaure

📜 License

MIT License (recommended)
