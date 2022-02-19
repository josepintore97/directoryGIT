typedef struct
{
    int matricola;
    int punteggio; //solo per leggere i record del file .dat
    char prova;
} Record;

typedef struct
{
    int superato; //riporta l esito della valutazione della prova svolta dallo studente
    int somma;
} Esito;

typedef struct
{
    int matricola;
    int teorico; //per archiviare i dati nella lista collegata
    int pratico;
} Studente;

typedef struct nodo
{
    Studente dato;
    struct nodo *next; //lista collegata
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista *pl);
void inTesta(Lista *pl, Studente d);
Esito esito(int pratico, int teorico);
void aggiorna(Lista *pl, Record v);
void stampa(Lista l);
int confrontoStudente(Studente s1, Studente s2);
void insOrd(Lista *pl, Studente s);
void insertionSort(Lista *pl);