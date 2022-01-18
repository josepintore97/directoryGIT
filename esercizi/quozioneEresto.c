#include<stdio.h>

main(){
    int n,m;
    int i;
    scanf("%d%d",&n,&m);
    for (i = 0; i<=n; i++)
    {
        n=n-m;
    }
    printf("%d\n",i);
    printf("%d\n",n);
}