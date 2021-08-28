#include "CarroPasseio.h"


CarroPasseio::CarroPasseio(string modelo, string cor, float peso,int vel_max, float preco, int rg, string nome, int cil, int pot):Veiculo(peso, vel_max, preco, rg, nome), Motor(cil,pot){
  this->modelo=modelo;
  this->cor=cor;
}

CarroPasseio::CarroPasseio():Veiculo(), Motor(){
  this->modelo="-";
  this->cor="";
}

string CarroPasseio::toString(){
  return ("Informações do Carro:\nModelo: "+this->modelo+" Cor: "+this->cor + "\n" +Veiculo::toString() +"\n"+Motor::toString());
}

string CarroPasseio::getModelo(){
  return this->modelo;
}

void CarroPasseio::setModelo(string modelo){
  this->modelo=modelo;
}