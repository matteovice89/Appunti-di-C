
//sono array di caratteri

#include <stdio.h>
#include <string.h> //funzioni per facilitare stringhe
int main()
{
    char str[10];
    char nome[]="prova";
    printf("%s\n",nome);
    
    //calcolare lunghezza di caratteri - con sizeof dice quanto grande il contenitore
    
    int l=strlen(nome); //ci ritorna il numero di caratteri reali usati
    char str1[]=" ";//ho visto che è meglio inizializzare anche solo con un carattere spazio
    printf("inserisci una stinga\n");
    scanf("%s",&str1);
    printf("hai inserito %s\n",str1);
    int l2=strlen(str1);
    printf("%s ha lunghezza di %d\n",str1,l2);
    
    int ans=strcmp(str1,nome); //strcmp ritorna 0 se le strg sono identiche se no riporta altro numero
    printf("%d\n",ans); // se uso in un info devo fare if not cioè se non ci sono differenze
    
    //strcpy(); copia le stringhe
    //strcat concatena le srtinghe
    if (strchr("salve", 'e')) //trova la prima occorrenza dl carattere
        printf("e è in salve");
    
    
    return 0;
}
