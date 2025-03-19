#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    printf("===========================================EXERCÍCIO 01===========================================");
    int option;
    int numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        srand((time(0)));
        numeroSecreto = rand() % 10;
        printf("Digite um número de 0 a 9: ");
        scanf("%d", &palpite);
        if (numeroSecreto == palpite)
        {
            printf("Parabéns, você acertou o número secreto");
        } else {
            printf("Você errou!");
        }

    printf("numero secreto = %d\n", numeroSecreto); 
    case 2:
        printf("Exibindo as regras do jogo...\n");
        break;
    case 3:
        printf("Saindo do jogo...\n");
        break;

    default:
        printf("opção inválida!\n");
        break;
    }

    return 0;
}