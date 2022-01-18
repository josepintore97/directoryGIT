#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;

    char a[37] = {"https://meet.google.com/xxx-xxxx-xxx"};

    srand(time(NULL));

    for (i = 0; i < 37; i++)
    {
        if (a[i] == 'x')
        {
            a[i] = 97 + rand() % 26;
        }
    }

    for (i = 0; i < 37; i++)
    {
        printf("%c", a[i]);
    }

    printf("\n");

    return 0;
}