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
    printf("ch: %c\t size:%d\n",ch,sizeof(ch));
}
