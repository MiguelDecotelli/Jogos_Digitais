#include <stdio.h>

int main()
{

    int i, j, k, muro;

    int x, y;
    char letra;

    for (x = 0; x <= 8; x++)
    {
        letra = 'A';

        for (y = 1; y <= x; y++)
        {
            printf("%c", letra);
            letra++;
        }

        printf("\n");
    }

    printf("=========================================\n");
    printf("Qual o tamanho do muro? ");
    scanf("%d", &muro);

    for (i = 0; i < muro; i++)
    {
        for (k = 0; k < muro - i; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("#");
        }

        printf("#\n");
    }

    return 0;
}