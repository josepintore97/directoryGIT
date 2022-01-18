#include<stdio.h>

main(){
    int a, b;
    printf("Inserisci tre numeri interi per ottenere la loro somma.\n");
    scanf("%d", &a);
    //printf("%d\n", a);
    scanf("%d", &b);
    //printf("%d\n", b);
    b = &a + b;
    //printf("%d", b);
    scanf("%d", &a);
    printf("La somma e: %d\n", a + b);
}