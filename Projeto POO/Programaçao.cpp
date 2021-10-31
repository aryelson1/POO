#include "Programaçao.h"

Programaçao :: Programaçao(int dia,int mes,int ano,string horario,string filme,string idioma,bool legenda,bool tresD)
{
  this->dia = dia;
  this->mes = mes;
  this->ano = ano;
  this->horario = horario;
  this->filme = filme;
  this->idioma = idioma;
  this->legenda = legenda;
  this->tresD = tresD;
}

void Programaçao :: info_programaçao()
{
  cout<<"Filme : "<<filme<<endl;
  cout<<horario<<"  -  "<<dia<<"/"<<mes<<"/"<<ano<<endl;
  cout<<"Info:"<<endl;
  if(tresD ==true){cout<<"3D ";}else{cout<<"2D ";};
  cout<<idioma;
  if(legenda ==true){cout<<" Legendado"<<endl;}else{cout<<" Sem Legenda"<<endl;};
}

vector<string> Programaçao :: get_programaçao()
{
  vector<string> ing;
  ing.push_back("FILME: "+filme);
  ing.push_back(horario+"  -  "+to_string(dia)+"/"+to_string(mes)+"/"+to_string(ano));
  if(tresD ==true){ing.push_back("3D ");}else{ing.push_back("2D");};
  ing.push_back("IDIOMA: "+idioma);
  if(legenda ==true){ing.push_back("Legendado");}else{ing.push_back("Sem Legenda");};
  return ing;
} 