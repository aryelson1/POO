#ifndef SALA_H
#define	SALA_H
#include<iostream>
#include<vector>
using namespace std;

typedef struct assento
{
  bool ocupado;
  int coluna;
  int fila;
}Assento;

class Sala
{
	protected:
    int IDsala;
    int filas;
    int colunas;
    vector<vector<Assento>> Assentos;
	public:
    Sala(int IDsala,int filas,int colunas);
    bool verificar_livre(int &fila,int &colunas);
    int ocupar(int &filas,int &colunas);
    int desocupar(int &filas,int &colunas);
    void info_sala();
};
#endif	
