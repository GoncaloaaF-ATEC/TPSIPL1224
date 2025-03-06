#include <stdio.h>

/*
 *
 * tipos de dados? int, float, double, char
 * if/else/else if
 * for
 * while-do
 * do-while
 *
 *
 * char[30]
 *
 *
 *
 *
 */

void olaMundo();
void tabuada(int num);
// void tabuada2(int num, int max);
/*
 * Ex 1
 * num = 2
 * max = 10
 *
 * 2 x 1 = 2
 * ...
 * 2 x 10 = 20
 *
 *
 * Ex 2
 * num = 2
 * max = 20
 *
 * 2 x 1 = 2
 * ...
 * 2 x 20 = 40
 *
 *
 */


int main() {

    olaMundo();
    tabuada(2);
    tabuada(3);
    return 0;
}

// retorno nome([param]){ corpo }
void olaMundo() {
    printf("Ola Mundo - Aqui \n");
}

void tabuada(int num) {
    printf("Tabuada do %d\n", num);
    for (int i = 1; i <= 10; i++) {

        int resultado = num * i;
        printf("%d x %d = %d\n", num, i, resultado);
    }
}

