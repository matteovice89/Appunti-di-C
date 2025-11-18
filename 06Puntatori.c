//PUNTATORI

/*E' UNA VARIABILE CHE MEMORIZ INDIR DI MEMORIA.
SONO VARIABILI CHE MANTENGONO LA POSIZINE*/



#include <stdio.h>

int main()
{
    int x=5;
    int *p; //dichiaro il tipo e con * prima del nome 
    p= &x; //con & assegno a p l'indirizzo di memoria della variabile x
    printf("%d",*p); //con *p vado a restituire il valore della var a cui punta il puntatore p

    return 0;
}
