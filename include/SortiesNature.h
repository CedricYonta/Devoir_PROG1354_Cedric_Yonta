#ifndef SORTIESNATURE_H
    #define  SORTIESNATURE_H

class SortiesNature
{
private:
  int outPin1;
  int outPin2;
  int outPin3;
  int outPin4;
  int outPin5;
  int outPin6;
  int outPin7;
  int outPin8;

public:
 SortiesNature(); 

 SortiesNature ( int pin1, int pin2,  int pin3, int pin4,  int pin5,  int pin6,  int pin7,  int pin8  );

 int mode ();

 int active();
    

};
#endif