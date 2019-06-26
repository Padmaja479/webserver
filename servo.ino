/* Sweep
  by BARRAGAN <http://barraganstudio.com>
  This example code is in the public domain.

  modified 28 May 2015
  by Michael C. Miller
  modified 8 Nov 2013
  by Scott Fitzgerald

  http://arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>
#define SWITCH D3

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards


void setup() {
  pinMode(SWITCH,INPUT);
  myservo.attach(D2); 
  Serial.begin(9600);// attaches the servo on GIO2 to the servo object
}

void loop() {
 
boolean state;
state=digitalRead(D3);
//digitalWrite(led,state);

if(state==LOW){
  
 
    Serial.println(state);// tell servo to go to position in variable 'pos'
    myservo.write(45);
        
  
  
}

else{
  myservo.write(0);
   Serial.println(state);}

}

  
