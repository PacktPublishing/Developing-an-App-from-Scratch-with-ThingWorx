
//Written by Junaid Ahmed

String array[] = {"US","DE","CN","IN"};


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  
for(int i=3; i>=0; i--)
{
  Serial.println(array[i]);
  delay(2000);
  }
}
