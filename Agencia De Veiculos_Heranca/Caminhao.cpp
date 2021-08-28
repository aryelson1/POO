#include "Caminhao.h"



Caminhao::Caminhao(string altura, string comprimento, float peso,int vel_max, float preco, int rg, string nome, int cil, int pot):Veiculo(peso, vel_max, preco, rg, nome), Motor(cil,pot){
  this->altura=altura;
  this->comprimento=comprimento;
}

string Caminhao::toString(){
  return ("Informações do Caminhão:\nAltura: "+this->altura+", comprimento: "+this->comprimento + "\n" +Veiculo::toString() +"\n"+Motor::toString());
}