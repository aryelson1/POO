#ifndef PROGRAMAÇAO_H
#define PROGRAMAÇAO_H
#include<iostream>
#include<vector>
using namespace std;

class Programaçao
{
  protected:
    int dia;
    int mes;
    int ano;
    string horario;
    string filme;
    string idioma;
    bool legenda;
    bool tresD;
  public:
    Programaçao(int dia,int mes,int ano,string horario,string filme,string idioma,bool legenda,bool tresD);
    // Construtor programação
    void info_programaçao(); // Imprime informações da programação
    vector<string> get_programaçao();// Get programação
};
#endif