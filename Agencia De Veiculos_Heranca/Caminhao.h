#ifndef CAMINHAO_H
#define CAMINHAO_H

#include "Veiculo.h"
#include "Motor.h"

class Caminhao: public Veiculo,  Motor{
  private:
    string altura;
    string comprimento;
  public:
    Caminhao(string altura, string comprimento, float peso,int vel_max, float preco, int rg, string nome, int cil, int pot);
    string toString();
};

#endif