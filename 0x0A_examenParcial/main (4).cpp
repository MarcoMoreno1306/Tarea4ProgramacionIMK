#include <stdio.h>
#include <math.h>
#include "main.h"

int main()
{
    int area(float volumen, float densidad, float costoAnterior);
    float volumen,densidad,costo;
    char opcion;
printf("Elija el tipo del producto\n");
printf("a - Aceite\n");

printf("b - Alcohol\n");
printf("c - Gasolina\n");
printf("d - Acetona\n");
scanf("%c", &opcion);
printf("Ingrese el volumen a envasar\n");
scanf("%f", &volumen);
    if(volumen== 500)
    {
    costo = 1.006;
    }
    else if (volumen == 1000)
    {
        costo = 1.6816;
    }
    else if (volumen == 1500)
    {
        costo == 1.9610;
    }
    else if (volumen == 3000)
    {
        costo = 3.1038;
    }

 switch(opcion)
    {
        case 'a':
        densidad = 0.9;
        area(volumen, densidad, costo);
        break;
        case 'b':
        densidad = 0.8;
        area(volumen, densidad, costo);
        break;
        case 'c':
        densidad = 0.68;
        area(volumen, densidad, costo);
        break;
        case 'd':
        densidad = 0.79;
        area(volumen, densidad, costo);
        break;
        default:
        printf("Opcion no valida");
        break;
            
    }
    
}