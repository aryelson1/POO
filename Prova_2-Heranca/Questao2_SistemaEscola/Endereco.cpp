#include "Endereco.h"



Endereco::Endereco(){
  this->cep = "-";
  this->num = 0;
}

Endereco::Endereco(string cep, int num){
  this->cep = cep;
  this->num = num;
}


string Endereco::getCep(){
  return this-> cep;
}

void Endereco::setCep(string cep){
  this->cep = cep;
}

int Endereco::getNum(){
  return this->num;
}

void Endereco::setNum(int num){
  this->num = num;
}

string Endereco::toString(){
  return ("Cep: "+ this->cep+"\nNumero: "+ to_string(this->num)+"\n");
}