#include<stdio.h>

main(){
    int g;
    scanf("%d",&g);
    if (g>=1&&g<=7)
    {
        if (g==1)
        {
            printf("Lundedi.\n");
        }
        if (g==2)
        {
            printf("Martedi.\n");
        }
        if (g==3)
        {
            printf("Mercoledi.\n");
        }
        if (g==4)
        {
            printf("Giovedi.\n");
        }
        if (g==5)
        {
            printf("Venerdi.\n");
        }
        if (g==6)
        {
            printf("Sabato..\n");
        }
        if (g==7)
        {
            printf("Domenica.\n");
        }
    }
}