#include <stdio.h>

int main()
{
    int x, resultado;

    printf("Informe o numero: ");
    scanf("%d", &x);

    resultado = x;
    printf("Atribuição simples: %d\n", resultado);
    
    resultado += x;
    printf("Atribuição com soma: %d\n", resultado);

    resultado -= x;
    printf("Atribuição com subtração: %d\n", resultado);

    resultado *= x;
    printf("Atribuição com multiplicação: %d\n", resultado);

    resultado /= x;
    printf("Atribuição com divisão: %d\n", resultado);


}