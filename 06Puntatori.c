//PUNTATORI

/*E' UNA VARIABILE CHE MEMORIZ INDIR DI MEMORIA.
SONO VARIABILI CHE MANTENGONO LA POSIZINE*/



#include <stdio.h>

int main()
{
    int x=5;
    int *p = &x; //dichiaro il tipo e con * prima del nome (buona cosa inizializzarlo subito)
    //p= &x; con & assegno a p l'indirizzo di memoria della variabile x - 
    printf("adr: %p\n",p); // con %p stampo contenuto puntatore
    printf("valore: %d\n",*p); //con *p vado a restituire il valore della var a cui punta il puntatore p
    
    (*p)=567; //vado a modificare direttamtne il valore a cui punta il puntatore
    printf("dopo il riassegnamenteo:\nvariabile: %d\nvalore a cui punta il puntatore:%d\n",x,*p);
// quindi posso intervenire sulla variabile modificando direttametne il valore a cui punta il puntatore

    int *p2;
    p2=p;
    printf("adr: %p\n",p2);
    printf("valore: %d\n",*p2);
    //copio giusto giusto quant dal secondo puntatore
    //PUNTATORI ED ARRAY - ARITMETICA DI PUNTATORI
    int num[5]={1,5,2,3,8};
    int *pa = num; //con gli array faccio senza specificare &num 
    printf("l: %d %p\n",*pa, pa);//stampo il valore prima cella ed indirizzoa
    pa++; //scatto alla cella successiva
    printf("l: %d %p\n",*pa, pa);
    pa++;  
    printf("l: %d %p\n",*pa, pa);
    return 0;
}
