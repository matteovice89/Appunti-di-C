//PASSAGGI DI VALORI 

#include <stdio.h>

void scambia(int a,int b){
    int t=0; //variabile per lo scambio temporanea
    
    t=a;
    a=b;
    b=t;
    printf("dopo lo scambio i valori risultano a: %d e b: %d\n ",a,b);
}

//funzione scambia2 con passaggio di indirizzi

void scambia2 (int *a, int *b){
    int t=0; 
    
    t=*a;
    *a=*b;
    *b=t;
    printf("dopo lo scambio indirizzo i valori risultano a: %d e b: %d\n ",*a,*b);
    
}

int main()
{
    int a=5;
    int b=10;
    printf("le varibili che hai inserito sono a: %d e b: %d\n ",a,b);
    scambia(a,b);
    printf("dopo la funzione scambia ma sul main i valori risultano a: %d e b: %d\n ",a,b);
    /*
    qui si nota che l'output è 
    le varibili che hai inserito sono a: 5 e b: 10
    dopo lo scambio i valori risultano a: 10 e b: 5
    dopo la funzione scambia ma sul main i valori risultano a: 5 e b: 10
    viene fatta una copia e nn ho uno scambio vero
    devo passare le variabili non per valore ma per indirizzo.*/
    printf("---------------------qui sotto passaggio per indirizo------");
    printf("le varibili che hai inserito sono a: %d e b: %d\n ",a,b);
    scambia(a,b);
    printf("dopo la funzione scambia ma sul main i valori risultano a: %d e b: %d\n ",a,b);
    scambia2(&a,&b);//attenzione devo mettere la & perchè si tratta dei puntatori
    printf("dopo la funzione scambia2 fatta per indirizzo ma sul main i valori risultano a: %d e b: %d\n ",a,b);
    
    return 0;
}
