#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    int par = 0;
    int impar = 0;

    srand(time(NULL));

    for(int i = 0; i < 1000000; i++){
        long j = rand();

        if(j % 2 == 0){
            par += 1;
        }else{
            impar += 1;
        }

    }

    printf("Par: %d\n", par );
    printf("impar: %d\n", impar );
    printf("dif: %d", par-impar );
    return 0;
}
