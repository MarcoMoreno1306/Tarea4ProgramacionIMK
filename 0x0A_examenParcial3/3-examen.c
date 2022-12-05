#include <stdio.h>

int main()
{
    char decision;
    int xam = 8;
    int yen = 8;
   char laberinto[xam][yen];
   for(char i = 0; i<yen; i++)
{
    for(char j = 0; j<xam; j++)
    {
     laberinto[i][j]=' ';
    }
}

laberinto[4][2]='X';
laberinto[0][1]='J';
laberinto[0][2]='J';
laberinto[0][3]='J';
laberinto[0][4]='J';
laberinto[0][5]='J';
laberinto[1][1]='J';
laberinto[1][5]='J';
laberinto[2][1]='J';
laberinto[2][3]='J';
laberinto[2][5]='J';
laberinto[3][1]='J';
laberinto[3][3]='J';
laberinto[3][5]='J';
laberinto[3][6]='J';
laberinto[3][7]='J';
laberinto[4][1]='J';
laberinto[4][3]='J';
laberinto[5][1]='J';
laberinto[5][2]='J';
laberinto[5][3]='J';
laberinto[5][4]='J';
laberinto[5][5]='J';
laberinto[5][6]='J';
laberinto[5][7]='J';
laberinto[4][2]='X';

for(int i = 0; i<yen; i++)
{
    for(int j = 0; j<xam; j++)
    {
     printf("[%c]",laberinto[i][j]);
    }
    printf("\n");
}
    int x=4;
    int y=2;
        while(laberinto[4][7]!='X')
    {
    printf("Hacia donde desea moverse, w-arriba, s-abajo, a-izquierda, d-derecha\n");
    scanf("%c",&decision);
if(decision=='w')
{
     if(laberinto[x-1][y]==' ')
     {
         laberinto[x-1][y]='X';
         
         laberinto[x][y]=' ';
         x=x-1;
     }
      else
         {
           printf("NO CTM\n");
         }

}
if(decision=='s')
{
    if(laberinto[x+1][y]==' ')
    {
  laberinto[x+1][y]='X';
  laberinto[x][y]=' ';
  x=x+1;
    }
     else
         {
                      printf("NO CTM\n");
         }
}
if(decision=='a')
{
    if(laberinto[x][y-1]==' ')
    {
       laberinto[x][y-1]='X';
       laberinto[x][y]=' ';
       y=y-1;
    }
    else
         {
                      printf("NO CTM\n");
         }
    }
if(decision=='d')
{
        if(laberinto[x][y+1]==' ')
        {
            laberinto[x][y]=' ';

            laberinto[x][y+1]='X';

            y=y+1;
        }
        else
        {
            printf ("NO CTM\n");
        }
}
    for(int i = 0; i<yen; i++)
    {
        for(int j = 0; j<xam;j++)
        {
            printf("[%c]", laberinto[i][j]);
        }
        printf("\n");
    }
}
}