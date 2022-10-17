#include <stdio.h>


int main()
{
    int i = 0;
    int fin=0;
    printf("Inserte un número\n");
    scanf("%d",&fin);
        printf("Los numeros del 1 al %d son:\n",fin);
    while (i < fin)
    {
        i++;
        printf("%d\n",i);
    }
return(1);
}
