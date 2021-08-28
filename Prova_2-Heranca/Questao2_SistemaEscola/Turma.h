#ifndef TURMA_H
#define TURMA_H

#include "Aluno.h"
#include "Professor.h"


class Turma: public Aluno,Professor{

  public:
    void addAluno(Aluno &a);
    bool removerAluno(int matricula);
    void imprimirAluno(int matricula);
    void imprimirAlunos();
    void imprimirProfessor();
    void alterarProfessor(Professor &p);
    bool pesquisarAluno(int matricula);

  private:
    Professor prof;
    Aluno alunos[10];
};

#endif
