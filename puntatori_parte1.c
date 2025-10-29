#include <stdio.h>

int main()
{
    int *p; /*inizializzo la varibaile puntore con un */
    int n=32;
    /* p=32;
    printf("p=32%n\n",p questa scrittura restiusce errore */
    p=&n;
    printf("p=&n %n\n", *p);

    
}
