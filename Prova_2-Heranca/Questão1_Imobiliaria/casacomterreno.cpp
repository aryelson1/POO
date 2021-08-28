#include "casacomterreno.h"

casacomterreno::casacomterreno(float valorMQ,float area,int n_quartos,int id):terreno(area,id),casa(n_quartos,id){
  this->valorMQ = valorMQ;
}

float casacomterreno::calculoValor(){
  float valor = this->valorMQ * terreno::getArea() * casa::getN_quartos();
  casa::setValor(valor);
  return valor;
}

string casacomterreno::toString(){
  return casa::toString() + "\n" + terreno::toString() + "\nValor total da casa:" + to_string(calculoValor());
}