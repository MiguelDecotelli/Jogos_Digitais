
#include <stdio.h>

int main()
{

    // Declaração das variáveis das Carta 1 e 2 - Desafio Novato.
    char estado1, estado2;
    char codigo_carta1[3], codigo_carta2[3];
    char cidade1[50], cidade2[20];
    unsigned int populacao1, populacao2;
    float area_cidade1, area_cidade2;
    float PIB1, PIB2;
    int numero_pontos_turisticos1, numero_pontos_turisticos2;

    // Requisição das informações da carta 1 feitas ao usuário.
    printf("Informe a letra do Estado 1 (Entre A e H): ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta 1 (Entre 01 e 04): ");
    scanf("%s", codigo_carta1);

    printf("Informe o nome da cidade 1: ");
    scanf("%s", cidade1);

    printf("Informe a população da cidade 1: ");
    scanf("%u", &populacao1);

    printf("Informe a área da Cidade 1 (Km²): ");
    scanf("%f", &area_cidade1);

    printf("Informe o PIB da cidade 1 (Bilhões): ");
    scanf("%f", &PIB1);

    printf("Informe o número de pontos turísticos da cidade 1: ");
    scanf("%d", &numero_pontos_turisticos1);

    // Requisição das informações da carta 2 feitas ao usuário.
    printf("\nInforme a letra do Estado 2 (Entre A e H): ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta 2 (Entre 01 e 04): ");
    scanf("%s", codigo_carta2);

    printf("Informe o nome da cidade 2: ");
    scanf("%s", cidade2);

    printf("Informe a população da cidade 2: ");
    scanf("%u", &populacao2);

    printf("Informe a área da Cidade 2(Km²): ");
    scanf("%f", &area_cidade2);

    printf("Informe o PIB da cidade 2 (Bilhões): ");
    scanf("%f", &PIB2);

    printf("Informe o número de pontos turísticos da cidade 2: ");
    scanf("%d", &numero_pontos_turisticos2);

    // Cálculo das variáveis - Desafio Intermediário.
    float densidade_populacional1 = (float)populacao1 / area_cidade1;
    float PIB_per_capita1 = (PIB1 * 10000000) / (float)populacao1;

    float densidade_populacional2 = (float)populacao2 / area_cidade2;
    float PIB_per_capita2 = (PIB2 * 10000000) / (float)populacao2;

    // Inverso da densidade populacional - Desafio Mestre.
    float densidade_populacional_invertida1 = area_cidade1 / (float)populacao1;
    float densidade_populacional_invertida2 = area_cidade2 / (float)populacao2;

    // Cálculo da variável de super poder - Desafio mestre.
    float super_poder1 = ((float)populacao1 + area_cidade1 + PIB1 + numero_pontos_turisticos1 + PIB_per_capita1 + densidade_populacional_invertida1);
    float super_poder2 = ((float)populacao2 + area_cidade2 + PIB2 + numero_pontos_turisticos2 + PIB_per_capita2 + densidade_populacional_invertida2);

    // Comparando População
    if (populacao1 > populacao2)
    {
        printf("A população da cidade de %s é maior que a cidade de %s: %u habitantes.\n", cidade1, cidade2, populacao1);
    }
    else
    {
        printf("A população da cidade de %s é maior que a cidade de %s: %u habitantes.\n", cidade2, cidade1, populacao2);
    }

    // Comparando a área do estado
    if (area_cidade1 > area_cidade2)
    {
        printf("A área da cidade de %s é maior que a da cidade de %s: %f km².\n", cidade1, cidade2, area_cidade1);
    }
    else
    {
        printf("A área da cidade de %s é maior que a da cidade de %s: %f km².\n", cidade2, cidade1, area_cidade2);
    }

    // Comparando o PIB do estado
    if (PIB1 > PIB2)
    {
        printf("O PIB da cidade de %s é maior que o da cidade de %s: %f bilhões.\n", cidade1, cidade2, PIB1);
    }
    else
    {
        printf("O PIB da cidade de %s é maior que o da cidade de %s: %f bilhões.\n", cidade2, cidade1, PIB2);
    }

    // Comparando o número de pontos turísticos
    if (numero_pontos_turisticos1 > numero_pontos_turisticos2)
    {
        printf("O número de pontos turísticos da cidade de %s é maior que a cidade de %s: %d pontos.\n", cidade1, cidade2, numero_pontos_turisticos1);
    }
    else
    {
        printf("O número de pontos turísticos da cidade de %s é maior que a cidade de %s: %d pontos.\n", cidade2, cidade1, numero_pontos_turisticos2);
    }

    // Comparando a densidade populacional
    if (densidade_populacional1 > densidade_populacional2)
    {
        printf("A densidade populacional da cidade de %s é maior que a cidade de %s: %u habitantes/km².\n", cidade1, cidade2, densidade_populacional1);
    }
    else
    {
        printf("A densidade populacional da cidade de %s é maior que a cidade de %s: %u habitantes/km².\n", cidade2, cidade1, densidade_populacional2);
    }

    // Comparando o PIB per capita
    if (PIB_per_capita1 > PIB_per_capita2)
    {
        printf("O PIB per capita de %s é maior que o PIB per capita de %s: R$ %f por habitante.\n", estado1, estado2, PIB_per_capita1);
    }
    else
    {
        printf("O PIB per capita de %s é maior que o PIB per capita de %s: R$ %f por habitante.\n", estado2, estado2, PIB_per_capita2);
    }

    // Comparando o super poder
    if (super_poder1 > super_poder2)
    {
        printf("O super poder da cidade de %s é maior que o da cidade de %s: %u.\n", cidade1, cidade2, super_poder1);
    }
    else
    {
        printf("O super poder da cidade de %s é maior que o da cidade de %s: %u.\n", cidade2, cidade1, super_poder2);
    }
}