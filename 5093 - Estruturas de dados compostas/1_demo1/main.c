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


void tabuada(int num);
void olaMundo();
/*
 * 1 - True
 * 0 - False
 */
int validaData(int dia, int mes, int ano);
void tabuada2(int num, int max);

/*
 *
 *
 *
 *
 * 4 > 3
 *
 * * Ex 1
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
    long int val;

    olaMundo();
    tabuada(2);
    tabuada(3);
    //printf("------------------\n");

    //pedir a usr num e max
    printf("tabuada do: ");
    scanf("%d", &num);
    printf("ate: ");
    scanf("%d", &max);


    printf("num: %d\n", num);
    printf("max: %d\n", max);

    long unsigned int res = (long unsigned int)2147483647 + (long unsigned int)2147483647;
    printf("res: %lu\n", res);
    //                214,748,364
    // 18,446,744,073,709,551,615
    //  0 ou 1

    float ft = (float)10 / 3;
    printf("ft = %f\n", ft);
    /*
    2147483647

    num: 32760
    max: 1504141392

    */
    tabuada2(num, max);


    printf("----------------------\n");
    int a,b,c;
    printf("data(dd-mm-aaa): ");
    scanf("%d-%d-%d", &a, &b, &c);




    int valData = validaData(a, b, c);

    if (valData == 1) {
        printf("%d-%d-%d\n", a, b, c);

    }else {

        printf("data invalida\n");
    }


   // printf("a: %d, b: %d, c: %d\n", a, b, c);
    printf("----------------------\n");



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

int validaData(int dia, int mes, int ano) {
    /*
     *  regras validação
     * todos os meses podem ter de 1 a 30 dias
     * um ano tem 12 meses
     * nao pode haver um ano inferior a 0
     */

    // ver se o dia e invalido

    if (dia < 1 || dia > 30 || mes < 1 || mes > 12 || ano < 1) {
        return 0;
    }

    /*

     if (dia < 1 || dia > 30) {
        return 0;
    }

    if (mes < 1 || mes > 12) {
        return 0;
    }
    if (ano < 0) {
        return 0;
    }

*/
    return 1;


}