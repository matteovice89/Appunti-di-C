/* TIPI DI DATI
Il c ammette 5 tipi di dati con modificatori che permettono di estendere

-char
-int
-floar
-double
-void
 -usigned invece è un modificatore
 -sizeof ci permette di misurare quanti byte occupano le variabili */
 
#include <stdio.h>

#define PI_GRECO 3.14 //compilatore cerca tutti i punti in cui c'è PI_GRECO e lo sost con 3.14
int main()
{
    char ch = 'n';
    printf("ch: %c\t size:%d\n",ch,sizeof(ch));
    
    int  n = 12;
    printf("n: %d\t size:%d\n",n,sizeof(n));
    
    float f = 12.5;
    printf("f: %f\t size:%d\n",f,sizeof(f));
    
    double dl = 23.5681;
    printf("dl: %f\t size:%d\n",dl,sizeof(dl));
    
    const  float pi = 3.14; // la costante non può essere modificata - posso usare una direttiva anche vedi sopra 
    
    float nepero = 27.56F; //con f forzo ad avere un valore con virgola
    
    //0-9 ABCDEF NUMERI ESADECIMALI
    int addr = 0x12FA; //CON 0X DAVANTI DIVENTA UN ESADECIMALE
    printf("addr: %d\n", addr); //così stampo il numero convertito
}
