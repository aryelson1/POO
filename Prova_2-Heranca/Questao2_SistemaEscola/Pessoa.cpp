#include "Pessoa.h"



Pessoa::Pessoa(){
  this->nome = "-";
  this->rg = 0;
}

Pessoa::Pessoa(int rg,string nome,string cep, int num):Endereco(cep,num){
  this->nome = nome;
  this->rg = rg;
}


string Pessoa::getNome(){
  return this-> nome;
}

void Pessoa::setNome(string nome){
  this->nome = nome;
}

int Pessoa::getRg(){
  return this->rg;
}

void Pessoa::setRg(int rg){
  this->rg = rg;
}


string Pessoa::toString(){
  return ("Nome: " + this->nome + "\nRG: " + to_string(this->rg))+"\n" + Endereco::toString();
}