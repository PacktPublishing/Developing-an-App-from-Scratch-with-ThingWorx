
//Syntax  
//pinMode(pin, mode)
//Reconfigures a digital pin to behave either as an input or an output.
//Example:
pinMode(7,INPUT); // turns pin 7 into an input
pinMode(7,OUTPUT); // turns pin 7 into a output

//Syntax
//digitalRead(pin)
Cal = digitalRead(3);

//Syntax
//digitalWrite(pin, value)
//Turns a digital pin either on or off. Pins must be explicitly made into an
//output using pinMode before digitalWrite will have any effect.
//Example:
digitalWrite(8,HIGH); // turns on digital pin 8

//Syntax
//analogRead(pin)
//Returns
//int (0 to 1023)
val = analogRead(analogPin);
val = analogRead(A0);

//Syntax
//analogWrite(pin, value)
//value: the duty cycle: between 0 (always off) and 255 (always on).
val = analogRead(analogPin);   // read the input pin
analogWrite(A0, val / 4);  // analogRead values go from 0 to 1023, analogWrite values from 0 to 255

//Syntax
//delay(ms)
delay(1000);

//Syntax
//sizeof(variable)
sizeof(variable);


