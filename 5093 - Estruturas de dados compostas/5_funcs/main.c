#include <stdio.h>
void olaMundo();
void olaMundo2(int ano);
int soma(int a, int b);
void showMsg(int num);

int main(void) {
    olaMundo();
    olaMundo2(2002);
    int s = soma(3, 4);
    showMsg(s);


    s = soma(4, 41);
    showMsg(s);



    s = soma(33, 14);
    showMsg(s);

    return 0;
}

/*
 * int
 * float
 * double
 * char
 *
 * void
 *
 */


// tipo nome(param) {}

void olaMundo() {
    printf("Hello, World!\n");
}


void olaMundo2(int ano) {
    printf("Hello, World em %d!\n", ano);
}

int soma(int a, int b) {
    int soma = a + b;
    return soma;
}

void showMsg(int num) {
    printf(".....................\n");
    printf("| o resultado é: %d |\n", num);
    printf(".....................\n");
}