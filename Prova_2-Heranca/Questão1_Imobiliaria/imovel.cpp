#include <iostream>
using namespace std;
#include "imovel.h"


imovel::imovel(int id){
  this->preco = 0;
  this->id = id;

}

void imovel::setPreco(float preco){
  this->preco = preco;
}

string imovel::toString(){
  return ("ID: "+to_string(this->id));
}

float imovel::getPreco(){
  return this->preco;
}