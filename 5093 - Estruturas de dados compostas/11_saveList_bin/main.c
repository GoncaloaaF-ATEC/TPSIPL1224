#include <stdio.h>



typedef struct Questao{
    char txt[300];
    int  idade;

}Questao;


typedef struct Pessoa{
    char nome[50];
    int  idade;
    Questao ListaQuestoes[10];

}Pessoa;

int main(void) {
/*
    Pessoa lista[10]  = {
            {"Ana", 25},
            {"Bruno", 30},
            {"Carla", 22},
            {"Daniel", 28},
            {"Eduarda", 35},
            {"Filipe", 27},
            {"Gabriela", 31},
            {"Henrique", 29},
            {"Inês", 26},
            {"João", 33}
    };

    int numPessoas = sizeof(lista)/sizeof(lista[0]);

    printf("list size: %d", numPessoas);

    FILE* data = fopen("../data.bin", "wb");

    fwrite(lista, sizeof(Pessoa), 10, data);

    fclose(data);

*/

    Pessoa lista[10];

    FILE* data = fopen("../data.bin", "rb");

    fread(lista, sizeof(Pessoa), 10, data);

    fclose(data);


    for(int i = 0; i < 10; i++){

        printf("nome:%s idade:%d \n", lista[i].nome, lista[i].idade);

    }

    return 0;
}
