#include<stdio.h>

main(){
    int i=0;
    int pin;
    /*scanf("%d",&pin);
    if (pin!=44122)
    {
       
        do
        {
            i++;
            scanf("%d",&pin);
        } while (i<3);
        if (i==3)
        {
            printf("Accesso negato.\n");
        }
    }
    else
    {
        printf("Accesso consentito.\n");
    }*/
    do
    {
        i++;
        scanf("%d",&pin);
    } while (pin!=44122 && i<3);
    
    if (pin==44122)
    {
        printf("Accesso consentito.\n");
    }
    else
    {
        printf("Accesso negato.\n");
    }
    
}