#include<stdio.h>

main(){
    int n,i,s;
    for ( i = 1; i <= 5; i++)
    {
        scanf("%d",&n);
        s=s+n;
    }
    printf("%d\n",s);
}