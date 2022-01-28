#include "Entrees.h"
#include <Arduino.h>

Entrees::Entrees(){};

Entrees::Entrees(int pin1, int pin2,  int pin3, int pin4,  int pin5,  int pin6,  int pin7,  int pin8  ){

this->pin1 = pin1;
this-> pin2= pin2;
this->pin3 = pin3;
this->pin4 = pin4;
this->pin5 = pin5;
this-> pin6 = pin6;
this->pin7 = pin7;
this->pin8 = pin8;

};

int Entrees::Eactive(){
digitalRead(this->pin1 );
digitalRead(this->pin2 );
digitalRead(this->pin3);
digitalRead(this->pin4);
digitalRead(this->pin5);
digitalRead(this->pin6);
digitalRead(this->pin7);
digitalRead(this->pin8);

   
};

int Entrees::Emode() {
pinMode(this->pin1 ,INPUT);
pinMode(this->pin1 ,INPUT);
pinMode(this->pin1 ,INPUT);
pinMode(this->pin1 ,INPUT);
pinMode(this->pin1 ,INPUT);
pinMode(this->pin1 ,INPUT);
pinMode(this->pin1 ,INPUT);
pinMode(this->pin1 ,INPUT);
    
};
