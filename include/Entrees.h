
#ifndef ENTREES_H
    #define  ENTREES_H

class Entrees
{
private:
  int pin1;
  int pin2;
  int pin3;
  int pin4;
  int pin5;
  int pin6;
  int pin7;
  int pin8;

public:
 Entrees(); 

 Entrees ( int pin1, int pin2,  int pin3, int pin4,  int pin5,  int pin6,  int pin7,  int pin8  );

 int Emode ();

 int Eactive();
    

};
#endif