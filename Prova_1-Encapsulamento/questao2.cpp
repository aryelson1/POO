#include <iostream>
#include "Aluno.h"

main (){

    Aluno aluno1("Leandro"), aluno2("Any Caroliny");

    cout << "ALUNO 1 ------------------" << endl;
    aluno1.addNota(1,60);
    aluno1.alterarNota(2,70);

    cout << "------------------" << endl;
    cout << aluno1.toString() << endl;
    aluno1.calculoMedia();

    cout << "------------------" << endl;
    aluno1.addNota(4,120);
    aluno1.addNota(2,90);
    aluno1.addNota(3,80);

    cout << "------------------" << endl;
    
    cout << aluno1.toString() << endl;
    aluno1.calculoMedia();
    
    cout << "------------------" << endl;
    aluno1.alterarNota(1,70);
    aluno1.alterarNota(2,70);
    aluno1.alterarNota(3,-1);

    cout << "------------------" << endl;
    
    cout << aluno1.toString()<< endl;
    aluno1.calculoMedia();

    cout << "ALUNO 2 ------------------" << endl;

    aluno2.addNota(1,60);
    aluno2.alterarNota(2,70);

    cout << "------------------" << endl;
    cout << aluno2.toString() << endl;
    aluno2.calculoMedia();

    cout << "------------------" << endl;
    aluno2.addNota(4,120);
    aluno2.addNota(2,90);
    aluno2.addNota(3,80);

    cout << "------------------" << endl;
    
    cout << aluno2.toString() << endl;
    aluno2.calculoMedia();
    
    cout << "------------------" << endl;
    aluno2.alterarNota(1,70);
    aluno2.alterarNota(2,70);
    aluno2.alterarNota(3,-1);

    cout << "------------------" << endl;
    
    cout << aluno2.toString()<< endl;
    aluno1.calculoMedia();

    

    


}