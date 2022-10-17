#include <stdio.h>


int main()
{
    int n=0;
    int contador=0;
    
    printf("Ingrese un numero:\n");
    scanf("%d",&n);
    
            printf("Numero: %d\n", n);
    while (n>=1)
    {
        n=n/10;

        contador++;
    }
     printf("El numero tiene %d digitos:\n",contador);
    return(0);
}
