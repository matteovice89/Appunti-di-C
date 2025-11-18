#include <stdio.h>


/*FUNZIONI

Una definizione è costituita da due parti: 

    -la dichiarazione della funzione
    -il corpo della funzione, racchiuso tra parentesi graffe e comprendente zero o più di queste componenti:
        *dichiarazioni e definizioni di variabili
        *istruzioni
        *istruzione return
la prima parte è la dichiarazine che devve conternere:

    il tipo ritornato
    il nome della funzione
    l'elenco dei parametri (argomenti)

        
/* esempio di definizione */
int secondi(int h, int m, int s) {/* in fase di dichiarazione è possibile omettere il nome dei parametri */
    return (3600 * h + 60 * m + s);
    }
/*invocazione
Una funzione termina quando: (a) viene eseguita l'istruzione return, oppure (b) viene eseguita l'ultima istruzione.*/
int main() {
    int h=1, m=1, s=1, totale_secondi;
    totale_secondi = secondi(h, m, s);
    printf("Totale secondi: %d\n", totale_secondi);


/*VOID: L’uso del tipo void nelle funzioni identifica tipi nulli:

    se usato come tipo di ritorno, la funziona non restituisce alcun valore
    se usato come parametro di input, la funzione non accetta nessun parametro
*/
void say_hi(void) {
    printf("Hi!\n");
}    
    say_hi();
}

