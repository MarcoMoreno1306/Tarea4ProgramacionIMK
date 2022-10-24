#include <stdio.h>
#include <math.h>
int main(void)
{
    float a;
    float b;
    float c;
    float s;
    float area;
    float perimetro;
    printf("Ingrese un lado del triangulo\n");
    scanf("%f", &a);
        printf("Ingrese otro lado del triangulo\n");
    scanf("%f", &b);
        printf("Ingrese otro lado del triangulo\n");
    scanf("%f", &c);
     s=(a+b+c)/2;
    area= sqrt(s*(s-a)*(s-b)*(s-c));
    perimetro=s*2;
        if(area>0){
   printf("El area del triangulo es de:\n");
    printf("%f\n", area);
    printf("El perimetro del triangulo es de:\n");
    printf("%f", perimetro);
    }
    else
    {
        printf("El triangulo no existe.\n");
    }
    

  
    return 0;
}
