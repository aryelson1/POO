#ifndef PESSOA_H
#define PESSOA_H

#include "Endereco.h"

class Pessoa: public Endereco{

  public:
    Pessoa(int rg,string nome, string cep, int num);
    Pessoa();
    string getNome();
    void setNome(string nome);

    int getRg();
    void setRg(int rg);

    string toString();

  protected:
    int rg;
    string nome;

};

#endif