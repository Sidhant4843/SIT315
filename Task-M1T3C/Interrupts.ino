int ledPin1 = 11;
int ledPin2 = 10;
int motionSensorPin1 = 2;
int motionSensorPin2 = 3;
int indicatorPin = 12;

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(indicatorPin, OUTPUT);
  pinMode(motionSensorPin1, INPUT);
  pinMode(motionSensorPin2, INPUT);

  digitalWrite(indicatorPin, HIGH);

  attachInterrupt(digitalPinToInterrupt(motionSensorPin1), Sensor1, CHANGE);
  attachInterrupt(digitalPinToInterrupt(motionSensorPin2), Sensor2, CHANGE);
}

void loop()
{
  // Your main loop code (if any)
}

void Sensor1() {
  if (digitalRead(motionSensorPin1)) {
    digitalWrite(ledPin1, HIGH);
    delay(250);
    digitalWrite(indicatorPin, LOW);

    Serial.println("Someone Moving (Sensor 1)");
  } else {
    digitalWrite(indicatorPin, HIGH);
    delay(250);
    digitalWrite(ledPin1, LOW);

    Serial.println("No detection (Sensor 1)");
  }
}

void Sensor2() {
  if (digitalRead(motionSensorPin2)) {
    digitalWrite(ledPin2, HIGH);
    delay(250);
    digitalWrite(indicatorPin, LOW);

    Serial.println("Someone Moving (Sensor 2)");
  } else {
    digitalWrite(indicatorPin, HIGH);
    delay(250);
    digitalWrite(ledPin2, LOW);

    Serial.println("No detection (Sensor 2)");
  }
}
