//Write a C program to find maximum and minimum element in an array. 
#include <stdio.h>
#define MAX_SIZE 1000
int main(){
    int arr[MAX_SIZE];
    int N, max=0, min=0;

    printf("Ingrese la cantidad de numeros\n");
    scanf("%d", &N);
   
    printf("Ingrese %d numeros:\n",N);
    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<N; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    printf("El maximo es: %d\n",max);
    printf("El minimo es: %d\n",min);

}