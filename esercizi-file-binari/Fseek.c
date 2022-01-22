#include <stdio.h>

int main()
{
    FILE *fp;
    int i;

    if ((fp = fopen("Fseek.txt", "w+t")) == NULL)
    {
        printf("Errore nell apertura del file.\n");
    }

    fprintf(fp, "%d", 5);
    fseek(fp, -1, SEEK_CUR); //per passare da scrittura a lettura (o viceversa a secondo dei casi)
    fscanf(fp, "%d", &i);    //i==5

    if ((fclose(fp)) != 0)
    {
        printf("Errore nella chiusura del file.\n");
    }

    return 0;
}