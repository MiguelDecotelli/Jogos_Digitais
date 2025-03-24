#include <stdio.h>

// Movimento das peças de Xadrez - Desafio Mestre.

// Criação das funções vazias para definir os movimentos do Bispo, da Rainha e da Torre.
void bispo(int movimentos)
{
    // Limitando o número de movimentos de acordo com o tamanho do tabuleiro
    if (movimentos > 0 && movimentos < 7)
    {
        printf("Movendo o Bispo para cima e direita...\n");
        bispo(movimentos - 1);
        return;
    }
    else
    {
        printf("Você digitou um número inválido de movimentos.\n");
    }
}

void rainha(int movimentos)
{
    // Limitando o número de movimentos de acordo com o tamanho do tabuleiro
    if (movimentos > 0 && movimentos < 8)
    {
        printf("Movendo a Rainha para esquerda...\n");
        rainha(movimentos - 1);
        return;
    }
    else
    {
        printf("Você digitou um número inválido de movimentos.\n");
    }
}

void torre(int movimentos)
{
    // Limitando o número de movimentos de acordo com o tamanho do tabuleiro
    if (movimentos > 0 && movimentos < 8)
    {
        printf("Movendo a Torre para direita...\n");
        torre(movimentos - 1);
        return;
    }
    else
    {
        printf("Você digitou um número inválido de movimentos.\n");
    }
}

int main()
{

    // Declaração das variáveis.
    int casas;
    char escolha;

    // Exibição do menu interativo - Escolha da peça.
    printf("==========================JOGO DE XADREZ==========================\n\n");
    printf("Qual peça você deseja mover?\n");
    printf("[B]ispo.\n");
    printf("[C]avalo.\n");
    printf("[R]ainha.\n");
    printf("[T]orre.\n");
    scanf("%c", &escolha);

    // Uso do switch para definição da peça a ser movimentada
    switch (escolha)
    {
    case 'B':
    case 'b':
        // Utilização de recursividade para exibição dos movimentos do Bispo.
        printf("Quantas casas deseja mover o Bispo (Limite 7)? ");
        scanf("%d", &casas);
        bispo(casas);
        break;

    case 'C':
    case 'c':
        // Utilização da estrutura de repetição FOR para exibição dos movimentos do Cavalo.
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j <= 1; j++)
            {
                printf("Cavalo andou para cima...\n");
            }

            printf("Cavalo andou para direita...\n");
        }
        break;

    case 'R':
    case 'r':
        // Utilização de recursividade para exibição dos movimentos da Rainha.
        printf("Quantas casas deseja mover o Rainha (Limite 8)? ");
        scanf("%d", &casas);
        rainha(casas);
        break;

    case 'T':
    case 't':
        // Utilização de recursividade para exibição dos movimentos da Torre.
        printf("Quantas casas deseja mover a Torre (Limite 8)? ");
        scanf("%d", &casas);
        rainha(casas);
        break;

    default:
        printf("Você não digitou uma opção válida.\n");
        break;
    }
}