//written by Junaid Ahmed

int a = 4;
float b = 10.7;
float c;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

c = b-a;
Serial.println(c);
delay(2000);
c = a*b;
Serial.println(c);
delay(2000);
c = ((25-a) * (45+a))% 10;
Serial.println(c);
delay(2000);

}
