#include "Professor.h"


Professor::Professor(string area,int cargaH,float salario,int rg,string nome, string cep, int num):Funcionario(cargaH,salario),Pessoa(rg,nome,cep,num){
  this->area = area;
}

Professor::Professor():Pessoa(),Funcionario(){
  this->area = "-";
}

string Professor::getArea(){
  return this->area;
}


void Professor::setArea(string area){
  this->area = area;
}


string Professor::toString(){
  return ("Area: " + this->area +"\n"+Funcionario::toString() + "\n" +Pessoa::toString());
}

