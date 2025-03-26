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
void showInfos(Aluno listaAlunos[], int size);
void addAluno(Aluno lista[], int pos);

//TODO: func findByName onde deve procurar na lista um aluno, se nao existir devlva um Aluno sem conteudo
Aluno findByName(Aluno lista[], int listLen, char nome[]);

int main(void) {

    Aluno  al1 = {"Gonçalo", 38, "TPSI"};
    printf("nome al1: %s\n", al1.nome);

    Aluno listaAlunos[nAlunos];

    // refazer com inputs do utilizador
   for(int i = 0; i < nAlunos; i++ ){
       addAluno(listaAlunos, i);
   }


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
    return 0;

}

void showInfos(Aluno listaAlunos[], int size){

    for(int i = 0; i < size; i++ ){

        printf("%2d: nome:%s\tidade:%d\tturma:%s\n", i+1,
               listaAlunos[i].nome,
               listaAlunos[i].idade,
               listaAlunos[i].turma);
    }

}


void addAluno(Aluno lista[], int pos){


    char nome[nomeSize] = "Gonçalo";
    int idade = 28;
    char turma[turmaSize] = "TPSI";

    Aluno al;

    strcpy(al.nome, nome);
    al.idade = idade;
    strcpy(al.turma, turma);

    lista[pos] = al;


}
