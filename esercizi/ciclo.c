#include<stdio.h>

main(){
    int n;
    inizio:
    scanf("%d",&n);
    if (n>0)
    {
        printf("%d\n",n*2);
        goto inizio;
    }
    printf("Fine\n");
}