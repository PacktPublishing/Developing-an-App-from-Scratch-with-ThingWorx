//Written by Junaid Ahmed
//Under CC Lincense

#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>


const char* ssid = "khan";
const char* password = "9500075698";

char* server = "http://13.114.205.176";
char* APIKEY = "1331b76a-3ee1-41bd-b086-83100160d625";

//Thingworx details
char ThingName[]= "TESTSEND";
char ServiceName[]= "SetValue";
char Property1[] = "Motion";
char Property2[] = "Light";
char Property3[] = "Location";

#define ACCEPT_TYPE "text/csv"  

// digital pin 1 has a pushbutton attached to it. Give it a name:
int pushButton = 5; 

 
void setup () {
 
  Serial.begin(115200);
  pinMode(pushButton, INPUT);
  digitalWrite(pushButton, LOW);
  WiFi.begin(ssid, password);
 
  while (WiFi.status() != WL_CONNECTED) {
 
    delay(1000);
    Serial.print("Connecting..");

     //dht.begin();
 
  }
 
}
 
void loop() {
 
  if (WiFi.status() == WL_CONNECTED) { //Check WiFi connection status
 
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(500);        // delay in between reads for stability

  
    HTTPClient http;  //Declare an object of class HTTPClient
    //int l = 43;

     String k = "{\"Light\":\""+String(sensorValue)+"\"}" ;
   // int h = l.length();
    Serial.println(k);

   String fullRequestURL2 = String(server) + "/Thingworx/Things/"+ ThingName +"/Properties/"+ Property2+"?appKey=" + String(APIKEY);
    
    http.begin(fullRequestURL2);  //Specify request destination
    http.addHeader("Accept",ACCEPT_TYPE,false,false);
    http.addHeader("Content-Type","application/json",false,false);
    Serial.println(fullRequestURL2);
    int httpCode = http.sendRequest("PUT",k);                                                             //Send the request
 
    if (httpCode > 0) { //Check the returning code
 
      String payload = http.getString();   //Get the request response payload
      Serial.println(payload);                     //Print the response payload     
 
    }

    // Read the motion sensor pin 
    
     digitalWrite(pushButton, LOW);
    int buttonState = digitalRead(pushButton);
    
       String i = "{\"Motion\":\""+String(buttonState)+"\"}" ;
   // int h = l.length();
    Serial.println(i);

   String fullRequestURL1 = String(server) + "/Thingworx/Things/"+ ThingName +"/Properties/"+ Property1+"?appKey=" + String(APIKEY);
    
    http.begin(fullRequestURL1);  //Specify request destination
    http.addHeader("Accept",ACCEPT_TYPE,false,false);
    http.addHeader("Content-Type","application/json",false,false);
    Serial.println(fullRequestURL1);
    int httpCode1 = http.sendRequest("PUT",i);                                                             //Send the request
 
    if (httpCode1 > 0) { //Check the returning code
 
      String payload = http.getString();   //Get the request response payload
      Serial.println(payload);                     //Print the response payload     
 
    }


     String loc = "13, 80";
     String j = "{\"Location\":\""+loc+"\"}" ;
   // int h = l.length();
    Serial.println(j);

   String fullRequestURL3 = String(server) + "/Thingworx/Things/"+ ThingName +"/Properties/"+ Property3+"?appKey=" + String(APIKEY);
    
    http.begin(fullRequestURL3);  //Specify request destination
    http.addHeader("Accept",ACCEPT_TYPE,false,false);
    http.addHeader("Content-Type","application/json",false,false);
    Serial.println(fullRequestURL3);
    int httpCode2 = http.sendRequest("PUT",j);                                                             //Send the request
 
    if (httpCode2 > 0) { //Check the returning code
 
      String payload = http.getString();   //Get the request response payload
      Serial.println(payload);                     //Print the response payload     
 
    }
 
    http.end();   //Close connection
 
  }
 
  delay(3000);    //Send a request every 3 seconds
 
  }
