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

int main()
{
    char ch = 'n';
    printf("ch: %c\t size:%d\n",ch,sizeof(ch)); //ch: n    size:1
    
    int  n = 12;
    printf("n: %d\t size:%d\n",n,sizeof(n)); //n: 12    size:4
    
    float f = 12.5;
    printf("f: %f\t size:%d\n",f,sizeof(f)); //f: 12.500000     size:4
    
    double dl = 23.5681;
    printf("dl: %f\t size:%d\n",dl,sizeof(dl)); //dl: 23.568100    size:8
}

