#include <stdio.h>

int main()
{
    float peso;
    float altura;
    float imc;

    printf("Ingrese su peso en kg: ");
    scanf("%f", &peso);

    printf("Ingrese su altura en metros: ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);

    printf("Su índice de masa corporal es: %.1f\n", imc);

    printf("\nIndice|Condicion\n");
    printf("Menor a 18.5|Bajo peso\n");
    printf("18.5 - 24.9|Normal\n");
    printf("25.0 - 29.9| Sobrepeso\n");
    printf("30.0 o más|Obesidad\n");
    return 0;
}
