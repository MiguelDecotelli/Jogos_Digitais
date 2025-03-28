#include <stdio.h>

void iniciarTabuleiro(int tabuleiro[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }
}

void exibirTabuleiro(int tabuleiro[10][10])
{
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    printf("   ");
    for (int i = 0; i <= 10; i++)
    {
        printf("%c ", linha[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        if (i == 9)
        {
            printf("%d ", i + 1);
        }
        else
        {
            printf(" %d ", i + 1);
        }

        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void posicionarNavios(int tabuleiro[10][10], int linhaInicio, int colunaInicio, int tamanhoNavio, char orientacao)
{

    if (orientacao == 'H' || orientacao == 'h')
    {

        for (int j = colunaInicio; j < (colunaInicio + tamanhoNavio); j++)
        {
            tabuleiro[linhaInicio][j] = 3;
        }
    }
    else if (orientacao == 'V' || orientacao == 'v')
    {
        for (int i = linhaInicio; i < linhaInicio + tamanhoNavio; i++)
        {
            tabuleiro[i][colunaInicio] = 3;
        }
    }
}

int main()
{
    printf("============================= BATALHA NAVAL =============================\n");

    int tabuleiro[10][10];

    iniciarTabuleiro(tabuleiro);

    posicionarNavios(tabuleiro, 2, 2, 3, 'H');
    posicionarNavios(tabuleiro, 2, 7, 3, 'V');

    exibirTabuleiro(tabuleiro);

    return 0;
}
