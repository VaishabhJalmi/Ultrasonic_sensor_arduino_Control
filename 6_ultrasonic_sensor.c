// Define the pins for the first ultrasonic sensor
const int trigPin1 = 2;
const int echoPin1 = 3;

// Define the pins for the second ultrasonic sensor
const int trigPin2 = 4;
const int echoPin2 = 5;

// Define the pins for the third ultrasonic sensor
const int trigPin3 = 6;
const int echoPin3 = 7;

// Define the pins for the fourth ultrasonic sensor
const int trigPin4 = 8;
const int echoPin4 = 9;

// Define the pins for the fifth ultrasonic sensor
const int trigPin5 = 10;
const int echoPin5 = 11;

// Define the pins for the sixth ultrasonic sensor
const int trigPin6 = 12;
const int echoPin6 = 13;

void setup() {
  // Set the trigger pins as outputs
  pinMode(trigPin1, OUTPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(trigPin3, OUTPUT);
  pinMode(trigPin4, OUTPUT);
  pinMode(trigPin5, OUTPUT);
  pinMode(trigPin6, OUTPUT);

  // Set the echo pins as inputs
  pinMode(echoPin1, INPUT);
  pinMode(echoPin2, INPUT);
  pinMode(echoPin3, INPUT);
  pinMode(echoPin4, INPUT);
  pinMode(echoPin5, INPUT);
  pinMode(echoPin6, INPUT);

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

  // Measure distance for the third sensor
  digitalWrite(trigPin3, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin3, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin3, LOW);
  long duration3 = pulseIn(echoPin3, HIGH);
  int distance3 = duration3 / 58;

  // Measure distance for the fourth sensor
  digitalWrite(trigPin4, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin4, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin4, LOW);
  long duration4 = pulseIn(echoPin4, HIGH);
  int distance4 = duration4 / 58;

  // Measure distance for the fifth sensor
  digitalWrite(trigPin5, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin5, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin5, LOW);
  long duration5 = pulseIn(echoPin5, HIGH);
  int distance5 = duration5 / 58;

  // Measure distance for the sixth sensor
  digitalWrite(trigPin6, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin6, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin6, LOW);
  long duration6 = pulseIn(echoPin6, HIGH);
  int distance6 = duration6 / 58;

  // Print the distances to the serial monitor
  Serial.print("Distance 1: ");
  Serial.print(distance1);
  Serial.print(" cm, Distance 2: ");
  Serial.print(distance2);
  Serial.print(" cm, Distance 3: ");
  Serial.print(distance3);
  Serial.print(" cm, Distance 4: ");
  Serial.print(distance4);
  Serial.println(" cm");
  Serial.print("Distance 5: ");
  Serial.print(distance5);
  Serial.print(" cm, Distance 6: ");
  Serial.print(distance6);
  Serial.print("cm");
  // Wait for a short time before measuring again
  delay(100);
}