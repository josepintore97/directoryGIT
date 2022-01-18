#include<stdio.h>

main(){
    int lato;
    printf("Calcolo l area e il perimetro di un quadrato.\n\nInserisci la misura del lato.\n\n");
    scanf("%d", &lato);
    printf("Area del quadrato = %d\n\n", lato * lato);
    printf("Perimetro del quadrato = %d\n", lato * 4);
}