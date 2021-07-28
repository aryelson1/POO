#include <iostream>
#include <cstring>

using namespace std;


class Aluno
{

public:
    Aluno(string nome);

    void addNota(int unidade, float valor);

    bool alterarNota(int unidade, float valor);

    void calculoMedia();

    string toString();

    string getNome();

    void setNome(string nome);

private:
    string nome;

    float notas[3];
};

Aluno::Aluno(string nome){
    this->nome = nome;
    this->notas[0] = {-1};
    this->notas[1] = {-1};
    this->notas[2] = {-1};
}

void Aluno::addNota(int unidade, float valor){
    if ((0 < unidade) && (unidade <= 3) && (valor <= 100) && (valor >= 0)){
        if (notas[unidade-1] == -1){
            notas[unidade-1] = valor;
            cout << "Nota Adicionada !" << endl;
        }else{
            cout << "Nota da Unidade " << unidade << " ja adicionar, Utilize o alterarNota !" << endl;
        }
        
    }else{
        cout << "Nota ou Unidade Invalida !" << endl;
    }
}

bool Aluno::alterarNota(int unidade, float valor ){
    if ((0 < unidade) && (unidade <= 3) && (valor <= 100) && (valor >= 0)){
        if (notas[unidade-1] >= 0){
            notas[unidade-1] = valor;
        }else{
            cout << "Nota da Unidade " << unidade << " nao foi adicionada, Utilize o AddNota !" << endl;
        }
        
    }else{
        cout << "Nota ou Unidade Invalida !" << endl;
    }
}

void Aluno::calculoMedia(){
    if (notas[0] != -1 && notas[1] != -1 && notas[2] != -1){
        float media = (notas[0]+notas[1]+notas[2])/3;
        
        if( media >= 70){
            cout << "Aluno Aprovado !" << endl;
        }else if( media < 40){
            cout << "infelizmente o aluno foi reprovado ..."  << endl;
        }else{
            cout << "Apto para o Exame Final"  << endl;
        }
    }else{
        cout << "Nao foi possivel calcular a Media !"  << endl;
    }
}

string Aluno::toString(){
    string texto = "Aluno " + nome + "\nNota 1:" + std::to_string(notas[0]) + "\nNota 2: " + std::to_string(notas[1]) + "\nNota 3:" + std::to_string(notas[2])+"\nMedia: -";
    if (notas[0] != -1 && notas[1] != -1 && notas[2] != -1){
        float media = (notas[0]+notas[1]+notas[2])/3;
        texto = "Aluno " + nome + "\nNota 1:" + std::to_string(notas[0]) + "\nNota 2: " + std::to_string(notas[1]) + "\nNota 3:" + std::to_string(notas[2])+"\nMedia: "+ std::to_string(media);
    }
    
    return texto;
    

    
}
string Aluno::getNome(){
    return nome;
}

void Aluno::setNome(string nome){
    this->nome = nome;
}