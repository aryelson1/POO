#include <iostream>
using namespace std;

#include "Motor.h"

Motor::Motor(int cil, int pot){
  this->cil=cil;
  this->pot=pot;
}

Motor::Motor(){
  this->cil=0;
  this->pot=0;
}

string Motor::toString(){
  return ("Motor:\nCilindros: " + to_string(this->cil) + " potência: "+to_string(this->pot));
}