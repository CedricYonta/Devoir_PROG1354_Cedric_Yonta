#include "Entrees.h"
#include "Sorties.h"
#include <Arduino.h>


void setup() {

  Serial.begin(9600);
}

void loop() {

  Entrees entrees(2,4,5,18,19,21,22,23);
  Sorties sorties (13,12,14,27,26,25,33,32);
   
   entrees.Emode();
   sorties.mode();

    entrees.Eactive();
   sorties.active();

   delay(1000);
    
}