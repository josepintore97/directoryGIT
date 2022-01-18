#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    n = rand();

    srand(time(NULL));

    printf("%d\n", rand());

    return 0;
}