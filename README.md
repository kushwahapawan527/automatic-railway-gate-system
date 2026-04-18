## ⚙️ Features
- Real-time train detection using IR sensors  
- Automatic gate control using servo motor  
- Reduces human error and improves safety  

## 🔌 Circuit Connections
- IR Sensor 1 → Pin 2  
- IR Sensor 2 → Pin 3  
- Servo Motor → Pin 9  
- VCC → 5V  
- GND → GND  

## ⚙️ Working Principle
When IR sensors detect a train, the Arduino sends a signal to the servo motor to close the gate. Once the train passes, the gate opens automatically. 

## 📷 Circuit Diagram
![Circuit](circuit_diagram.png)

## 📷 Project Model
![Model](project_model)

## 💻 Code
The Arduino code is available in: railway_gate.ino
