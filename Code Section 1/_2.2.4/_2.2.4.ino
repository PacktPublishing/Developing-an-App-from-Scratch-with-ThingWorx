// written by Junaid Ahmed

 int A = 2;
  char b = 'c';
  char c = b;
  float e = 3.14;
  int array[] = {1,-2,3,4};
  char welcome[6] = "HELLO";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 }

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(array[3]);
delay(1000);
Serial.println("value of A = ");
Serial.println(A);
Serial.println(sizeof(A));
Serial.println("Bytes");
delay(1000);
Serial.println("value of B = ");
Serial.println(b);
// Serial.println(size
Serial.println(sizeof(b));
Serial.println("Bytes");
delay(1000);
Serial.println("value of e = ");
Serial.println(e);
Serial.println(sizeof(e));
Serial.println("Bytes");
delay(1000);
}


























//Serial.println(A);
//delay(1000);
//Serial.println(A);
//delay(1000);
/*
for (int i=0;i<=4;i++)
{
  int c = Serial.println(array[i]);
  delay(5000);  
  }

}
*/
/*
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
}

*/

