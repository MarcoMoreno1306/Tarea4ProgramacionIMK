#include <stdio.h>

int main()
{
    float gasolina;
    float g;
    float galon;
    float m;
    float resultado;
    while(1)
    {
    printf("Ingrese el numero de litros de gasolina\n");
    scanf("%f", &g);
    printf("Ingrese el numero de millas recorrido\n");
    scanf("%f", &m);
    galon = 0.264179;
    gasolina = g*galon;
    resultado = m / gasolina;
    
    printf("El recorrido fue de:\n");
    printf("%f\n",resultado);
}
}