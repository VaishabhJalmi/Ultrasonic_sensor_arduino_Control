Code Explanation 
In this code, we first define the Arduino pins for the two ultrasonic sensors. Then, in the setup function, we set the trigger pins as outputs and the Echo pins as inputs of an ultrasonic sensor. You can also start serial communication at a baud rate of 9600 set on the Arduino board.
In the Void Loop function, we can measure the distance for the first sensor and store it in the variable distance1. Then we do the same for the second sensor and store the distance value in variable distance2. After  sensor senses the object, print both distances to the serial monitor using the serial print function.

In this program, I have added a short delay before measuring again to prevent the sensors from interfering with each other.
Note that the pulseIn function returns the duration of the pulse in microseconds, so we need to divide by 58 to get the distance in centimeters. Also, make sure to connect the sensors to the correct pins on the Arduino Uno as per the circuit and program, and also to include the Ultrasonic.h library if necessary or install separately from the library on Arduino IDE.


Code
Controlling 2 Ultrasonic Sensor with Arduino Uno with code
// Define the pins for the first ultrasonic sensor
const int trigPin1 = 7;
const int echoPin1 = 6;

// Define the pins for the second ultrasonic sensor
const int trigPin2 = 5;
const int echoPin2 = 4;

void setup() {
  // Set the trigger pins as outputs
  pinMode(trigPin1, OUTPUT);
  pinMode(trigPin2, OUTPUT);
  
  // Set the echo pins as inputs
  pinMode(echoPin1, INPUT);
  pinMode(echoPin2, INPUT);
  
  // Start serial communication
  Serial.begin(9600);
}

void loop() {
  // Measure distance for the first sensor
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  long duration1 = pulseIn(echoPin1, HIGH);
  int distance1 = duration1 / 58;

  // Measure distance for the second sensor
  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  long duration2 = pulseIn(echoPin2, HIGH);
  int distance2 = duration2 / 58;

  // Print the distances to the serial monitor
  Serial.print("Distance 1: ");
  Serial.print(distance1);
  Serial.print(" cm, Distance 2: ");
  Serial.print(distance2);
  Serial.println(" cm");

  // Wait for a short time before measuring again
  delay(100);
}