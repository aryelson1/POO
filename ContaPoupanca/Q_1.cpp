//============================================================================
// Name        : Q_1.cpp
// Author      : Leo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "ContaDePoupanca.h"

int main() {
	ContaDePoupanca C1("Leandro", 2000);
	ContaDePoupanca C2("Any", 300);

	if(C1.sacar(200))
		cout<<"Saque realizado com sucesso!"<<endl;
	else
		cout<<"Valor inválido!"<<endl;

	if(C2.sacar(300))
		cout<<"Saque realizado com sucesso!"<<endl;
	else
		cout<<"Valor inválido!"<<endl;

	C1.calculeRendimentoMensal();
	C2.calculeRendimentoMensal();

	cout<<C1.toString()<<endl;
	cout<<C2.toString()<<endl;

	return 0;
}
