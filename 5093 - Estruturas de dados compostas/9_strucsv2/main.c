#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 *
 * CustomerID
 * CustomerName
 * ContactName
 * Address
 * City
 * PostalCode
 * Country
 *
 */

typedef struct customer{
    char customerName[50];
    char contactName[50];
    char address[150];
    char city[20];
    char postalCode[10];
    char country[10];

} Customer ;

typedef struct porduto{
    char mome[50];
    float preco;
} Porduto;

typedef struct data{
    int dia;
    int mes;
    int ano;
} Data;


typedef struct order{
    Porduto Pordutos[10];
    Customer customer;
    Data data;
} Order;



typedef struct morada{
    char rua[500];
    char porta[10];
    char apt[10];

} Morada;


typedef struct cliente{
    char nome[50];
    Morada morada;
} Cliente;


void removerChar(char str[], char c[]);

int main(void) {

    Cliente clt;

    printf("nome: ");
    fgets(clt.nome, sizeof(clt.nome), stdin);
    removerChar(clt.nome, "\n");

    printf("Morada\n");
    printf("Rua: ");
    fgets(clt.morada.rua, sizeof(clt.morada.rua), stdin);

    removerChar(clt.morada.rua, "\n");


    printf("porta: ");
    fgets(clt.morada.porta, sizeof(clt.morada.porta), stdin);
    removerChar(clt.morada.porta, "\n");


    printf("apt: ");
    fgets(clt.morada.apt, sizeof(clt.morada.apt), stdin);
    removerChar(clt.morada.apt, "\n");


    printf("O nome é %s\n", clt.nome);
    printf("O rua é %s\n", clt.morada.rua);
    printf("O porta é %s\n", clt.morada.porta);
    printf("O apt é %s\n", clt.morada.apt);

    return 0;
}

void removerChar(char str[], char c[]){

    int i = strcspn(str, c);
    str[i] = '\0';
    fflush(stdin);


}