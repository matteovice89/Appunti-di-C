    / *STRINGHE
    ricorda che La memorizzazione di una stringa comprende i caratteri che effettivamente 
    la compongono, più un carattere di terminazione che delimita l'ultimo
    carattere della stringa (delimitatore).
    
    Caratteri e le stringhe non sono la stessa cosa e bisogna fare attenzione:
    -un carattere è in realtà un numero intero (codice ascii)
    -una stringa è un array di caratteri che termina con un byte aggiuntivo di 
    valore 0 (da non confondere con lo '0' carattere che ha invece valore 48).
    In pratica: una variabile di tipo stringa è un puntatore al primo 
    carattere di un array di caratteri
*/
    
#include <stdio.h>

int main() {
    char str1[] = "str1 prova";
    char str2[128] = "str2";
    char str3[4] = "str3";

    
    printf("%d %d %d\n", sizeof(str1), sizeof(str2), sizeof(str3));
    
    
    printf("%s %s %s\n", str1, str2, str3);

   
    str3[3] = 0;

    // output: str1 str2 str
    printf("%s %s %s\n", str1, str2, str3);
    
/*char *settimana[] è un array che memorizza 7 puntatori a carattere. 
Si tratta di un tipo in genere utilizzato per gestire gruppi di stringhe di caratteri.*/
    char *settimana[] = {
    "lunedì", 
    "martedì", 
    "mercoledì",
    "giovedì", 
    "venerdì",
    "sabato", 
    "domenica" 
};

printf("%s\n", settimana[0]); /* Output: lunedi */
}
