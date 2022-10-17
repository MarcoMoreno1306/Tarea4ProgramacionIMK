#include<stdio.h>
int main()
{
    int n=0, suma=0, i=1;
    printf("Escriba un numero:\n");
    scanf("%d",&n);
    while (i<=n)
    {
        suma = suma + i;
        i++;
        
    }
    printf("La suma de los números anteriores es:\n%d\n",suma);
   
}
