# Temperature Monitoring System

# Project Overview
This project focuses on creating a reliable and efficient Temperature Monitoring System using an Arduino microcontroller paired with an analog temperature sensor. The goal is to continuously measure ambient temperature and display it clearly for easy monitoring. The system outputs temperature readings on a 16x2 LCD screen and also streams the data via the Serial Monitor for debugging or logging purposes. This kind of setup is useful for applications such as environmental monitoring, home automation, and educational projects to understand sensor interfacing with microcontrollers.

# Components Used
Arduino UNO: Acts as the central processing unit, reading sensor data and controlling the LCD display.
Temperature Sensor (LM35/TMP36): An analog sensor that outputs a voltage proportional to the ambient temperature, which the Arduino reads via its analog input pin.
16x2 LCD Display: Provides a user-friendly way to view real-time temperature data directly from the device without needing a computer.
Potentiometer: Used to adjust the contrast of the LCD screen ensuring the temperature readings are clear and legible under different lighting conditions.
Breadboard and Jumper Wires: Enable a clean, solderless circuit connection that allows easy modifications and testing during development.

# Features
Real-Time Temperature Measurement: Continuously reads temperature data from the sensor at regular intervals and updates the display.
Dual Output Display: Temperature data is shown simultaneously on an LCD and streamed to the Serial Monitor, giving flexibility for both standalone and connected monitoring.
Analog Signal Processing: Converts analog voltage readings from the sensor into temperature in Celsius using a straightforward calculation, demonstrating practical sensor interfacing.
Simulation and Testing: The entire setup is simulated in Tinkercad (or similar platforms), allowing for circuit validation before hardware implementation, reducing errors and saving time.

# Circuit and Simulation
The system’s circuit consists of the Arduino UNO connected to the temperature sensor via an analog input pin (typically A0). The 16x2 LCD is connected using multiple digital pins for data and control signals, with a potentiometer linked to the LCD's contrast pin. This wiring allows the Arduino to control the display content dynamically based on sensor readings.
Simulation software like Tinkercad is used to virtually build and test the circuit, ensuring correct connections and validating the code functionality before moving to physical hardware. This approach helps in visualizing data output and debugging issues early on.
Replace this placeholder with your actual simulation image to visually demonstrate your project setup.

# How to Use
Setup Hardware or Simulation: Assemble the circuit as per the design, either on a physical breadboard or within a simulation environment.

Upload Code: Use the Arduino IDE to upload the temperature monitoring program to the Arduino UNO. The program reads the sensor input, converts it to temperature, and sends the data to the LCD and Serial Monitor.

View Output: Observe the temperature readings on the LCD screen. For detailed logs or debugging, open the Serial Monitor in the Arduino IDE to see continuous temperature updates.

Adjust Contrast: Use the potentiometer to fine-tune the LCD contrast for best visibility depending on your lighting conditions.

