#ifndef ENDERECO_H
#define ENDERECO_H

#include <iostream>
using namespace std;

  
class Endereco{

  public:
    Endereco(string cep,int num);
    Endereco();
    string getCep();
    void setCep(string cep);

    int getNum();
    void setNum(int num);
    string toString();
    
  private:
    int num;
    string cep;
};

#endif