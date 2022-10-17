#include <stdio.h>


int main()
{
    int ultimo = 0, numero = 0, Suma = 0;
    printf("Inserte un número\n");
    scanf("%d",&numero);
    ultimo = numero / 10;
    ultimo = numero - (ultimo * 10);
   
   while (numero > 9)
    {
        
        numero = numero / 10 ;

    }
    Suma = numero + ultimo;
    printf("La suma del primer dígito con el último es:\n");
    printf("%d",Suma);
}