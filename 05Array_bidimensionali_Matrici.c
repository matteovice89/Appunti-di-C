#include <stdio.h>

int main()
{
    int matr[3][4]; //matrice da 3 righe e 4 colonne
    matr[0][0]=12; //nella riga 3 colonna 4 ho messo il valore 12
    printf("%d\n",matr[0][0]);
    
    //assegnazione dei valori
    int tab[3][4]= {
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0}
        
    };
    
    for (int r=0; r<3;r++){
        for(int c=0;c<4;c++){
            matr[r][c]=3;
        }
    }
    //stampo la matrice
    for (int r=0; r<3;r++){ 
        for(int c=0;c<4;c++){
            printf("%d ",matr[r][c]);
            
        }
        printf("\n");
    }
    return 0;
}
