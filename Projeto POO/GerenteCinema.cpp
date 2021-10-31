#include "GerenteCinema.h"

GerenteCinema :: GerenteCinema(int IDcinema,string senha)
{
  this->IDcinema =IDcinema;
  this->senha = senha;
}

void GerenteCinema :: CriarSessao(int &IDsessao,bool encerrada,float &valor_inteira,int &IDsala,int &filas,int &colunas,int &dia,int &mes,int &ano,string horario,string filme,string idioma,bool legenda,bool tresD)
{
  Sessao aux(IDsessao,encerrada,valor_inteira,IDsala,filas,colunas,dia,mes,ano,horario,filme,idioma,legenda,tresD);
  Sessoes.push_back(aux);
}

bool GerenteCinema :: AbrirSessao(int &IDsessao)
{
  int i = 0;
  while(i<Sessoes.size())
  {
    if(Sessoes[i].get_IDsessao() == IDsessao)
    {
      Sessoes[i].set_encerrada(false);
      return true;
    };
    i++;
  };
  cout <<"Sessão não encontrada."<<endl;
  return false;
}

bool GerenteCinema :: FecharSessao(int &IDsessao)
{
  int i = 0;
  while(i<Sessoes.size())
  {
    if(Sessoes[i].get_IDsessao() == IDsessao)
    {
      Sessoes[i].set_encerrada(true);
      return true;
    };
    i++;
  };
  cout <<"Sessão não encontrada."<<endl;
  return false;
}

void GerenteCinema :: ComprarIngresso(string cpf, int &IDsessao,bool meia_entrada,int &fila,int &coluna)
{
  int i = 0;
  while(i<Sessoes.size())
  {
    if(Sessoes[i].get_IDsessao() == IDsessao)
    {
      Sessoes[i].comprar_ingresso(cpf,IDsessao,meia_entrada,fila,coluna);
      break;
    };
    i++;
  };
}

bool GerenteCinema :: verificaSessao(int &IDsessao)
{
  int i = 0;
  while(i<Sessoes.size())
  {
    if(Sessoes[i].get_IDsessao() == IDsessao)
    {
      if(Sessoes[i].getencerrada()==true)
      {
        cout<<"Sessão está fechada."<<endl;
        return false;
      };
      return true;
    };
    i++;
  };
  cout<<"Sessão não encontrada."<<endl;
  return false;
}

void GerenteCinema :: CancelarIngresso(string IDingresso, int &IDsessao)
{
  int i = 0;
  while(i<Sessoes.size())
  {
    if(Sessoes[i].get_IDsessao() == IDsessao)
    {
      Sessoes[i].cancelar_ingresso(IDingresso);
      break;
    };
    i++;
  };
  if(i==Sessoes.size())cout<<"Sessão não Encontrada."<<endl;
}

void GerenteCinema :: CalcularVendapSessao(int &IDsessao)
{
  int i = 0;
  while(i<Sessoes.size())
  {
    if(Sessoes[i].get_IDsessao()==IDsessao)
    {
      cout<<Sessoes[i].vendas()<<endl;
      break;
    };
    i++;
  };
  if(i==Sessoes.size())cout<<"Sessão não encontrada."<<endl;
}

void GerenteCinema :: CalcularVendas()
{
  for(int i=0;i<Sessoes.size();i++)cout<<Sessoes[i].vendas()<<endl;
}

vector<string> GerenteCinema :: EmitirIngresso(string IDingresso,int &IDsessao)
{
  int i = 0;
  vector<string> aux;
  while(i<Sessoes.size())
  {
    if(Sessoes[i].get_IDsessao()==IDsessao)
    {
      aux = Sessoes[i].getIngresso(IDingresso);
      return aux;
    };
    i++;
  };
  return aux;
}

bool GerenteCinema :: verifica_ingresso(string IDingresso,int &IDsessao)
{
  for(int i=0;i<Sessoes.size();i++)
  {
    return Sessoes[i].verificaingresso(IDingresso);
  };
  return false;
}

void GerenteCinema :: InfoSessao(int &IDsessao)
{
  int i = 0;
  while(i<Sessoes.size())
  {
    if(Sessoes[i].get_IDsessao()==IDsessao)
    {
      Sessoes[i].info_sessao();
      break;
    };
    i++;
  };
  if(i==Sessoes.size())cout<<"Sessão não encontrada."<<endl;
}

void GerenteCinema :: InfoSala(int &IDsala)
{
  int i = 0;
  int x = 0;
  cout <<"Programação da Sala: "<<endl;
  while(i<Sessoes.size())
  {
    if(Sessoes[i].get_IDsala()==IDsala)
    {
      Sessoes[i].info_sala();
      x++;
    };
    i++;
  };
  if(x==0)cout<<"Sala não encontrada."<<endl;
}

void GerenteCinema :: InfoProgramaçao(string filme)
{
  int i = 0;
  int x = 0;
  cout <<"Cronograma do Filme: "<<endl;
  while(i<Sessoes.size())
  {
    if(Sessoes[i].get_filme()==filme)
    {
      Sessoes[i].info_sala();
      cout<<"Valor : "<<Sessoes[i].get_valor()<<" Reais"<<endl;
      x++;
    };
    i++;
  };
  if(x==0)cout<<"Filme não encontrada."<<endl;
}