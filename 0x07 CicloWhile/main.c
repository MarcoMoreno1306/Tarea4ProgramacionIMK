#include <stdio.h>


int main ()
{
    int password=0;
    
    printf("inicio del programa\n");
    do
{
    printf("Ingrese una password\n");
    scanf("%d", &password);
}
    while(password!=2112);

printf("Fin del programa\n");

   return (0);
}
