#include "Entrees.h"
#include "SortiesNature.h"
#include <Arduino.h>

Entrees entrees (13,12,14,27,26,25,33,32);
SortiesNature sorties (2,4,5,18,19,21,22,23);

void setup() {

  Serial.begin(9600);

  entrees.Emode();
   sorties.mode(); 
}

void loop() {
 
 sorties.active();
 entrees.Eactive();

    
}