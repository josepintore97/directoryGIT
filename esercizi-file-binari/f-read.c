#include <stdio.h>

int main()
{
    float a[10];
    FILE *fp;
    int n, i;

    fp = fopen("binario.bin", "rb");

    n = fread(a, sizeof(float), 10, fp); //sizeof restituisce il numero di byte del tipo.

    fclose(fp);

    for (i = 0; i < n; i++)
    {
        printf("%f ", a[i]);
    }
    printf("\n");

    return 0;
}