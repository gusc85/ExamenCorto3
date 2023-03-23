#include <stdio.h>

int main()
{
    float valorC;
    float farenheit;
    
    printf("Por favor ingrese un valor de temperatura en Farenheit: ");
    scanf("%f", &farenheit);
    
    valorC = (farenheit - 32) / 1.8;
    
    printf("Su valor en grados Celcius es igual a %f", valorC);
    return 0;
}



