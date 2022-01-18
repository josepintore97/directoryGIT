#include<stdio.h>

main(){
    int n,m;
    scanf("%d %d",&n,&m);
    if (n>0 && m>0)
    {
        printf("Primo quadrante\n");
    }
    if (n>0 && m<0)
    {
        printf("Quarto quadrante\n");
    }
    if (n<0 && m>0)
    {
        printf("Secondo quadrante\n");
    }
    if (n<0 && m<0)
    {
        printf("Terzo quadrante\n");
    }
        
}