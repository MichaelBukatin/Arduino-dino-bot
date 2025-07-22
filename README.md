Arduino Dino Bot 🦖

## 🎥 Demo Video

Watch the demo: [Click here to open the video](https://drive.google.com/file/d/1IVOrr5dH6lVmEnp-8mQBdFqJpjUfja2C/view?usp=sharing)

This is a simple automation project using Arduino UNO, 
a photoresistor, and a servo motor to automatically
play the Google Chrome Dinosaur Game (T-Rex Runner 🦕).

When a cactus appears on the screen, the photoresistor 
detects the shadow/light change and the servo motor
physically presses the space bar to make the dino jump.

🔧 Components Used

Arduino UNO

Photoresistor (LDR)

10kΩ resistor

Servo motor (SG90)

Jumper wires

USB cable

Tape & plastic mount (to fix sensor and servo)

Chrome browser with Dino game

🧠 What I Learned

Reading analog values from sensors (photoresistor)

Using Serial Monitor to calibrate thresholds

Controlling a servo motor with Arduino

Designing a physical interaction with software

Simple prototyping and debugging

📸 How It Works

The LDR is fixed near the screen, at a distance of
approximately 1 cm or 5 mm. It is located not far 
from the dinosaur and is placed so that it catches 
all types of cactus, and the distance from the 
dinosaur is needed for the response time of the 
servo motor.

When a cactus appears, the light changes.

Arduino compares the light value to a threshold.

If it's dark enough → the servo taps the spacebar.

The dinosaur jumps. If timing is right — it survives.

⚠️ Limitations

The game speeds up, and the detection might fail.

Sometimes jumps happen too early or too late.

Calibration is needed every time based on screen brightness.

📷 Future Improvements

Use a camera or ML model for better object detection.

Replace servo with keyboard emulator (e.g., Leonardo).

Add OLED screen for real-time values and calibration.
