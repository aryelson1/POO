#include <iostream>
#include "contaDePoupanca.h"

using namespace std;


main (){
    contaDePoupanca poupador1("Leandro",2000), poupador2("Any Caroliny",300);

    poupador1.sacar(200);
    poupador1.calculeRendimentoMensal();
    cout << poupador1.toString() << endl;

    cout << "________________________" << endl;

    poupador2.sacar(300);
    poupador2.calculeRendimentoMensal();
    cout << poupador2.toString() << endl;
    
    

}


