//FUNZIONI

#include <stdio.h>
//vanno messe all'esterno del main

void saluto(){ //definisco funzione che non restiuisce nulla senza param input
    printf("hello\n");
}

void saluto2();//divido in due parti qui e la firma e sotto come lavora

void somma(int a,int b){ //i nomi sono visibili solo qui
    int s=a+b;
    printf("somma = %d\n",s);
}

int molt(int a, int b){ //restituisce un intero
    int m=a*b;
    return m;
}


int main()
{
    saluto();//chiamo la funzione 
    saluto2();
    somma(10,30);//
    int m=molt(10,30);
    printf("m= %d\n",m);
    return 0;
}

void saluto2(){
    printf("hello 2\n");
}
