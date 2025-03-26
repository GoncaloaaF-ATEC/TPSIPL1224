#include <stdio.h>
#include <string.h>

#define nAlunos 20
#define nomeSize 50
#define turmaSize 20

typedef struct Aluno{
    char nome[nomeSize];
     int idade;
    char turma[turmaSize];
} Aluno;

typedef struct Questao{
    char txt[100];
    int nivel;
    int resposta; // 0 - false, 1- true
} Questao;

int main(void) {

    Aluno  al1 = {"Gonçalo", 38, "TPSI"};
    printf("nome al1: %s\n", al1.nome);

    Aluno listaAlunos[nAlunos];

    // refazer com inputs do utilizador
   for(int i = 0; i < nAlunos; i++ ){

       char nome[nomeSize] = "Gonçalo";
       int idade = 28;
       char turma[turmaSize] = "TPSI";

        Aluno al;

       strcpy(al.nome, nome);
        al.idade = idade;
       strcpy(al.turma, turma);

       listaAlunos[i] = al;

   }

    for(int i = 0; i < nAlunos; i++ ){

        printf("%2d: nome:%s\tidade:%d\tturma:%s\n", i+1,
               listaAlunos[i].nome,
               listaAlunos[i].idade,
               listaAlunos[i].turma);
    }

    return 0;
}
