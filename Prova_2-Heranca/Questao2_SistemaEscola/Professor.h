#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Pessoa.h"
#include "Funcionario.h"


class Professor: public Pessoa,Funcionario{

  public:
    Professor(string area,int cargaH,float salario,int rg,string nome, string cep, int num);
    Professor();

    string getArea();
    void setArea(string area);

    string toString();

  private:
    string area;
};

#endif
