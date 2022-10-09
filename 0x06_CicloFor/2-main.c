#include <stdio.h>

int main ()
{
    int n, numeros;
    
    printf("Ingrese un número\n");
    scanf("%d",&n);
    for(numeros = n; numeros>=1; numeros--)
    {
        printf("%d ",numeros);
    }
    return(0);
}