#include <stdio.h>



typedef  unsigned short int UInt16;

typedef struct Data {
    // UInt16 -> dia
    UInt16  dia;
    // UInt16 -> mes
    UInt16  mes;
    // UInt16 -> ano
    UInt16  ano;
} Data;


int main(void) {

    Data data;
    data.dia = 10;
    data.mes = 12;
    data.ano = 2023;


    Data data2 = {10, 12,2023};

    printf("data.dia = %d\n", data2.dia);
    printf("data.mes = %d\n", data2.mes);
    printf("data.ano = %d\n", data.ano);

/*
    int arr[3] = {13, 5, 1990};
    Data data3 = arr;

    nao funciona
  */

    return 0;
}