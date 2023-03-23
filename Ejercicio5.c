#include <stdio.h>

int main()
{
    int array[5];
    for(int i = 0; i<5; i++)
    {
    int N;
     printf("\nIngrese un número entero: ");
     scanf("%d", &N);
     int array[5] = {N, N, N, N, N};
     int *punteroN =  array;
     *punteroN = *punteroN * 2;
     printf("El doble del número entero es: %d \n", *punteroN);
    }
    return 0;
}
