#include <stdio.h>
#include <math.h>
#include "main.h"


int area(float volumen, float densidad, float costoAnterior)
{
    float area, radio1, area2, y;
    float gramos;
    float pi = 3.1416;
    float costo, costom2 = 2.45;
    radio1 = cbrt((2*volumen)/(4*pi));
    area2 = (2*pi*(pow(radio1,2)) + 2*pi*radio1*(volumen/(pi*pow(radio1,2))));
    y= (volumen/(pi*pow(radio1,2)));
    costo = volumen * densidad;
    costo = costo/1000;
    
    gramos = volumen*densidad;
    float Costonuevo = costoAnterior - costo;
    printf("La radio de la lata esde %.2f cm\n", radio1);
    printf ("El área total de la lata es de %.2f cm2\n", area2);
    printf("El costo de la fabricación es de $ %.2f \n",costo);
    printf("Costo anterior para lata de %0.f ml: %0.f", volumen, costoAnterior);
    printf("Ahorro $ %.2f\n", Costonuevo);
    printf("%0.f ml en gramos = %0.2f gr\n", volumen,gramos);
    return(0);
}