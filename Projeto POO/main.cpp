#include<iostream>
using namespace std;
#include "GerenteCinema.h"
#include <fstream>

void menu1(GerenteCinema &cinema);
void menu2(GerenteCinema &cinema);
void menu3(GerenteCinema &cinema);

int main()
{
  int opçao;
  GerenteCinema cinema(1234,"senha");
  do
  {
    system("clear");
    cout << "Opções do Sistema " << endl;
    cout << "------------------------" << endl;
		cout << "1 - Gerenciar Sessões " << endl;
    cout << "2 - Gerenciar Venda de Ingressos" << endl;
    cout << "3 - Mostrar Informações" << endl;
	  cout << "0 - Sair " << endl;
    cout << "-------------------------" <<endl;

		cin >> opçao;

		switch (opçao)
    {
			case 1:
      {
        menu1(cinema);
      };
      case 2:
      {
        menu2(cinema);
      };
      case 3:
      {
        menu3(cinema);
      };
      case 0:
      {
        system("clear");
        cout << "Saindo do Programa." << endl;
        break;
      };
      default:
      {
        system("clear");
        cout << "Opção Inválida" << endl;
        break;
      };
    };
  }while(opçao!=0);
  return 0;
}

void menu1(GerenteCinema &cinema)
{
  system("clear");
  int opçao;
  do
  {
    cout << "Opções do Sistema " << endl;
    cout << "-----------------------------" << endl;
		cout << "1 - Criar Sessão " << endl;
    cout << "2 - Abrir Sessão" << endl;
    cout << "3 - Fechar Sessão" << endl;
		cout << "0 - Voltar ao menu inicial " << endl;
    cout << "-----------------------------" <<endl;
		cin >> opçao;

		switch (opçao)
    {
			case 1:
      {
        system("clear");
        int IDsessao,IDsala,filas,colunas,dia,mes,ano;
        bool encerrada,legenda,tresD;
        float valor_inteira;
        string horario,idioma,filme;
        cout<<"Digite ID da Sessão: "<<endl;
        cin >>IDsessao;
        cout<<"Digite ID da Sala: "<<endl;
        cin >>IDsala;
        cout<<"Digite Dia da Sessão: "<<endl;
        cin >>dia;
        cout<<"Digite Mês da Sessão: "<<endl;
        cin >>mes;
        cout<<"Digite Ano da Sessão: "<<endl;
        cin >>ano;
        cout<<"Digite Horario da Sessão(Formato(h:min)): "<<endl;
        cin>>horario;
        cout<<"Digite o Nº de Filas de Assentos: "<<endl;
        cin >>filas;
        cout<<"Digite o Nº de Colunas de Assentos: "<<endl;
        cin >>colunas;
        cin.ignore();
        cout<<"Digite Filme da Sessão: "<<endl;
        getline(cin,filme);
        cout<<"Digite Idioma do Filme: "<<endl;
        cin>>idioma;
        cout<<"Digite o Valor do Ingresso: "<<endl;
        cin >>valor_inteira;
        cout<<"Digite 1 se o Filme for Legendado ou 0 se não: "<<endl;
        cin >>legenda;
        cout<<"Digite 1 se o Filme for 3D ou 0 se não: "<<endl;
        cin >>tresD;
        encerrada = 0;
        cinema.CriarSessao(IDsessao,encerrada,valor_inteira,IDsala,filas,colunas,dia,mes,ano,horario,filme,idioma,legenda,tresD);
        cout<<"Sessão Criada."<<endl;
        break;
        };
        case 2:
        {
          int IDsessao;
          system("clear");
          cout<<"Digite ID da Sessão: "<<endl;
          cin >>IDsessao;
          cinema.AbrirSessao(IDsessao);
          break;
        };
        case 3:
        {
          int IDsessao;
          system("clear");
          cout<<"Digite ID da Sessão: "<<endl;
          cin >>IDsessao;
          cinema.FecharSessao(IDsessao);
          break;
        };
        case 0:
        {
          system("clear");
          break;
        };
        default:
        {
          system("clear");
          cout << "Opção Inválida" << endl;
          break;
        };
    };
  }while(opçao!=0);
}

