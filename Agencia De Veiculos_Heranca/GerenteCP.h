#ifndef GERENTECP_H
#define GERENTECP_H

#include "CarroPasseio.h"

class GerenteCP{
  private:
    CarroPasseio garagem[3];
  public:
    void addCP(CarroPasseio &c);
    string pesquisarModelo(string modelo);
    bool removerCP(string modelo);
    void imprimir();
};

#endif