#ifndef CASACOMTERRENO_H
#define CASACOMTERRENO_H
#include "terreno.h"
#include "casa.h"

class casacomterreno: public terreno,casa{
  public:
    casacomterreno(float valorMQ,float area,int n_quartos,int id);
    float calculoValor();
    string toString();
  private:
    float valorMQ; 

};
#endif