#include "Turma.h"


void Turma::addAluno(Aluno &a){
  if(pesquisarAluno(a.getMatricula())){
    cout<<"Aluno já cadastrado na turma !"<<endl;
    return;
  }
  for(int i=0;i<10;i++){
    if (alunos[i].getMatricula()==-1){
      alunos[i]=a;
      cout<<"Add com sucesso!"<<endl;
      return;
    }
  }
  cout<<"Turma Lotada!"<<endl;
}

bool Turma::pesquisarAluno(int matricula){
  for(int i=0;i<10;i++){
    if (alunos[i].getMatricula()==matricula){
      return true;
    }
  }
  return false;
}

bool Turma::removerAluno(int matricula){
  for(int i=0;i<3;i++){
    if (alunos[i].getMatricula()==matricula){
      alunos[i].setMatricula(-1);
      cout << "Aluno " + to_string(matricula) + " removido !" << endl;
      return true;
    }
  }
  return false;
}


void Turma::imprimirAluno(int matricula){
  if(pesquisarAluno(matricula)){
    for(int i=0;i<10;i++){
    if (alunos[i].getMatricula()==matricula){
      cout << alunos[i].toString() << endl;
      return;
    }
  }
   
  }
  cout<<"Aluno " + to_string(matricula) +" não cadastrado na turma !"<<endl;
  return;

}
void Turma:: imprimirAlunos(){
  int aux = 0;
  for(int i=0;i<10;i++){
    if (alunos[i].getMatricula() != -1){
      cout << alunos[i].toString() << endl;
      aux = 1;
    }
  }
  if(aux == 0){
    cout << "Turma vazia !" << endl;
  }
  
}
void Turma::imprimirProfessor(){
  cout << this->prof.toString() << endl;
}

void Turma::alterarProfessor(Professor &p){
  this->prof = p;
}