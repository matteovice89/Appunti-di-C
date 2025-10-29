#include <stdio.h>

int main()
{
    /*definizione*/
    double numbers[50]; /*posso definirli con tipo nome [cardinalità]*/
    int dxm[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; /*non indico cardinalità ma espl
                                                                  gli elementi*/
    int a[10] = {1, 5, 3};/*qui gli spazzi non usati vengo riempiti con zeri*/
    
    /*Il nome di un array è un puntatore costante (non può essere modificato!) 
    il cui valore corrisponde all'indirizzo del primo elemento del'array*/
    int n[16] = {}; /*definisco un array di 16 zeri*/

    printf("n= %p\n", n);
    printf("&n[0]= %p\n", &n[0]);
    
    printf("*n= %d\n", *n);
    printf("n[0]= %d\n", n[0]);
}
