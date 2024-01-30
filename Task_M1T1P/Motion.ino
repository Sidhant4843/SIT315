#define SENSOR_PIN 2
#define ACTUATOR_PIN 6
void setup ( )
{
pinMode (SENSOR_PIN, INPUT) ; pinMode (ACTUATOR_PIN, OUTPUT) ;
Serial. begin (9600);

void loop()
{
if(digitalRead(SENSOR_PIN) == HIGH)
Serial println ("HIGH" ); digitalWrite (ACTUATOR_PIN, HIGH) ;
else
Serial printin ("LOW");
digitalwrite(ACTUATOR_PIN, LOW) ;
｝
delay ( 1000);
}
