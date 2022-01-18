#include<stdio.h>

main(){
    int a,b;
    printf("Insericsci due numeri per ottenere il maggiore dei due.\n");
    printf("Primo numero:  ");
    scanf("%d",&a);
    printf("Secondo numero:  ");
    scanf("%d",&b);
    if (a>=b)
    {
        printf("Il primo numero inserito (%d) e maggiore del secondo (%d)\n",a,b);
    }
    else
    {
        printf("Il secondo numero inserito (%d) e maggiore del primo (%d).\n",b,a);
    }
}