#ifndef TERRENO_H
#define TERRENO_H
#include "imovel.h"


class terreno: public imovel{
  public:
    terreno(float area,int id);
    float getArea();
    string toString();
  private:
    float area; 

};
#endif