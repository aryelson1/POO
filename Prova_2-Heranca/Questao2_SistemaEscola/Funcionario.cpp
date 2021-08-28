#include "Funcionario.h"



Funcionario::Funcionario(int cargaH, float salario){
  this->cargaH = cargaH;
  this->salario = salario;
}

Funcionario::Funcionario(){
  this->cargaH = 0;
  this->salario = 0.0;
}


int Funcionario::getCargaH(){
  return this->cargaH;
}

void Funcionario::setCargaH(int cargaH){
  this->cargaH = cargaH;
}

float Funcionario::getSalario(){
  return this->salario;
}

void Funcionario::setSalario(float salario){
  this->salario = salario;
}


string Funcionario::toString(){
  return ("Carga horaria: " + to_string(this->cargaH) + "\nSalario: " + to_string(this->salario) + "\n");
}