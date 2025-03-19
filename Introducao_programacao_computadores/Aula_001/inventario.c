#include <stdio.h>

int main()
{

    char produtoA[30] = "iPhone";
    char produtoB[30] = "iPad";

    unsigned int estoqueA = 260;
    unsigned int estoqueB = 295;

    float valorA = 8499.00;
    float valorB = 4999.00;

    unsigned int estoqueMinimoA = 100;
    unsigned int estoqueMinimoB = 220;

    double valorTotalA, valorTotalB;

    int resultadoA, resultadoB;

    printf("O produto %s possui %u unidades em estoque e o seu valor unitário é R$ %.2f.\n", produtoA, estoqueA, valorA);
    printf("O produto %s possui %u unidades em estoque e o seu valor unitário é R$ %.2f.\n", produtoB, estoqueB, valorB);

    // Comparações com valor mínimo de estoque:
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque mínimo %d. \n", produtoA, resultadoA);
    printf("O produto %s tem estoque mínimo %d. \n", produtoB, resultadoB);

    // Comparações entre os valores totais dos produtos
    printf("Valor do estoque de %s é: R$ %.2f.\n", produtoA, (valorA * estoqueA));
    printf("Valor do estoque de %s é: R$ %.2f.\n", produtoB, (valorB * estoqueB));

    printf("O valor total de %s é maior que o valor total de %s -> %d.\n", produtoA, produtoB, (estoqueA * valorA) > (estoqueB * valorB));
    return 0;
}