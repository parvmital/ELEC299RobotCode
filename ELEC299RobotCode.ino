//ELEC299 Robot Code
//By: Mitchell Waite
//March 5, 2015

#include <QSerial.h>
#include "FcnDefs.h"
QSerial myCereal;

void setup() {
  
 Serial.begin(115200); //open serial for USB or bt
 myCereal.attach(4,-1); //pin 4 receieve
 
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
