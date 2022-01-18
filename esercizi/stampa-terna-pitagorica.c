#include<stdio.h>

main(){
    int i,a;
    int n,m;
    n=m=1000;
    int numero,c;
    c=0;
    scanf("%d",&numero);

    for (i = 1; i <=n; i++)
    {
        for (a = 1; a <=m; a++)
        { 
            
            if (i*i+a*a==numero*numero && c==0)
            {
                c++;
                printf("%d  %d\n",i,a);
            }
        }
    }
}