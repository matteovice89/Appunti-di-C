//FUNZIONI E ARRAY
//ci sono diversi modi per indicare un array come parametro

#include <stdio.h>

void prta(int n[10]){ //metodo 1
    for (int i=0;i<10;i++){
        printf("%d ",n[i]);
    }
    printf("\n");
    
}

void prta2(int n[]){ // metodo 2 non dare le dimensioni
    for (int i=0;i<10;i++){
        printf("%d ",n[i]);
    }
    printf("\n");
    
}
void prta3(int *n){//metodo 3 do il puntatore dell'array come parametro
    for (int i=0;i<10;i++){
        printf("%d ",n[i]);
    }
    printf("\n");
    
} //per le particolarità dell'array esso e semrpe chiamato da indirizzo

int main()
{
    int n[10];
    prta3(n);//richiamo funzione per stampare array

    return 0;
}
