
#include <stdio.h>

int main()
{

    char estado1;
    char codigo_carta1[3];
    char cidade1[50];
    int populacao1;
    float area_estado1;
    float PIB1;
    int numero_pontos_turisticos1;

    printf("Informe a letra do Estado 1 (Entre A e H): ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta 1 (Entre 01 e 04): ");
    scanf("%s", codigo_carta1);

    printf("Informe o nome da cidade 1: ");
    scanf("%s", cidade1);

    printf("Informe a população da cidade 1: ");
    scanf("%d", &populacao1);

    printf("Informe a área do Estado 1: ");
    scanf("%f", &area_estado1);

    printf("Informe o PIB da cidade 1: ");
    scanf("%f", &PIB1);

    printf("Informe o número de pontos turísticos da cidade 1: ");
    scanf("%d", &numero_pontos_turisticos1);

    printf("\nCarta 1:\nEstado: %c\nCódigo: %c%s\n"
           "Nome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\n"
           "PIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d.\n",
           estado1, estado1, codigo_carta1, cidade1, populacao1,
           area_estado1, PIB1, numero_pontos_turisticos1);

    char estado2;
    char codigo_carta2[3];
    char cidade2[20];
    int populacao2;
    float area_estado2;
    float PIB2;
    int numero_pontos_turisticos2;

    printf("\nInforme a letra do Estado 2 (Entre A e H): ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta 2 (Entre 01 e 04): ");
    scanf("%s", codigo_carta2);

    printf("Informe o nome da cidade 2: ");
    scanf("%s", cidade2);

    printf("Informe a população da cidade 2: ");
    scanf("%d", &populacao2);

    printf("Informe a área do Estado 2: ");
    scanf("%f", &area_estado2);

    printf("Informe o PIB da cidade 2: ");
    scanf("%f", &PIB2);

    printf("Informe o número de pontos turísticos da cidade 2: ");
    scanf("%d", &numero_pontos_turisticos2);

    printf("\nCarta 2:\nEstado: %c\nCódigo: %c%s\n"
           "Nome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\n"
           "PIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d.\n\n",
           estado2, estado2, codigo_carta2, cidade2, populacao2,
           area_estado2, PIB2, numero_pontos_turisticos2);
           
    return 0;
}