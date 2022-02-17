#define DIM 50

typedef struct
{
    int n_elementi;
    int dati[DIM];
} Lista;

void inizializza_lista(Lista *pl);
void inserimento_ord(Lista *pl, int numero);
int piena(Lista l);
void stampa(Lista l);