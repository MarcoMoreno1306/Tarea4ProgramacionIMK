#include<stdio.h>

int main()
{
    int n=0, i=2;
    printf("Escriba un número:\n");
    scanf("%d",&n);
    printf("Los números pares del 1 al %d son:\n",n);
    while (i <= n)
    {
        printf("%d\n",i);
        i = i+2;
    }
    
}