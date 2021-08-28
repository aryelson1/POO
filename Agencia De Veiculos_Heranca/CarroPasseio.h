#ifndef CARROPASSEIO_H
#define CARROPASSEIO_H

#include "Veiculo.h"
#include "Motor.h"

class CarroPasseio: public Veiculo,  Motor{
  private:
    string modelo;
    string cor;
  public:
    CarroPasseio(string modelo, string cor, float peso,int vel_max, float preco, int rg, string nome, int cil, int pot);
    CarroPasseio();
    string toString();
    string getModelo();
    void setModelo(string modelo);
};

#endif