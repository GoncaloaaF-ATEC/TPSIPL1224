#include <stdio.h>
#include <string.h>
#include "utils.h"



int main(void) {

    Aluno  al1 = {"Gonçalo", 38, "TPSI"};
    printf("nome al1: %s\n", al1.nome);

    Aluno listaAlunos[nAlunos];

    // refazer com inputs do utilizador
   for(int i = 0; i < nAlunos; i++ ){
       addAluno(listaAlunos, i);
   }

/*
    showInfos(listaAlunos, nAlunos);

    getchar();
    int s = sizeof(listaAlunos);
    printf("lista: %d", s);

    getchar();
    int a = sizeof(Aluno);
    printf("Aluno %d", a);

    getchar();
    int len_lista = sizeof(listaAlunos)/ sizeof(listaAlunos[0]);
    printf("len da lista: %d", len_lista);

*/

    strcpy(listaAlunos[5].nome, "Rui");

    Aluno al = findByName(listaAlunos, nAlunos, "Rui");

    showInfoAluno(al);

    return 0;
}

