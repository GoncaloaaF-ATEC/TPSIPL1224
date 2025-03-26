#include <stdio.h>

float somar(float a, float b);
float subtracao(float a, float b);
float multiplicacao(float a, float b);
float divisao(float a, float b);
void menu();
void execute(int op);

//faça uma calculadora simples

int main(void) {

    int op;

    menu();
    scanf("%d", &op);
    execute(op);


    return 0;
}