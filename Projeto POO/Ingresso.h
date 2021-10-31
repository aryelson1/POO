#ifndef INGRESSO_H
#define	INGRESSO_H
#include <iostream>
#include <vector>
using namespace std;

class Ingresso
{
  private:
    bool meia_entrada; 
    string cpf;
    string IDingresso;
    float valor;
    int fila;
    int coluna;
  public:
    Ingresso(string IDingresso,string cpf,float valor,bool meia_entrada,int fila,int coluna);// construtor ingresso
    float getValor(); // Get Valor
    vector<string> get_ingresso();// Get Ingresso
    string getIDingresso(); // Get ID do ingresso
};
#endif