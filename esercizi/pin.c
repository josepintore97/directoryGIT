#include<stdio.h>

main(){
    int pin;
    scanf("%d", &pin);
    if (pin == 44122)
    {
        printf("Accesso Consentito\n");
    }
    else
    {
        printf("Accesso Negato\n");
    }
}