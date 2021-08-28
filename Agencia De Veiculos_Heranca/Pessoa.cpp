#include <iostream>
using namespace std;
#include "Pessoa.h"

Pessoa::Pessoa(string nome, int rg){
  this->nome=nome;
  this->rg=rg;
}

Pessoa::Pessoa(){
  this->nome="";
  this->rg=0;
}

Pessoa::~Pessoa(){
 
}

void Pessoa::setNome(string nome){
  this->nome=nome;
}

string Pessoa::getNome(){
  return this->nome;
}

void Pessoa::setRg(int rg){
  this->rg=rg;
}

int Pessoa::getRg(){
  return this->rg;
}

string Pessoa::toString(){
  return ("Nome: " + this->nome+" rg: "+to_string(this->rg));
}