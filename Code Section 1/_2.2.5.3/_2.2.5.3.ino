
// written by Junaid Ahmed

int A = 2;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

switch(A)
{
case 1:
Serial.println("case 1");
delay(2000);
break;
case 2:
Serial.println("case 2");
delay(2000);
break;
default:
Serial.println("Don't know");
delay(2000);
}

}
