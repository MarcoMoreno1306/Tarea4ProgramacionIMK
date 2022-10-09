#include <stdio.h>

int main ()
{
     char letra;
    printf("Las letras del alfabeto son:");
    for(letra = 'a'; letra<='z'; letra++)
    {
        printf("%c ",letra);
    }
    return(0);
}