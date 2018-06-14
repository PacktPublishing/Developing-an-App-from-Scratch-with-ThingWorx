//Written by Junaid Ahmed


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorValue = analogRead(A3);

while (sensorValue > 1000) 
{
Serial.println(sensorValue);
digitalWrite(13,HIGH);
delay(3000);

}

Serial.println(sensorValue);

}
