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
    int max;
    int num;



    // olaMundo();
    //tabuada(2);
    //tabuada(3);
    //printf("------------------\n");

    //pedir a usr num e max

    printf("num: %d\n", num);
    printf("max: %d", max);

    /*

    num: 32760
    max: 1504141392

    */
    // tabuada2(num, max);
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


void tabuada2(int num, int max) {

    printf("Tabuada do %d ate %d x %d\n", num, num, max);
    for (int i = 1; i <= max; i++) {

        int resultado = num * i;
        printf("%d x %d = %d\n", num, i, resultado);
    }




}
