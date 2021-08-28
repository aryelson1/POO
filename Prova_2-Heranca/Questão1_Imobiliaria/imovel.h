#ifndef IMOVEL_H
#define IMOVEL_H
#include <iostream>
using namespace std;

class imovel{
  public:
    imovel(int id);
    float getPreco();
    void setPreco(float preco);
    string toString();
  private:
    float preco;
    int id; 

};
#endif