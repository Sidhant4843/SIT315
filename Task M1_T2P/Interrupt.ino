#define SENSOR_PIN 2
#define ACTUATOR_PIN 6
volatile boolean sensorState = false; // Volatile to ensure visibility in ISR
void setup () {
pinMode (SENSOR_PIN, INPUT) ; pinMode (ACTUATOR_PIN, OUTPUT) ;
Serial. begin (9600);
attachInterrupt (digitalPinToInterrupt(SENSOR_PIN), sensorISR, CHANGE) ;
// Attach interrupt
}
void loop () {
// No need for polling or delays, interrupts handle sensor changes
}
void
sensorISR() {
sensorState = digitalRead (SENSOR_PIN) ;
if (sensorState == HIGH) {
Serial println ( "HIGH");
digitalwrite(ACTUATOR_PIN, HIGH) ;
else｛
Serial println ("LOW");
digitalWrite(ACTUATOR_PIN, LOW);
}
}
