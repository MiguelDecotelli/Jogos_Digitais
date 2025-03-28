#include <stdio.h>

int main()
{

    // int matriz[3][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}};

    // // Acessando e imprimindo elementos específicos da matriz
    // printf("O elemento na posição [0][0] é %d\n", matriz[0][0]);
    // printf("O elemento na posição [1][1] é %d\n", matriz[1][1]);
    // printf("O elemento na posição [2][2] é %d\n", matriz[2][2]);

    int aux;
    int vet[8] = {5, 1, 4, 2, 7, 8, 3, 6};
    for (int i = 7; i > 4; i--)
    {
        aux = vet[7 - i];
        vet[7 - i] = vet[i];
        vet[i = aux];
    }

    printf("%d", vet[8]);
    return 0;
}