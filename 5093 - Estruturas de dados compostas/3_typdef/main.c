#include <stdio.h>



typedef int Inteiro;
typedef long unsigned int ULint;

int main(void) {

    ULint x;
   // long unsigned int x = 123456789; // Max 18446744073709551615
    int idade = 10;                  // Max 2147483647
    Inteiro ano = 2024;

    printf("idade = %d\n", idade);
    printf("ano = %d\n", ano);

    return 0;
}