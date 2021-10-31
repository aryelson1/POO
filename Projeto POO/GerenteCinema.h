#ifndef GERENTECINEMA_H
#define	GERENTECINEMA_H
#include "Sessao.h"
#include<iostream>
using namespace std;

class GerenteCinema
{
  private:
  int IDcinema;
  string senha;
  vector<Sessao> Sessoes;
  public:
    GerenteCinema(int IDcinema,string senha);
    // Construtor GerenteCinema
    void CriarSessao(int &IDsessao,bool encerrada,float &valor_interia,int &IDsala,int &filas,int &colunas,int &dia,int &mes,int &ano,string horario,string filme,string idioma,bool legenda,bool tresD);
    // Criar uma nova sessao
    bool AbrirSessao(int &IDsessao);
    // Abrir Sessao
    bool FecharSessao(int &IDsessao);
    // Encerra a sessao
    void ComprarIngresso(string cpf,int &IDsessao,bool meia_entrada,int &fila,int &coluna);
    // Comprar um novo Ingresso
    bool verificaSessao(int &IDsessao);
    // Verificar Sessao


    void CancelarIngresso(string IDingresso,int &IDsessao);
    // Cancelar Ingresso

    
    vector<string> EmitirIngresso(string IDingresso,int &IDsessao);
    // Imprime o ingresso
    bool verifica_ingresso(string IDingresso,int &IDsessao);
    // Verifica o ingresso
    void CalcularVendapSessao(int &IDsessao);
    // Calcula e retorna as vendas por sessão
    void CalcularVendas();
    // Calcula o faturamento geral
    void InfoSessao(int &IDsessao);
    // Imprime informações da sessao
    void InfoSala(int &IDsala);
    // Imprime Informações da sala
    void InfoProgramaçao(string filme);
    // Imprime Informações da programação
};

#endif