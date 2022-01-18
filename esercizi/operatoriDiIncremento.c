#include<stdio.h>

main(){
    int a=5;
    a=a++;//=10
    printf("%d\n",a);
    a=++a;//=11
    printf("%d\n",a);
    a=5;
    a=a+=a++;
    printf("%d\n",a);
}