#ifndef VEICULO_H
#define VEICULO_H
#include "Pessoa.h"

class Veiculo{
  public:
    Veiculo(float peso,int vel_max, float preco, int rg, string nome);
    Veiculo();
    string toString();
  private:
    float peso;
    int vel_max; 
    float preco;
    Pessoa dono;
  

};
#endif