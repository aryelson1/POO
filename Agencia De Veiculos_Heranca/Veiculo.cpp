#include "Veiculo.h"



Veiculo::Veiculo(float peso,int vel_max, float preco, int rg, string nome):dono(nome,rg){
  this->peso=peso;
  this->vel_max=vel_max;
  this->preco=preco;
}

Veiculo::Veiculo():dono(){
  this->peso=0;
  this->vel_max=0;
  this->preco=0.0;
}


string Veiculo::toString(){
  return (" Peso: "+to_string(this->peso)+" Velocidade: "+to_string(this->vel_max)+" Preço: "+to_string(this->preco)+"\nDono:\n"+dono.toString());
}