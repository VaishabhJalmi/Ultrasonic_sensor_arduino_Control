# Ultrasonic_sensor_arduino_Control
Code for controlling multiple ultrasonic Sensors

Code Explanation 
In this code, we first define the Arduino pins for the two ultrasonic sensors. Then, in the setup function, we set the trigger pins as outputs and the Echo pins as inputs of an ultrasonic sensor. You can also start serial communication at a baud rate of 9600 set on the Arduino board.
In the Void Loop function, we can measure the distance for the first sensor and store it in the variable distance1. Then we do the same for the second sensor and store the distance value in variable distance2. After  sensor senses the object, print both distances to the serial monitor using the serial print function.

In this program, I have added a short delay before measuring again to prevent the sensors from interfering with each other.
Note that the pulseIn function returns the duration of the pulse in microseconds, so we need to divide by 58 to get the distance in centimeters. Also, make sure to connect the sensors to the correct pins on the Arduino Uno as per the circuit and program, and also to include the Ultrasonic.h library if necessary or install separately from the library on Arduino IDE.
