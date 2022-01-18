#include<stdio.h>

main(){
    int n,c;
    int i,a;
    scanf("%d",&n);
    for (i = 2; i <=n; i++)
    {
        c=0;
        for ( a = 2; a <=i; a++)
        {
            if (i%a==0)
            {
                c++;
            }
            
        }
        if (c==1)
        {
            printf("%d    ",i);
        }
        
        
    }
    printf("\n");
}