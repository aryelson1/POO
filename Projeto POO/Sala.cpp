#include "Sala.h"

Sala :: Sala(int IDsala,int filas,int colunas)
{
  this->IDsala =IDsala;
  this->filas = filas;
  this->colunas = colunas;
  for(int i=0;i<filas;i++)
  {
    vector <Assento> aux;
    for(int j=0;j<colunas;j++)
    {
      Assento assento;
      assento.fila = i;
      assento.coluna = j;
      assento.ocupado = false;
      aux.push_back(assento);
    };
    this->Assentos.push_back(aux);
  };
}

int Sala :: ocupar(int &filas,int &colunas)
{
  if((this->filas<=filas)||(this->colunas<=colunas))
  {
    cout<<"Assento não existe."<<endl;
    return 0;
  };
  Assentos[filas][colunas].ocupado = true;
  return 1;
}

int Sala :: desocupar(int &filas,int &colunas)
{
  if((this->filas<=filas)||(this->colunas<=colunas))
  {
    cout<<"Assento não existe"<<endl;
    return 0;
  };
  Assentos[filas][colunas].ocupado = false;
  return 1;
}

void Sala :: info_sala()
{
  cout<<"ID da Sala: "<<IDsala<<endl;
  int count = 0;
  for(int i=0;i<filas;i++)
  {
    for(int j=0;j<colunas;j++)
    {
      if(Assentos[i][j].ocupado ==true){cout<<" -- ";count++;}else{cout<<" "<<i<<j<<" ";};
    };
    cout<<endl;
  };
  cout<<(filas*colunas)<<" Assentos"<<endl;
  cout<<count<<" Assentos ocupados"<<endl;
}

bool Sala :: verificar_livre(int &filas,int &colunas)
{
  if(Assentos[filas][colunas].ocupado==false)return true;
  return false;
}