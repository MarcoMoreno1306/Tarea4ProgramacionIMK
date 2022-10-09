#include <stdio.h>

int main ()
{
    int n=0, numeros=0,mas=0;
    
    printf("Ingrese un número\n");
    scanf("%d",&n);
    for(numeros = 1; numeros<=n; numeros++)
    {
        mas = mas+numeros;
    }
printf("la suma de los numeros del 1 al %d es : %d",numeros,mas);    
    return(0);
}
