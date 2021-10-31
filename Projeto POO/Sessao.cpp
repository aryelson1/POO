#include "Sessao.h"

Sessao :: Sessao(int IDsessao,bool encerrada,float valor_inteira,int IDsala,int filas,int colunas,int dia,int mes,int ano,string horario,string filme,string idioma,bool legenda,bool tresD) : Sala(IDsala,filas,colunas),Programaçao(dia,mes,ano,horario,filme,idioma,legenda,tresD)
{
  this->valor_inteira = valor_inteira;
  this->IDsessao = IDsessao;
  this->encerrada = encerrada;
}

Sessao :: ~Sessao(){}

void Sessao :: info_sessao()
{
  cout<<"----------------------"<<endl;
  cout<<"ID da Sessão: "<<IDsessao<<endl;
  if(encerrada ==true){cout<<"Sessão Encerrada"<<endl;}else{cout<<"Sessão Aberta"<<endl;};
  info_programaçao();
  cout<<"Valor: "<<valor_inteira<<endl;
  info_sala();
  cout<<"----------------------"<<endl;
}


int Sessao :: get_IDsessao()
{
  return this->IDsessao;
}

void Sessao :: set_encerrada(bool encerrada)
{
  this->encerrada = encerrada; 
}

void Sessao :: comprar_ingresso(string cpf, int &IDsessao,bool meia_entrada,int &fila,int &coluna)
{
  float valor;
  if(meia_entrada==true){valor = (this->valor_inteira)/2;}else{valor = this->valor_inteira;};
  if(verificar_livre(fila,coluna)==true)
  {
    Ingresso aux(to_string(fila)+to_string(coluna)+to_string(IDsessao),cpf,valor,meia_entrada,fila,coluna);
    Ingressos.push_back(aux);
    ocupar(fila,coluna);
  }else
  {
    cout <<"Assento está ocupado."<<endl;
  };
}

bool Sessao :: getencerrada()
{
  return this->encerrada;
}

void Sessao :: cancelar_ingresso(string IDingresso)
{
  int i = 0;
  while(i<Ingressos.size())
  {
    if(Ingressos[i].getIDingresso() == IDingresso)
    {
      Ingressos.erase(Ingressos.begin()+i);
      break;
    };
    i++;
  };
  if(i==Ingressos.size())cout<<"Ingresso não encontrado."<<endl;
}

string Sessao :: vendas()
{
  float count = 0;
  for(int i=0;i<Ingressos.size();i++)
  {
    count+=Ingressos[i].getValor();
  };
  return("Foram vendidos o Total de "+to_string(Ingressos.size())+" Ingressos e arrecadando um total de "+to_string(count)+" Reais na Sessão de ID: "+to_string(this->IDsessao));
}

vector<string> Sessao :: getIngresso(string IDingresso)
{
  vector<string> aux1,aux2;
  int i = 0;
  while(i<Ingressos.size())
  {
    if(Ingressos[i].getIDingresso() == IDingresso)
    {
      aux1 = Ingressos[i].get_ingresso();
      aux2 = get_programaçao();
      aux1.insert(aux1.end(),aux2.begin(),aux2.end());
      return aux1;
    };
    i++;
  };
  return aux1;
}

bool Sessao :: verificaingresso(string IDingresso)
{
  for(int i=0;i<Ingressos.size();i++)
  {
    if(Ingressos[i].getIDingresso()==IDingresso)return true;
  };
  cout<<"Ingresso não encontrado."<<endl;
  return false;
}

void Sessao :: info_sala()
{
  info_programaçao();
}

int Sessao :: get_IDsala()
{
  return this->IDsala;
}

string Sessao :: get_filme()
{
  return this->filme;
}

float Sessao :: get_valor()
{
  return this->valor_inteira;
}