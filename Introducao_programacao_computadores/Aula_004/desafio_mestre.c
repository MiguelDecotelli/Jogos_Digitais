#include <stdio.h>

#define LINHAS 5
#define COLUNAS 5

int main()
{

    int matriz[LINHAS][COLUNAS];
    int target = 9;
    int found = 0;
    int soma = 1;

    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            matriz[i][j] = soma;
            soma++;
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            if (matriz[i][j] == target)
            {
                printf("O Valor %d foi encontrado no índice (%d, %d)\n", target, i, j);
                found = 1;
                break;
            }
        }

        if (found)
            break;
        printf("\n");
    }

    if (!found)
    {
        printf("O elemento %d não foi encontrado na matriz\n", target);
    }

    return 0;
}