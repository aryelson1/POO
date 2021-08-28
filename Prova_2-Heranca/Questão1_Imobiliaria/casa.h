#ifndef CASA_H
#define CASA_H
#include "imovel.h"

class casa: public imovel{
  public:
    casa(int n_quartos,int id);
    int getN_quartos();
    void setValor(float valor);
    string toString();
  private:
    int n_quartos; 

};
#endif