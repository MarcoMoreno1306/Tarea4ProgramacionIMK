#include "main.h"
#include <stdio.h>
//base = 4 exp = 8
int potencia(int base, int exp)
{
int final = 1;
for (int i = 1; i<=exp;i++)
{
    final = final*base;
}
return(final);
}

