#include<stdio.h>

main(){
    int n,m;
    int i;
    scanf("%d",&m);
    for (i = 1; i < 5; i++)
    {
        scanf("%d",&n);
        if (m<n)
        {
            m=n;
        }
        
    }
    printf("%d\n",m);
}