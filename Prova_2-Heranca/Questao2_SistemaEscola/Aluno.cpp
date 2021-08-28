#include "Aluno.h"

Aluno::Aluno(float media,int matricula,int rg,string nome, string cep, int num):Pessoa(rg,nome,cep,num){
  this->media = media;
  this->matricula = matricula;
}


Aluno::Aluno():Pessoa(){
  this->media = 0.0;
  this->matricula = -1;
}

float Aluno::getMedia(){
  return this-> media;
}

void Aluno::setMedia(float media){
  this->media = media;
}

int Aluno::getMatricula(){
  return this->matricula;
}

void Aluno::setMatricula(int matricula){
  this->matricula = matricula;
}


string Aluno::toString(){
  return ("Matricula: " + to_string(this->matricula) + "\nMedia: " + to_string(this->media)+"\n" + Pessoa::toString()) ;
}