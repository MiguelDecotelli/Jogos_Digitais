#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int escolhaJogador, escolhaComputador;
    srand(time(0));

    printf("=====================Jogo de Jokenpô==========================\n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1;

    if (escolhaComputador == 1)
    {
        switch (escolhaJogador)
        {
        case 1:
            printf("JOGADOR: PEDRA - COMPUTADOR: PEDRA\n");
            printf("EMPATE!\n");
            break;

        case 2:
            printf("JOGADOR: PAPEL - COMPUTADOR: PEDRA\n");
            printf("VOCÊ GANHOU!\n");
            break;

        case 3:
            printf("JOGADOR: TESOURA - COMPUTADOR: PEDRA\n");
            printf("VOCÊ PERDEU!\n");
            break;

        default:
            printf("OPÇÃO INVÁLIDA\n");
            break;
        }
    }
    else if (escolhaComputador == 2)
    {
        switch (escolhaJogador)
        {
        case 1:
            printf("JOGADOR: PEDRA - COMPUTADOR: PAPEL\n");
            printf("VOCÊ PERDEU!\n");
            break;

        case 2:
            printf("JOGADOR: PAPEL - COMPUTADOR: PAPEL\n");
            printf("EMPATE!\n");
            break;

        case 3:
            printf("JOGADOR: TESOURA - COMPUTADOR: PAPEL\n");
            printf("VOCÊ GANHOU!\n");
            break;

        default:
            printf("OPÇÃO INVÁLIDA\n");
            break;
        }
    }
    else if (escolhaComputador == 3)
    {
        switch (escolhaJogador)
        {
        case 1:
            printf("JOGADOR: PEDRA - COMPUTADOR: TESOURA\n");
            printf("VOCÊ GANHOU!\n");
            break;

        case 2:
            printf("JOGADOR: PAPEL - COMPUTADOR: TESOURA\n");
            printf("VOCÊ PERDEU!\n");
            break;

        case 3:
            printf("JOGADOR: TESOURA - COMPUTADOR: TESOURA\n");
            printf("EMPATE!\n");
            break;

        default:
            printf("OPÇÃO INVÁLIDA\n");
            break;
        }
    }
    else
    {
        printf("OPÇÃO INVÁLIDA\n");
    }

    return 0;
}