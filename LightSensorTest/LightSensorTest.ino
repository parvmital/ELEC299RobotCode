#include "TestingDefs.h"

void setup() {
 Serial.begin(115200);

}

void loop() {
  Serial.println("AnalogSensorTest");
  Serial.println(analogRead(LPin));
  Serial.println(analogRead(MPin));
  Serial.println(analogRead(RPin));
  delay(100);
}
