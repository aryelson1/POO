#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
using namespace std;

  
class Pessoa{

  public:
    Pessoa(string nome, int idade);
    Pessoa();
    ~Pessoa();

    void setNome(string nome);
    string getNome();
    void setRg(int Rg);
    int getRg();
    string toString();
  private:
    int rg;
    string nome;
};

#endif

