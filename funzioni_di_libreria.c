/* FUNZIONI DI LIBRERIA*/
#include <stdio.h>
#include <ctype.h>/*lib caratteri*/
#include <stdlib.h>/*lib stringhe*/
#include <string.h>
int main() {

	/*caratteri*/


	/*toupper (Converte un carattere in maiuscolo, se possibile)*/
	char carattere= 'a';
	char carattereM=toupper(carattere);
	printf("toupper %c ----> %c\n",carattere,carattereM);

	/*tolower (Converte un carattere in minuscolo, se possibile)*/
	carattere= 'M';
	char caratterem=tolower(carattere);
	printf("tolower %c ----> %c\n",carattere,caratterem);

	/* isupper (Verifica se un carattere C( una lettera maiuscola) */

	char ch = 'b';
	if (isupper(ch)) {
		printf("isupper: %c C( una lettera maiuscola\n", ch);
	} else {
		printf("isupper: %c non C( una lettera maiuscola\n", ch);
	}
	/*analogamente a isupper abbiamo altre funzioni di libreri che lavorano in modo analogo:
	-islower (Verifica se un carattere C( una lettera minuscola)
	-isalpha (Verifica se un carattere C( una lettera dell'alfabeto)
	-isdigit (Verifica se un carattere C( una cifra numerica)
	-isspace (Verifica se un carattere C( uno spazio o un carattere di spaziatura)*/

	printf("--------------------------------------------------------------------------------------------\n");

	/*STRINGHE*/

	/*atoi (Converte una stringa in un intero)*/

	char str[] = "123d45 ciao";/*toglie tutto quello che non C( numero (se c'C( un char in mezzo elimina tutto dopo)*/
	int num = atoi(str);
	printf("atoi: %d\n", num+1);/*mi sono fatto un +1 per vedere che sia un intero*/
	/*analogamente abbiamo:
	atol (Converte una stringa in un long)
	atof (Converte una stringa in un double)

	strcmp (Confronta due stringhe, case-sensitive) usa #include <string.h>*/
	char str1[] = "appl";
	char str2[] = "appL";
	int result = strcmp(str1, str2);
	printf("strcmp: %d\n", result); /*ritorna 0 se true*/
	
	/*strcasecmp (Confronta due stringhe, case-insensitive) UGUALE A SOPRA */
	
	/*strcpy (Copia una stringa in un'altra)*/
	char src[] = "Hello, world!";
    char dest[50];  
    strcpy(dest, src);
    printf("strcpy: %s\n", dest);
    
    /*strlen (Restituisce la lunghezza di una stringa)*/
}
