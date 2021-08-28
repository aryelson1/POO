#include "GerenteCP.h"

void GerenteCP::addCP(CarroPasseio &c){
  for(int i=0;i<3;i++){
    if (garagem[i].getModelo()=="-"){
      garagem[i]=c;
      cout<<"Add com sucesso!"<<endl;
      return;
    }
  }
  cout<<"Garagem Lotada!"<<endl;
}

string GerenteCP::pesquisarModelo(string modelo){
  for(int i=0;i<3;i++){
    if (garagem[i].getModelo()==modelo){
      return garagem[i].toString();
    }
  }
  return "Modelo não encontrado!";
}

bool GerenteCP::removerCP(string modelo){
  for(int i=0;i<3;i++){
    if (garagem[i].getModelo()==modelo){
      garagem[i].setModelo("-");
      return true;
    }
  }
  return false;
}

void GerenteCP::imprimir(){
  for(int i=0;i<3;i++){
    if (garagem[i].getModelo()!="-"){
      cout<<garagem[i].toString()+"\n"<<endl;
    }
  }
}