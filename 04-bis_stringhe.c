/*stringhe da finire */

//sono array di caratteri

#include <stdio.h>
#include <string.h> //funzioni per facilitare stringhe
int main()
{
    char str[10];
    char nome[]="Mario rossi";
    printf("%s\n",nome);
    
    //calcolare lunghezza di caratteri - con sizeof dice quanto grande il contenitore
    
    l=strlen(nome); //ci ritorna il numero di caratteri reali usati
    
    return 0;
}
