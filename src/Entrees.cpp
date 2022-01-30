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
    int broche1 = digitalRead(this->pin1 );
    int broche2 = digitalRead(this->pin2 );
    int broche3 =digitalRead(this->pin3);
    int broche4 = digitalRead(this->pin4);
    int broche5 = digitalRead(this->pin5);
    int broche6 = digitalRead(this->pin6);
    int broche7 = digitalRead(this->pin7);
    int broche8 = digitalRead(this->pin8);
 
 if(broche1 == HIGH || broche2 == HIGH  ||broche3 == HIGH ){
     Serial.println("le cable fonctionne");
 }
else
 {
     Serial.println("le cable ne fonctionne pas ou est mal branché ");
 }
 
 delay(5000);

 

 if (broche1 == HIGH && broche2 == HIGH && broche3 == HIGH )
 {
    Serial.println("Il s'agit d'un cable droit");
 }
 else if (broche1 == HIGH && broche3 == HIGH && broche6 == HIGH )
 {
      Serial.println("Il s'agit d'un cable croisé");
 }
 else
 {
     Serial.println("Veuillez bien brancher le cable selon une norme");
 }
 

 
   
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
