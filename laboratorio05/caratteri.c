#include<stdio.h>

main(){
    char a;
    scanf("%c",&a);
    switch (a)
    {
    case 65 ... 90:
        printf("Maiuscola\n");
        break;
    case 'a' ... 'z':
        printf("Minuscola\n");
        break;
    case 48 ... 57:
        printf("Cifra\n");
        break;
    default:
        printf("Altro\n");
        break;
    }
}