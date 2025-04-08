//
// Created by Gonçalo Feliciano on 27/03/2025.
//



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
void showInfoAluno(Aluno aluno);

//TODO: func findByName onde deve procurar na lista um aluno, se nao existir devlva um Aluno sem conteudo
Aluno findByName(Aluno lista[], int listLen, char nome[]);
