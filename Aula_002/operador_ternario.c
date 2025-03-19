#include <stdio.h>

int main()
{
    int idade = 16;
    char* resultado;

    // Condição ? verdadeiro : falso;
    resultado = (idade >= 18) ? "Você é maior de idade" : "Você é menor de idade";

    printf("%s\n", resultado);

    int temperatura = 28;
    char* estado;

    estado = (temperatura > 30) ? "Calor" : "Frio";

    printf("Estado: %s\n", estado);

    int num1 = 10, num2 = 20;
    int maior;

    maior = (num1 > num2) ? num1 : num2;

    printf("O maior número é: %d\n", maior);

    return 0;
}