// Define variables
const int motionSensorPin = 2;
const int ledPin = 13;

void setup() {
  Serial.begin(9600);  // Start the serial communication
  pinMode(motionSensorPin, INPUT);  // Motion sensor pin as input
  pinMode(ledPin, OUTPUT);  // LED pin as output
}

void loop() {
  // Read motion sensor value
  int motionValue = digitalRead(motionSensorPin);

  // Print motion sensor value to Serial Monitor
  Serial.print("Motion Sensor: ");
  Serial.println(motionValue == HIGH ? "Motion Detected" : "No Motion");

  // Update LED based on motion sensor value
  digitalWrite(ledPin, motionValue);

  delay(1000);  // Delay for better readability in the Serial Monitor
}
