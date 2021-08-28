#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
using namespace std;


class Funcionario{

  public:
    Funcionario(int cargaH,float salario);
    Funcionario();
    
    int getCargaH();
    void setCargaH(int cargaH);

    float getSalario();
    void setSalario(float salario);

    string toString();

  protected:
    int cargaH;
    float salario;

};




#endif