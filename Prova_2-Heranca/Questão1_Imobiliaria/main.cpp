#include <iostream>
#include "casacomterreno.h"
int main() {
  casacomterreno casa1(2.5,35.5,6, 0);// float valorMQ, float area, int n_quartos, int id
  cout << casa1.toString() << endl;
}