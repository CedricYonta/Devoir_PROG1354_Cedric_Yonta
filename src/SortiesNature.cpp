#include "SortiesNature.h"
#include <Arduino.h>

SortiesNature::SortiesNature(){};

SortiesNature::SortiesNature(int pin1, int pin2,  int pin3, int pin4,  int pin5,  int pin6,  int pin7,  int pin8  ){

this->outPin1 = pin1;
this->outPin2 = pin2;
this->outPin3 = pin3;
this->outPin4 = pin4;
this->outPin5 = pin5;
this->outPin6 = pin6;
this->outPin7 = pin7;
this->outPin8 = pin8;

};

int SortiesNature::active(){
digitalWrite(this->outPin1, HIGH);
digitalWrite(this->outPin2, HIGH);
digitalWrite(this->outPin3, HIGH);
digitalWrite(this->outPin4, LOW);
digitalWrite(this->outPin5, LOW);
digitalWrite(this->outPin6, LOW);
digitalWrite(this->outPin7, LOW);
digitalWrite(this->outPin8, LOW);
   
};

int SortiesNature::mode() {
    pinMode(this->outPin1 ,OUTPUT);
    pinMode(this->outPin2 ,OUTPUT);
    pinMode(this->outPin3 ,OUTPUT);
    pinMode(this->outPin4 ,OUTPUT);
    pinMode(this->outPin5 ,OUTPUT);
    pinMode(this->outPin6 ,OUTPUT);
    pinMode(this->outPin7 ,OUTPUT);
    pinMode(this->outPin8 ,OUTPUT);

    
};