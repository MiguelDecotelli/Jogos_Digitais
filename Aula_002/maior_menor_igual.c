#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    printf("================================== MAIOR MENOR OU IGUAL ==================================\n");

    int numeroJogador, numeroComputador, tipoComparacao;
    char *resultado;

    // GERAR NÚMERO ALEATÓRIO
    srand(time(0));
    numeroComputador = rand() % 100 + 1; // Número entre 1 e 100

    printf("Escolha uma opção: \n");
    printf("1. Maior\n");
    printf("2. Menor\n");
    printf("3. Igual\n");
    scanf("%d", &tipoComparacao);

    printf("Digite um número de 1 a 100: ");
    scanf("%d", &numeroJogador);

    printf("O número do computador é: %d e o número do jogador é %d\n", numeroComputador, numeroJogador);

    switch (tipoComparacao)
    {
    case 1:
        resultado = numeroJogador > numeroComputador ? "Parabens você ganhou!\n" : "Mais sorte da próxima vez!\n";
        break;
    case 2:
        resultado = numeroJogador < numeroComputador ? "Parabens você ganhou!\n" : "Mais sorte da próxima vez!\n";
        break;
    case 3:
        resultado = numeroJogador == numeroComputador ? "Parabens você ganhou!\n" : "Mais sorte da próxima vez!\n";
        break;

    default:
        printf("Opção inválida!");
        break;
    }

    printf("%s", resultado);
    return 0;
}