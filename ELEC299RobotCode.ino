
//ELEC299 Robot Code
//By: Mitchell Waite
//March 5, 2015

#include <QSerial.h>
#include <Servo.h>
#include "FcnDefs.h"

QSerial myCereal;
Servo panServo;
Servo tiltServo;
Servo gripServo;

void setup() {
  
 Serial.begin(115200); //open serial for USB or bt
 myCereal.attach(3,-1); //pin 4 receieve
  panServo.attach(pan);
  panServo.write(90);
  tiltServo.attach(tilt);
  tiltServo.write(110);
  gripServo.attach(grip); 
  gripServo.write(0);
  
  delay(1000);
  grabBall();
  
}

void loop() {
  int ch = myCereal.receive(200);
  switch(ch)
  {
      case 48:
        Serial.println("Recieved a Zero");
        break;
      case 49:
        Serial.println("Received a One");
        break;
      case 50:
        Serial.println("Recieved a Two");
        break;
      default:
        Serial.print("Error: this was recieved: ");
        Serial.println(ch);
        Serial.println((char)ch);
  }
  delay(500);
}

void center()
{
  
}

void left()
{
  
}

void right()
{
  //gets the ball from the spot to the right of the start pos
}

void grabBall()
{
  tiltServo.write(20);
  delay(1000);
  gripServo.write(40);
  delay(500);
  tiltServo.write(110);
  delay(500);
}
