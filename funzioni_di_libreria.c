/* FUNZIONI DI LIBRERIA*/
int main() {
#include <stdio.h>
/*caratteri*/
#include <ctype.h>

/*toupper (Converte un carattere in maiuscolo, se possibile)*/
char carattere= 'a';
char carattereM=toupper(carattere);
printf("toupper %c ----> %c\n",carattere,carattereM);

/*tolower (Converte un carattere in minuscolo, se possibile)*/
carattere= 'M';
char caratterem=tolower(carattere);
printf("tolower %c ----> %c\n",carattere,caratterem);

/* isupper (Verifica se un carattere è una lettera maiuscola) */

char ch = 'b';
if (isupper(ch)) { 
    printf("isupper: %c è una lettera maiuscola\n", ch);
    } else {
    printf("isupper: %c non è una lettera maiuscola\n", ch);
    }
/*analogamente a isupper abbiamo altre funzioni di libreri che lavorano in modo analogo:
-islower (Verifica se un carattere è una lettera minuscola)
-isalpha (Verifica se un carattere è una lettera dell'alfabeto)
-isdigit (Verifica se un carattere è una cifra numerica)
-isspace (Verifica se un carattere è uno spazio o un carattere di spaziatura)*/

}
