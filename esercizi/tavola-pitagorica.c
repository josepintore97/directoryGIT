#include<stdio.h>

main(){
    int i,a;
    int n,m;

    scanf("%d%d",&n,&m);
    for (i = 1; i <=n; i++)
    {
        for (a = 1; a <=m; a++)
        {   
            //printf("%3d  ",i*a);      // %3d stampa tre spazi per i numeri, per allinearli in colonna.
            if ((i*a)/10>0)
            {
                printf(" %d%d",i*a/10,i*a%10);
            }
            else
            {
                printf("  %d",i*a);
            }
            
            
        }
        printf("\n");
    }
    printf("\n");
}