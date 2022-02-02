CampoMinato: main.o inizializza_mine.o mine_adiacenti.o rivela.o stampa.o 
	gcc -g -o CampoMinato main.o inizializza_mine.o mine_adiacenti.o rivela.o stampa.o

main.o: main.c righe_colonne_caselle.h inizializza_mine.h mine_adiacenti.h rivela.h stampa.h 
	gcc -g -c main.c

inizializza_mine.o: inizializza_mine.c righe_colonne_caselle.h
	gcc -g -c inizializza_mine.c

mine_adiacenti.o: mine_adiacenti.c righe_colonne_caselle.h
	gcc -g -c mine_adiacenti.c

rivela.o: rivela.c righe_colonne_caselle.h stampa.h
	gcc -g -c rivela.c

stampa.o: stampa.c righe_colonne_caselle.h mine_adiacenti.o 
	gcc -g -c stampa.c

