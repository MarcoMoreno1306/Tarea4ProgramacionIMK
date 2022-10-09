#include <stdio.h>

int main ()
{
    int n, numeros;
    
    printf("Ingrese un número\n");
    scanf("%d",&n);
    for(numeros = 1; numeros<=n; numeros++)
    {
        printf("%d,",numeros);
    }
    return(0);
}