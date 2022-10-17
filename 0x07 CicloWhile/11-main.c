#include<stdio.h>

int main()
{
    int n=0, suma=0, i=1;
    printf("Escriba un numero:\n");
    scanf("%d",&n);
     while (i <= n)
     {
        suma = suma +i;
        i = i + 2;
     }
     printf("La suma de los números del 1 al %d es de:\n",suma);
     printf("%d\n",suma);
    
}
