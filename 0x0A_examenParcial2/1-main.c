#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Introduzca un numero:\n");
    scanf("%d", &n);

    printf("\n");

    for (i = 1; i < n+1; i++)
    {

        for (j = 0; j <= (n - i); j++)
        {
            printf(" ");
        }

        for (j = 0; j <= 5; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}