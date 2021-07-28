#include <iostream>

using namespace std;

#define taxaDeJurosAnual 0.3
#define taxaDeSaque 0.2

class contaDePoupanca
{

private:
    string nome;

    float saldo;

public:
    contaDePoupanca(string nome, float saldo);

    void calculeRendimentoMensal();

    void sacar(float saque);

    string toString();

    string getNome();

    void setNome(string novonome);

    float getSaldo();

    void setSaldo(float novosaldo);
};

contaDePoupanca::contaDePoupanca(string nome , float saldo){
    this->nome = nome;
    this->saldo = saldo;
}

void contaDePoupanca::calculeRendimentoMensal (){
    saldo = saldo + ((saldo * taxaDeJurosAnual) / 12);
}
void contaDePoupanca::sacar(float saque){
    float valor = saque + (saque * taxaDeSaque);
    if(saldo >= valor){
        saldo = saldo - valor;
        cout << "saque realizado com sucesso !" << endl;
    }else{
        cout << "Nao foi possivel realizar saque !" << endl;
    }
    
}

string contaDePoupanca::toString(){
    return "Titular da conta: " + nome + "\nsaldo: R$ "+ std::to_string(saldo);
}
string contaDePoupanca::getNome()
{
    return nome;
}

void contaDePoupanca::setNome(string novoNome)
{
    nome = novoNome;
}

float contaDePoupanca::getSaldo()
{
    return saldo;
}

void contaDePoupanca::setSaldo(float novosaldo)
{
    if (novosaldo >= 0)
    {
        saldo = novosaldo;
    }
    else
    {
        cout << "Impossivel adicionar novo saldo !" << endl;
    }
}