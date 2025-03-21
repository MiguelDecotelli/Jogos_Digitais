#include <stdio.h>

int main()
{

    // Movimento das peças de Xadrez - Desafio Novato.

    // Declaração das variáveis.
    int bispo = 0, rainha = 0, torre = 0;
    char escolha;

    // Exibição do menu interativo - Escolha da peça.
    printf("==========================JOGO DE XADREZ==========================\n\n");
    printf("Qual peça você deseja mover?\n");
    printf("[B]ispo.\n");
    printf("[R]ainha.\n");
    printf("[T]orre.\n");
    scanf("%c", &escolha);

    // Uso do switch para definição da peça a ser movimentada
    switch (escolha)
    {
    case 'B':
    case 'b':
        //Utilização da estrutura de repetição WHILE para exibição dos movimentos do Bispo.
        while (bispo < 5) // Utilização da estrutura de repetição while
        {
            printf("Movendo o Bispo para cima e direita...\n");
            bispo++;
        }
        break;

    case 'R':
    case 'r':
        // Utilização da estrutura de repetição FOR para exibição dos movimentos da Rainha.
        for (rainha; rainha < 8; rainha++) 
        {
            printf("Movendo a Rainha para esquerda...\n");
        }
        break;

    case 'T':
    case 't':
        // Utilização da estrutura de repetição DO WHILE para exibição dos movimentos da Torre.
        do
        {
            printf("Movendo a Torre para direita...\n");
            torre++;
            
        } while (torre < 5);

        break;

    default:
        printf("Você não digitou uma opção válida.\n");
        break;
    }
}