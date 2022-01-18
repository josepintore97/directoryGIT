#include<stdio.h>

main(){
    int i;
    int n,m;
    m=1;
    for (i = 1; i <= 5; i++)
    {
        scanf("%d",&n);
        m=m*n;
    }
    printf("%d\n",m);
}