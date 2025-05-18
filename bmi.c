/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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

    // Muestra la tabla de referencia
    printf("\nIndice|Condicion\n");
    printf("Menor a 18.5|Bajo peso\n");
    printf("18.5 - 24.9|Normal\n");
    printf("25.0 - 29.9| Sobrepeso\n");
    printf("30.0 o más|Obesidad\n");
    return 0;
}