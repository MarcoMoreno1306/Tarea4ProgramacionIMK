#include "main.h"
#include <stdio.h>

int main(void)
{
    int resultado = 0;

    resultado = mul(15,1);
    printf("El resultado de la multiplicacion es: %d\n",resultado);
    resultado = mul(0,25);
    printf("El resultado de la multiplicacion es: %d\n",resultado);
    resultado = mul(-10,-7);
    printf("El resultado de la multiplicacion es: %d\n",resultado);
    return 0;
}
