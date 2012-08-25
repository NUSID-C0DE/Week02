/*
  Push Button 
  Turns on an LED while button is pressed, then off if button is released.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 11;

// digital pin 2 has a pushbutton attached to it. Give it a name:
int pushButton = 2;
int buttonState = LOW;



// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);  
  pinMode(pushButton, INPUT);  
}

// the loop routine runs over and over again forever:
void loop() {

  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  int brightness;
  
  brightness = LEDmap(sensorValue,0,1023,0,255);
   
  analogWrite(led, buttonState);   // turn the LED on (HIGH is the voltage level)

  delay(100);               // wait for a while

}
