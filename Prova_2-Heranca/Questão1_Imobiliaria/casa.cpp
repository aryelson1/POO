#include "casa.h"


casa::casa(int n_quartos,int id):imovel(id){
  this->n_quartos = n_quartos;
}

string casa::toString(){
  return (imovel::toString()+"\nNumero de quartos: " + to_string(this->n_quartos));
}
void casa::setValor(float valor){
  imovel::setPreco(valor);
}
int casa::getN_quartos(){
  return this->n_quartos;
}