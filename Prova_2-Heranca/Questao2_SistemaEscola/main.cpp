#include <iostream>
#include "Aluno.h"
#include "Professor.h"
#include "Turma.h"

using namespace std;
int main() {
  Aluno aluno1(9,1,12345,"Aryelson","58398-000",123);
  //float media,int matricula,int rg,string nome, string cep, int num
  Aluno aluno2(7,2,12345,"João","58398-000",63);
  //float media,int matricula,int rg,string nome, string cep, int num
  Professor prof("POO",40,18000.000,2546,"Leandro","00000-00",29);
  //string area,int cargaH,float salario,int rg,string nome, string cep, int num

  Turma turma;
  turma.alterarProfessor(prof);
  cout << "Adicionando Alunos: " << endl;
  turma.addAluno(aluno1);
  turma.addAluno(aluno2);
  cout << endl;
  cout << "Removendo Aluno: " << endl;
  turma.removerAluno(1);
   cout << endl;
  cout << "Listando Aluno: " << endl;
  turma.imprimirAluno(2);
   cout << endl;
  cout << "Listando Alunos: " << endl;
  turma.imprimirAlunos();
   cout << endl;
  cout << "Listando Professor: " << endl;
  turma.imprimirProfessor();
   cout << endl;
  cout << "Adicionando Aluno: " << endl;
  turma.addAluno(aluno1);
   cout << endl;
  cout << "Listando Aluno: " << endl;
  turma.imprimirAluno(1);
   cout << endl;
  cout << "Listando Alunos: " << endl;
  turma.imprimirAlunos();
}