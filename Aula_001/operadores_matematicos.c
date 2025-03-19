#include <stdio.h>

int main()
{
    int x, y;

    printf("Informe o primeiro numero: ");
    scanf("%d", &x);
    printf("Informe o segundo numero: ");
    scanf("%d", &y);

    int soma = x + y;
    int subtracao = x - y;
    int multiplicacao = x * y;
    int divisao = x / y;

    printf("A soma dos números é %d: \n", soma);
    printf("A subtração dos números é %d: \n", subtracao);
    printf("A multiplicação dos números é %d: \n", multiplicacao);
    printf("A divisão dos números é %d: \n", divisao);
}