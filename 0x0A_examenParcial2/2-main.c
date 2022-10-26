#include <stdio.h>

int main()
{
    char L,l,M,m,X,x,J,j,V,v,S,s,D,d,dia;
    float inicio,final;
    int decision;
    int tiempo, costo;
    printf("Ingrese el dia en el cual hizo la llamada\n");
    scanf("%c",&dia);
    printf("Ingrese la hora a la cual empezo la llamada\n");
    scanf("%f",&inicio);
    printf("Ingrese la hora a la cual termino la llamada\n");
    scanf("%f",&final);
tiempo =final-inicio;
    if(dia=='L' || dia=='l' || dia=='M' || dia=='m' || dia=='X' || dia=='x' || dia=='J' || dia=='j' || dia=='V' || dia=='v')
{
    costo = tiempo*.30;
printf("El costo a pagar es de $%d",costo);
}
else if (dia=='S' || dia=='s' || dia=='D' || dia=='d')
{
    costo = tiempo* .15;
    printf("El costo a pagar es de $%d\n",costo);
}
printf("Quiere repetir el proceso? 1-si, 2-no\n");
scanf("%d",&decision);
if (decision == 1)
{
while(1);
}
    }
