#include<stdio.h>

main(){
    int n=100;
    int i;
    for (i = 1; i <=n; i++)
    {   
        if (i%3==0 || i%5==0)
        {
            if (i%3==0 && i%5==0)
            {
                printf("bimbum  ");
            }
            else
            {
                if (i%5==0)
                {
                    printf("bum ");
                }
                else
                {
                    printf("bin ");
                }
                
            }
        }
        else
        {
            printf("%d  ",i);
        }
    }
    printf("\n");
}