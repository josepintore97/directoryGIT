#include<stdio.h>

main(){
    int n,c;
    int i;
   scanf("%d",&n);
    for (i = 2; i*i<= n && c==0; i++)  // per velocizzare il calcolo  
    {
        if (n%i==0)
        {
             c++;
        }
    }
    if (c==0)
    {
        printf("Primo.\n");
    }
    else
    {
        printf("Non primo.\n");
    }
    
}