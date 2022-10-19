#include <stdio.h>

int main()
{
    int i, j, n;
    int x, z;
   
    printf("Introduzca un numero:\n");
    scanf("%d", &n);
    
    
    x = 1;
    z = n - 1;
    
    for(i=1; i<n*2; i++)
    {
        for(j=1; j<=z; j++)
            printf(" ");
        
        for(j=1; j<x*2; j++)
            printf("*");
        
        printf("\n");
        
        if(i<n)
        {
            z--;
            x++;
        }
        else
        {
            z++;
            x--;
        }
    }
    
    return 0;
}