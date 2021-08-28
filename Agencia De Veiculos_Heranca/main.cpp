#include <iostream>
using namespace std;
#include "CarroPasseio.h"
#include "Caminhao.h"
#include "GerenteCP.h"
int main() {
  CarroPasseio P("Fox", "Branco", 800.0, 180, 42.00, 123, "Leandro", 4, 32);
  CarroPasseio P2("Fox2", "Branco", 800.0, 180, 42.00, 123, "Any", 4, 32);
  CarroPasseio P3("Fox3", "Branco", 800.0, 180, 42.00, 123, "Luan", 4, 32);

  GerenteCP g;
  g.addCP(P);
  g.addCP(P2);
  g.addCP(P3);
  g.addCP(P);
  g.removerCP("Fox2");
  g.imprimir();
  g.addCP(P2);
  g.imprimir();
}