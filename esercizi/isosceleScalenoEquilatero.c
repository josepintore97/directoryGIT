#include<stdio.h>

main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a==b&&b==c)
    {
        printf("Equilatero\n");
    }
    else
    {
        //if ((a==b&&b!=c)||(c==a&&c!=b)||(b==c&&c!=a))
        if (a==b||a==c||b==c)
        {
            printf("Isoscele\n");
        }
        else
        {
            printf("Scaleno\n");
        }
    }
}