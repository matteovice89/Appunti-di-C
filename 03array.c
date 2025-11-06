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
	
	char vet[4];
    char vet1[] = { 'a', 'b', 'c', '\n' };
    char vet2[4] = { 'a' };
    char vet3[] = { '0', 0 };
    dim=ARRAY_SIZE(vet1);
    for (int i=0; i<dim; i++) {
        printf("%c",vet1[i]);
       
        }
    printf("\n \n"); /*stampo tabella ascii */
    for (unsigned char c = 0; c < 128; c++) {
    printf("[%d] [%x] %c\n", c, c, c);
  }
    

    
}
