#include<stdio.h>

int main()
{
    int i, j, n, y;

    printf("Ingrese un numero:\n");
    scanf("%d",&n);

    y=1;

    for(i=1;i<n*2;i++)
    {
        for(j=1; j<=y; j++)
        {
            printf("*");
        }

        if(i < n)
        {
            y++;
        }
        else
        {
            y--;
        }
        printf("\n");
    }

    return 0;
}