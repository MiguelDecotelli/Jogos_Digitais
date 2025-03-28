#include <stdio.h>

int menu()
{
    printf("\n========================================= BATALHA NAVAL =========================================\n");

    // Criação de um Menu para escolha da habilidade especial.
    int habilidade;
    printf("Escolha uma habilidade de ataque:\n");
    printf("1. Cone:\n");
    printf("2. Cruz:\n");
    printf("3. Octaedro:\n");
    scanf("%d", &habilidade);

    return habilidade; //Armazenamento da variável habilidade, para envio à outra função e utilização posterior.
}

// Função para inicializar o tabuleiro.
void iniciarTabuleiro(int tabuleiro[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0; //Definição dos valores do tabuleiro como sendo 0.
        }
    }
}

// Função para exibir o tabuleiro.
void exibirTabuleiro(int tabuleiro[10][10])
{
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    printf("   ");
    for (int i = 0; i <= 10; i++)
    {
        printf("%c ", linha[i]);
    }
    printf("\n");

    // Loop que itera sobre toda a matriz. 
    for (int i = 0; i < 10; i++)
    {
        if (i == 9) //Ajuste da linha de valor 10, para que a matriz seja exibida de forma simétrica.
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

// Função para escolha e exibição das habilidades especiais.
void habilidades(int tabuleiro[10][10], int habilidade)
{
    int linhaInicio, colunaInicio;
    printf("Informe a linha de Início da habilidade: ");
    scanf("%d", &linhaInicio);
    printf("Informe a coluna de Início da habilidade: ");
    scanf("%d", &colunaInicio);

    // Estrutura condicional Switch que possibilita as escolhas das habilidades.
    switch (habilidade)
    {
    case 1:
    // Condicionais IF-ELSE para impedir o poscionamento das habilidades fora dos limites do tabuleiro.
        if (linhaInicio < 2)
        {
            linhaInicio = 2;
        }
        else
        {
            linhaInicio = linhaInicio;
        }
        if (colunaInicio < 2)
        {
            colunaInicio = 2;
        }
        else
        {
            colunaInicio = colunaInicio;
        }
        if (colunaInicio > 5)
        {
            colunaInicio = 5;
        }
        else
        {
            colunaInicio = colunaInicio;
        }
        // Cálculo dinâmico das variáveis usando loop for.
        for (int i = colunaInicio; i < (colunaInicio + 5); i++)
        {
            tabuleiro[linhaInicio][i] = 4;
        }
        for (int j = colunaInicio + 1; j < (colunaInicio + 4); j++)
        {
            tabuleiro[linhaInicio - 1][j] = 4;
        }
        for (int k = colunaInicio + 2; k < colunaInicio + 3; k++)
        {
            tabuleiro[linhaInicio - 2][k] = 4;
        }
        break;

    case 2:
        if (linhaInicio == 0)
        {
            linhaInicio = 1;
        }
        else
        {
            linhaInicio = linhaInicio;
        }
        if (linhaInicio > 8)
        {
            linhaInicio = 8;
        }
        else
        {
            linhaInicio = linhaInicio;
        }
        if (colunaInicio > 5)
        {
            colunaInicio = 5;
        }
        else
        {
            colunaInicio = colunaInicio;
        }

        for (int i = (linhaInicio - 1); i < (linhaInicio + 2); i++)
        {
            tabuleiro[i][colunaInicio + 2] = 5;
        }
        for (int j = colunaInicio; j < (colunaInicio + 5); j++)
        {
            tabuleiro[linhaInicio][j] = 5;
        }
        break;

    case 3:

        if (linhaInicio == 0)
        {
            linhaInicio = 1;
        }
        else
        {
            linhaInicio = linhaInicio;
        }
        if (linhaInicio > 8)
        {
            linhaInicio = 8;
        }
        else
        {
            linhaInicio = linhaInicio;
        }
        if (colunaInicio > 8)
        {
            colunaInicio = 8;
        }
        else
        {
            colunaInicio = colunaInicio;
        }

        if (colunaInicio == 0)
        {
            colunaInicio = 1;
        }
        else
        {
            colunaInicio = colunaInicio;
        }
        for (int i = (linhaInicio - 1); i < (linhaInicio + 2); i++)
        {
            tabuleiro[i][colunaInicio] = 8;
        }
        for (int j = colunaInicio - 1; j < (colunaInicio + 2); j++)
        {
            tabuleiro[linhaInicio][j] = 8;
        }
        break;

    default:
        printf("Você não digitou uma opção válida \n");
        break;
    }
}

// Função criada para o nivel aventureiro do desafio - Definir as posições dos navios.
void posicionarNavios(int tabuleiro[10][10], int linhaInicio, int colunaInicio, int tamanhoNavio, char orientacao)
{
    // Aqui é possivel escolher a posição em que cada navio será posicionado de acordo com o eixo.
    if (orientacao == 'H' || orientacao == 'h') // Horizontal.
    {

        for (int j = colunaInicio; j < (colunaInicio + tamanhoNavio); j++) // Cálculo dinânico da coluna de inicio do navio de acordo com o seu tamanho.
        {
            tabuleiro[linhaInicio][j] = 3; //Exibição do navio no tabuleiro.
        }
    }
    else if (orientacao == 'V' || orientacao == 'v') // Vertical.
    {
        for (int i = linhaInicio; i < linhaInicio + tamanhoNavio; i++)
        {
            tabuleiro[i][colunaInicio] = 3;
        }
    }
    else if (orientacao == 'D' || orientacao == 'd') // Diagonal Direita.
    {
        int i = linhaInicio;
        int j = colunaInicio;

        for (int k = 0; k < tamanhoNavio; k++)
        {
            tabuleiro[i][j] = 3;
            i++;
            j++;
        }
    }
    else if (orientacao == 'E' || orientacao == 'e') // Diagonal Esquerda.
    {
        int i = linhaInicio;
        int j = colunaInicio;

        for (int k = 0; k < tamanhoNavio; k++)
        {
            tabuleiro[i][j] = 3;
            i++;
            j--;
        }
    }
}

int main()
{
    int tabuleiro[10][10];
    iniciarTabuleiro(tabuleiro);
    habilidades(tabuleiro, menu());

    // posicionarNavios(tabuleiro, 2, 2, 3, 'H');
    // posicionarNavios(tabuleiro, 2, 7, 3, 'V');
    // posicionarNavios(tabuleiro, 2, 2, 3, 'D');
    // posicionarNavios(tabuleiro, 4, 8, 5, 'E');

    exibirTabuleiro(tabuleiro);

    return 0;
}
