#include<stdio.h>

main(){
    int c=0;
    int i;
    for (i = 20; i <= 30; i++)
    {
        if (i%2==1)
        {
            c=c+i*3;
        }
        
    }
    printf("%d\n",c);
}