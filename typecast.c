//TYPE CAST



#include <stdio.h>

int main()
{
    /*
    int n=10;
    int m=3;
    float d = n/m;
    printf("d: %f\n",d); // out d: 3.000000
    //ho un problema dato che divido due interi e metto il risultato in float*/
    int n=10;
    int m=3;
    float d =(float)n/m;//conversione esplicita della var n
    printf("d: %f\n",d);// d: 3.333333
    return 0;
}
