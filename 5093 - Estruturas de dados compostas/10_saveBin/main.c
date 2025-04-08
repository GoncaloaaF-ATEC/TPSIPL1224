#include <stdio.h>


typedef struct Pessoa{
    char nome[200];
    int idade;
} Pessoa;

/*
 *
 *  wb - Escrita -> apaga e voltar a escrever
 *  rb - Leitura
 *  ab - append - add ao file
 *
 */


int main(void) {

   //Pessoa p1 = {"Gonçalo", 20};

    //FILE *file = fopen("../dados.bin", "wb");


    //fwrite(&p1, sizeof(Pessoa), 1, file);

    // fclose(file);

    printf("-------------------------------------------------\n");
    Pessoa p1;

    FILE *file = fopen("../dados.bin", "rb");

    fread(&p1, sizeof(Pessoa), 1, file);

    fclose(file);

    printf("nome: %s\nidade: %i", p1.nome, p1.idade);

    return 0;
}
