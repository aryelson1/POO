#include "Ingresso.h"

Ingresso :: Ingresso(string IDingresso,string cpf,float valor,bool meia_entrada,int fila,int coluna)
{
  this->IDingresso = IDingresso;
  this->cpf = cpf;
  this->valor = valor;
  this->meia_entrada = meia_entrada;
  this->fila = fila;
  this->coluna = coluna;
}


float Ingresso :: getValor()
{
  return this->valor;
}

vector<string> Ingresso :: get_ingresso()
{ 
  vector<string> ing;
  ing.push_back("ID: "+IDingresso);
  ing.push_back("CPF: "+cpf);
  ing.push_back("Valor: "+to_string(valor));
  ing.push_back("Assento: "+to_string(fila)+to_string(coluna));
  return ing;
}

string Ingresso :: getIDingresso()
{
  return this->IDingresso;
}
