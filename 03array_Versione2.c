/*ARRAY*/



#include <stdio.h>

int main()
{
	int num[10]; //struttura che occupa 4byte * 10 posti
	num[0]=12;//inserisco valore che voglio mettere al primo posto
	printf("%d\n",num[0]);

	int num2[5]= {2,35,65,98}; //creazione con valori
	//per stampare ho bisogno di un ciclo for
	for (int i=0; i<5; i++) {
		printf("%d ",num2[i]);
	}
	printf("\n");

	//cosa succede se stmapo un array vuoto?

	int na[10];

	for (int i=0; i<10; i++) {
		printf("%d ",na[i]);
	} //ottengo numeri casuali (prende porzioni di memoria usate non libere)
	printf("\n");//1858639208 32765 -1889168875 30357 1858639088 32765 46 0 1858639208 32765

	//la soluzione C( inizializzare tutti i valori a 0 se non voglio avere problemi e poi stamparli
	int lista[10];
	for (int i=0; i<10; i++) {
		lista[i]=0; //questo non solo per avere dei 0 ma anche per lavorare sugli array
	}
	for (int i=0; i<10; i++) {
		printf("%d ",lista[i]);
	}

	return 0;
}
