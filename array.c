#include <stdio.h>

int main()
{
	/*definizione*/
	double numbers[50]; /*posso definirli con tipo nome [cardinalitC ]*/
	int dxm[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; /*non indico cardinalitC  ma espl
                                                                  gli elementi*/
	int a[10] = {1, 5, 3};/*qui gli spazzi non usati vengo riempiti con zeri*/

	/*Il nome di un array C( un puntatore costante (non puC2 essere modificato!)
	il cui valore corrisponde all'indirizzo del primo elemento del'array*/
	int n[16] = {}; /*definisco un array di 16 zeri*/

	printf("n= %p\n", n);
	printf("&n[0]= %p\n", &n[0]);

	printf("*n= %d\n", *n);
	printf("n[0]= %d\n", n[0]);

	/* MACRO UTILI */
	/*nb Il nome di un array C( un puntatore costante (non puC2 essere modificato!)
	il cui valore corrisponde all'indirizzo del primo elemento del'array*/

#define ARRAY_SIZE(x) (sizeof(x) / sizeof(*x)) /* calcolo qunti elementi arrey*/
	int v[10];
	int dim = ARRAY_SIZE(v);
	printf("dimensione array v (non dipende dal tipo di dato) %d\n ",dim);
}
