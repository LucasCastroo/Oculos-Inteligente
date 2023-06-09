#define sensorReflexivo A0
#define buzzer 3    

void setup() {
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int valorSensor = analogRead(sensorReflexivo); 
  Serial.println(valorSensor);
  
  if (valorSensor < 710) {
    analogWrite(buzzer, 127); 
  }
  
  delay(800);
  analogWrite(buzzer, 0);

}