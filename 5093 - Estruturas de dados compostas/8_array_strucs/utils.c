//
// Created by Gonçalo Feliciano on 27/03/2025.
//

#include "utils.h"
#include <stdio.h>
#include <string.h>

void showInfoAluno(Aluno aluno){

    printf("nome:%s\tidade:%d\tturma:%s\n",
           aluno.nome,
           aluno.idade,
           aluno.turma);

}

void showInfos(Aluno listaAlunos[], int size){

    for(int i = 0; i < size; i++ ){

        showInfoAluno(listaAlunos[i]);
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


Aluno findByName(Aluno lista[], int listLen, char nome[]) {
    // strcpy() -> se igual -> 0
    for(int i = 0; i < listLen; i++){

        int resp = strcmp(lista[i].nome, nome); // se forem iaguais devolve 0

        if(!resp){
            return lista[i];
        }
    }
}


void sortArray(int arr[]){



}