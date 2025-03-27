#include <stdio.h>

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

typedef struct pordutos{
    char mome[50];
    float preco;
} Pordutos;

typedef struct order{
    Pordutos listaPordutos[10];
    Customer  ct;
    char data[8];
} Order;














int main(void) {
    printf("Hello, World!\n");
    return 0;
}
