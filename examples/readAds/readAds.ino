#include "Ads1118.h"
#include <SPI.h>
#define CS 5

Ads1118 ads1118(CS);

void setup() {
  // put your setup code here, to run once:
  ads1118.begin();
  while(!Serial)
  ;
}

void loop() {
  // put your main code here, to run repeatedly:
    Serial.println("reading from ADS AIN1");
    Serial.println(ads1118.adsRead(ads1118.AIN1), DEC);
    Serial.printl
    
    delay(1000);
}
