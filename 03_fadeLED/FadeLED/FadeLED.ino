/*
 Fade
 
 This example shows how to fade an LED on pin 9
 using the analogWrite() function.
 
 This example code is in the public domain.
 */

int led = 11;           // the pin that the LED is attached to
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup()  { 
  // declare pin 9 to be an output:
  pinMode(led, OUTPUT);
} 

// the loop routine runs over and over again forever:
void loop()  { 
  // set the brightness of pin 9:
  int i;
  
  // ramp up the LED brightness.
  for(i = 0; i <= 255; i = i + fadeAmount){
    analogWrite(led, brightness);    
    delay(30);                            
  }

  delay(100); //wait for a while at the top brigtness
  
  // ramp down the LED brightness.
  for(i = 255; i >= 0; i = i - fadeAmount){
    analogWrite(led, brightness);    
    delay(30);                              
  }
  
  delay(100); //wait for a while 


  // wait for 30 milliseconds to see the dimming effect    
}

