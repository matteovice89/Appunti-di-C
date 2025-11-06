#include <stdio.h>

int main()
{
    int anno;
    printf("inserire anno di nascita ");
    scanf("%d",&anno); //ricorda il & prima della variabile
    printf("\n anno di nascita: %d\n",anno);
    
    int a,b;
    printf("inserire il primo addendndo ");
    scanf("%d",&a);
    printf("\n inserire il secondo addendo ");
    scanf("%d",&b);
    printf("\nla somma tra di due numeri è %d",a+b);
    return 0;
}
