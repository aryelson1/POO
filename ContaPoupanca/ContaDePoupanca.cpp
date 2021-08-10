/*
 * ContaDePoupanca.cpp
 *
 *  Created on: 30 de jul de 2021
 *      Author: leandro
 */



#include <iostream>
using namespace std;

#include "ContaDePoupanca.h"

ContaDePoupanca::ContaDePoupanca(string titular, float valor){
	this->titular=titular;
	if (valor<0){
		this->valor=0;
	}
	else
		this->valor=valor;
}


void ContaDePoupanca::calculeRendimentoMensal(){
	float ren_anual= (this->valor * taxaDeJurosAnual)/100;
	this->valor+=ren_anual/12;
}

bool ContaDePoupanca::sacar(float saque){
	saque+= (saque*taxaDeSaque)/100;
	if (this->valor>=saque){
		this->valor-=saque;
		return true;
	}
	else{
		return false;
	}
}

string ContaDePoupanca::toString(){
	return "Nome: "+this->titular+ ", saldo: "+ to_string(this->valor);
}

inline string ContaDePoupanca::getTitular(){
	return titular;
}

inline void ContaDePoupanca::setTitular(string titular) {
	this->titular = titular;
}

inline float ContaDePoupanca::getValor() {
	return valor;
}

inline void ContaDePoupanca::setValor(float valor) {
	this->valor = valor;
}

