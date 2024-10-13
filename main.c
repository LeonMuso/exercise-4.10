#include <stdio.h>

int main() {
    int num, i = 0;
    int potenza = 1;
    printf("inserire il numero di potenze di 2 da visualizzare: ");
    scanf("%d", &num);
    while (num < 2 || num > 20){
        printf("inserire un numero valido tra 2 e 20: ");
        scanf("%d", &num);
    }
    while (i < num){
        printf("2^%d = %d\n", i, potenza);
        potenza = potenza * 2;
        i++;
    }
    return 0;
}