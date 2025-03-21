#include <stdio.h>

int main()
{

    // TESTE COM WHILE:

    int i = 0;

    while (i <= 10)
    {
        if (i % 2 == 0)
        {
            printf("O valor de 'i' é %d\n", i);
        }
        i++;
    }

    int numero;

    // TESTE COM DO WHILE:

    do
    {
        printf("Digite um número par para sair do programa: ");
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            printf("%d é um número par.\n", numero);
        }
        else
        {
            printf("%d é um número ímpar.\n", numero);
        }

    } while (numero % 2 != 0);

    printf("Você digitou um número par! Encerrando programa...\n");

    // TESTE COM FOR:

    int x, y;

        printf("Digite um número para calcular a tabuada: ");
        scanf("%d", &y);

    for (x = 0; x <= 10; x++)
    {
        printf("[%d] x [%d] é: %d\n", y, x, y * x);
    }

    return 0;
}