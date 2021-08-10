/*
 * ContaDePoupanca.h
 *
 *  Created on: 30 de jul de 2021
 *      Author: leandro
 */


#pragma once
#include <iostream>
#define taxaDeJurosAnual 3
#define taxaDeSaque 2
using namespace std;

class ContaDePoupanca{
public:
	ContaDePoupanca(string titular, float valor);
	void calculeRendimentoMensal();
	bool sacar(float saque);
	string toString();
	string getTitular();
	void setTitular(string titular);
	float getValor();
	void setValor(float valor);

private:
	string titular;
	float valor;
};