void menu2(GerenteCinema &cinema)
{
  system("clear");
  int opçao;
  do
  {
    cout << "Opções do Sistema " << endl;
    cout << "-----------------------------------------" << endl;
		cout << "1 - Comprar Ingresso  " << endl;
    cout << "2 - Cancelar Compra de Ingresso" << endl;
    cout << "3 - Emitir Ingresso" << endl;
    cout << "4 - Calculo de Vendas do Cinema" << endl;
    cout << "5 - Calculo de Vendas de uma Sessão" << endl;
		cout << "0 - Voltar ao menu inicial " << endl;
    cout << "------------------------------------------" <<endl;
		cin >> opçao;

		switch (opçao)
    {
			case 1:
      {
        system("clear");
        string cpf;
        int IDsessao,fila,coluna;
        bool meia_entrada;
        cout <<"Digite o ID da Sessão: "<<endl;
        cin >>IDsessao;
        if(cinema.verificaSessao(IDsessao)==false)break;
        cout <<"Digite o CPF: "<<endl;
        cin>>cpf;
        cout <<"Digite 1 se for meia entrada ou 0 se não: "<<endl;
        cin >>meia_entrada;
        cout <<"Digite a Fila: "<<endl;
        cin >>fila;
        cout <<"Digite a Coluna: "<<endl;
        cin >>coluna;
        cinema.ComprarIngresso(cpf,IDsessao,meia_entrada,fila,coluna);
        break;
      };
      case 2:
      {
        system("clear");
        int IDsessao,IDingresso;
        cout <<"Digite o ID da Sessão: "<<endl;
        cin >>IDsessao;
        if(cinema.verificaSessao(IDsessao)==false)break;
        cout <<"Digite o ID do Ingresso: "<<endl;
        cin >>IDingresso;
        cinema.CancelarIngresso(to_string(IDingresso),IDsessao);
        break;
      };
      case 3:
      {
        system("clear");
        int IDingresso,IDsessao;
        cout <<"Digite o ID da Sessão: "<<endl;
        cin >>IDsessao;
        if(cinema.verificaSessao(IDsessao)==false)break;
        cout<<"Digite o ID do Ingresso: "<<endl;
        cin >>IDingresso;
        if(cinema.verifica_ingresso(to_string(IDingresso),IDsessao)==false)break;
        vector<string> aux;
        aux = cinema.EmitirIngresso(to_string(IDingresso),IDsessao);
        ofstream ingresso;
        ingresso.open("ingresso.txt");
        ingresso <<"---------------------------------"<<endl;
        ingresso <<aux[0]<<endl;
        ingresso <<aux[1]<<endl;
        ingresso <<aux[2]<<endl;
        ingresso <<aux[3]<<endl;
        ingresso <<"---------------------------------"<<endl;
        ingresso <<aux[4]<<endl;
        ingresso <<aux[5]<<endl;
        ingresso <<aux[6]+" - "+aux[7]+ " - "+aux[8]<<endl;
        ingresso <<"---------------------------------"<<endl;
        ingresso.close();
        break;
      };
      case 4:
      {
        system("clear");
        cinema.CalcularVendas();
        break;
      };
      case 5:
      {
        system("clear");
        int IDsessao;
        cout <<"Digite o ID da Sessão: "<<endl;
        cin >>IDsessao;
        cinema.CalcularVendapSessao(IDsessao);
        break;
      };
      case 0:
      {
        system("clear");
        break;
      };
      default:
      {
        system("clear");
        cout << "Opção Inválida" << endl;
        break;
      };
    };
  }while(opçao!=0);
}

void menu3(GerenteCinema &cinema)
{
  system("clear");
  int opçao;
  do
  {
    cout << "Opções do Sistema " << endl;
    cout << "-------------------------------" << endl;
		cout << "1 - Informações de uma Sessão " << endl;
    cout << "2 - Informações de uma Sala" << endl;
    cout << "3 - Informaçoes de um Filme" << endl;
		cout << "0 - Voltar ao menu inicial " << endl;
    cout << "--------------------------------" <<endl;
		cin >> opçao;

		switch (opçao)
    {
			case 1:
      {
        system("clear");
        int IDsessao;
        cout<<"Digite o ID da Sessão: "<<endl;
        cin>>IDsessao;
        cinema.InfoSessao(IDsessao);
        break;
      };
      case 2:
      {
        system("clear");
        int IDsala;
        cout<<"Digite o ID da Sala: "<<endl;
        cin>>IDsala;
        cinema.InfoSala(IDsala);
        break;
      };
      case 3:
      {
        system("clear");
        string filme;
        cin.ignore();
        cout<<"Digite o nome do Filme: "<<endl;
        getline(cin,filme);
        cin.ignore();
        cinema.InfoProgramaçao(filme);
        break;
      };
      case 0:
      {
        system("clear");
        break;
      };
      default:
      {
        system("clear");
        cout << "Opção Inválida" << endl;
        break;
      };
    };
  }while(opçao!=0);
}
