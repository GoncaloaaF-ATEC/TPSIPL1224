#include <stdio.h>


void readAddFile(FILE *file);

int main(void) {

    FILE *infos;

    /*
     *  w - Escrita -> apaga e voltar a escrever
     *  r - Leitura
     *  a - append - add ao file
     */

    char myTxt[250];

    infos = fopen("../info.txt","r");

    fgets(myTxt, 50, infos);
    printf("cont do file 1: %s", myTxt);

    fgets(myTxt, 50, infos);
    printf("cont do file 2: %s", myTxt);

    fgets(myTxt, 50, infos);
    printf("cont do file 3: %s", myTxt);

    fgets(myTxt, 50, infos);
    printf("cont do file 4: %s", myTxt);

    fclose(infos);

    printf("-------------------------------\n");
    printf("-------------------------------\n");

    infos = fopen("../info.txt","r");

    readAddFile(infos);


    readAddFile(infos);
    fclose(infos);

    return 0;
}


void readAddFile(FILE *file){
    char myTxt[250];
    while (fgets(myTxt, 50, file)){

        printf("Func -> myTxt %s", myTxt);


    }


}
