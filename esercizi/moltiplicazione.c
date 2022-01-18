#include<stdio.h>

main(){
    int n,m,somma;
    int i;
    somma=0;
    scanf("%d%d",&n,&m);
    for (i = 1; i<=m ; i++)
    {   
        somma=somma+n;   
    }
    printf("%d\n",somma);
}