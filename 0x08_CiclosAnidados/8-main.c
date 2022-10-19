#include <stdio.h>

int main()
{
    int i, j, xy;

    printf("Introduzca un numero:\n ");
    scanf("%d", &xy);

    for(i=1; i<xy*2; i++)
    {
        for(j=1; j<=xy; j++)
        {
            if((i==1 && (j==1 || j==xy)) || 
               (i==xy && (j==1 || j==xy)) || 
               (i==xy*2-1 && (j==1 || j==xy)))
            {
                printf(" ");
            }
            else if(i==1 || i==xy || i==(xy*2)-1 || j==1 || j==xy)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}