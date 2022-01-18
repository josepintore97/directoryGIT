#include<stdio.h>

main(){
    int a;
    printf("Inserisci un numero interno per ottenere il valore assoluto.\n");
    scanf("%d",&a);
    if (a >= 0)
    {
        printf("%d\n",a);
    }
    else
    {
        printf("%d\n",-a);
    }
}