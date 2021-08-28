#ifndef ALUNO_H
#define ALUNO_H

#include "Pessoa.h"

#include <iostream>
using namespace std;

class Aluno: public Pessoa{

  public:
    Aluno(float media,int matricula,int rg,string nome, string cep, int num);
    Aluno();

    float getMedia();
    void setMedia(float media);

    int getMatricula();
    void setMatricula(int matricula);

    string toString();

  private:
  
    float media;
    int matricula;
};

#endif