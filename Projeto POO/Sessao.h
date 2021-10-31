#ifndef SESSAO_H
#define	SESSAO_H
#include "Sala.h"
#include "Programaçao.h"
#include "Ingresso.h"

class Sessao : virtual public Sala , Programaçao
{
  protected:
    int IDsessao;
    bool encerrada;
    float valor_inteira;
    vector<Ingresso>Ingressos;
  public:
    Sessao(int IDsessao,bool encerrada,float valor_inteira,int IDsala,int filas,int colunas,int dia,int mes,int ano,string horario,string filme,string idioma,bool legenda,bool tresD);// construtor classe sessao
    ~Sessao(); //destrutor classe sessao
    void info_sessao(); // imprime informações da sessao 
    void info_sala();  // imprime informações da sala
    int get_IDsessao(); // Get ID sessao
    int get_IDsala(); // Get ID sala
    string get_filme(); // Get Filme
    float get_valor(); // Get Valor
    void set_encerrada(bool encerrada); // encerra sessao
    void comprar_ingresso(string cpf, int &IDsessao,bool meia_entrada,int &fila,int &coluna); // comprar um ingresso
    bool getencerrada(); // Get encerra

    void cancelar_ingresso(string IDingresso); // Cancelar ingresso

    
    string vendas(); // resumos de vendas
    vector<string> getIngresso(string IDingresso); // retorna Ingresso
    bool verificaingresso(string IDingresso); // verificar Ingresso
};
  
#endif