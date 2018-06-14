// written by Junaid Ahmed

int a = 1;
int sensor = 5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  
//int sensor = digitalRead(12);
 
  if (sensor == 1 || a == 1)
  {
    Serial.println("PIN is High");
    delay(5000);
        }
  else
  {
    Serial.println("PIN is Low");
    delay(5000);
    }
}
