
#include <stdio.h>

int main()
{
    // Declaração das variáveis das Carta 1 e 2 - Desafio Novato.
    char pais1[50], pais2[50];
    unsigned int populacao1, populacao2;
    float area_pais1, area_pais2;
    float PIB1, PIB2;
    int numero_pontos_turisticos1, numero_pontos_turisticos2;
    int trunfo1, trunfo2, trunfo3;
    char *turno1, *turno2, *turno3;
    int contador = 0;

    printf("======================SUPER TRUNFO: PAÍSES======================\n");

    // Requisição das informações da carta 1 feitas ao usuário.
    printf("Informe o nome do País 1: ");
    scanf("%s", pais1);

    printf("Informe a população do País 1: ");
    scanf("%u", &populacao1);

    printf("Informe a área do País 1 (Km²): ");
    scanf("%f", &area_pais1);

    printf("Informe o PIB do País 1 (Bilhões): ");
    scanf("%f", &PIB1);

    printf("Informe o número de pontos turísticos do País 1: ");
    scanf("%d", &numero_pontos_turisticos1);

    // Requisição das informações da carta 2 feitas ao usuário.
    printf("\nInforme o nome do País 2: ");
    scanf("%s", pais2);

    printf("Informe a população do País 2: ");
    scanf("%u", &populacao2);

    printf("Informe a área do País 2(Km²): ");
    scanf("%f", &area_pais2);

    printf("Informe o PIB do País 2 (Bilhões): ");
    scanf("%f", &PIB2);

    printf("Informe o número de pontos turísticos do País 2: ");
    scanf("%d", &numero_pontos_turisticos2);

    // Cálculo das variáveis - Desafio Intermediário.
    float densidade_populacional1 = (float)populacao1 / area_pais1;
    float PIB_per_capita1 = (PIB1 * 10000000) / (float)populacao1;

    float densidade_populacional2 = (float)populacao2 / area_pais2;
    float PIB_per_capita2 = (PIB2 * 10000000) / (float)populacao2;

    // Inverso da densidade populacional - Desafio Mestre.
    float densidade_populacional_invertida1 = area_pais1 / (float)populacao1;
    float densidade_populacional_invertida2 = area_pais2 / (float)populacao2;

    // Cálculo da variável de super poder - Desafio mestre.
    float super_poder1 = ((float)populacao1 + area_pais1 + PIB1 + numero_pontos_turisticos1 + PIB_per_capita1 + densidade_populacional_invertida1);
    float super_poder2 = ((float)populacao2 + area_pais2 + PIB2 + numero_pontos_turisticos2 + PIB_per_capita2 + densidade_populacional_invertida2);

    printf("\nAgora escolha um atributo: \n");
    printf("1. População\n");
    printf("2. Área do País\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super Trunfo\n");
    scanf("%d", &trunfo1);

    switch (trunfo1)
    {
    case 1:
        // Comparando População
        turno1 = populacao1 > populacao2 ? (contador++, "A população do País do jogador é maior que a do País do computador\n") : "A população do País do computador é maior que a população do País do jogador\n";
        printf("%s", turno1);
        break;
    case 2:
        // Comparando a área do pais
        turno1 = area_pais1 > area_pais2 ? (contador++, "A área do País do jogador é maior que a área do País do computador\n") : "A área do País do computador é maior que a área do País do jogador\n";
        printf("%s", turno1);
        break;
    case 3:
        // Comparando o PIB do pais
        turno1 = PIB1 > PIB2 ? (contador++, "O PIB do País do jogador é maior que o PIB do País do computador\n") : "O PIB do País do computador é maior que o PIB do País do jogador\n";
        printf("%s", turno1);
        break;
    case 4:
        // Comparando o número de pontos turísticos
        turno1 = numero_pontos_turisticos1 > numero_pontos_turisticos2 ? (contador++, "O número de pontos turísticos do País do jogador é maior que o número de pontos turísticos do País do computador\n") : "O número de pontos turísticos do País do computador é maior que o número de pontos turísticos do País do jogador\n";
        printf("%s", turno1);
        break;
    case 5:
        // Comparando a densidade populacional
        turno1 = densidade_populacional1 > densidade_populacional2 ? (contador++, "A densidade populacional do País do jogador é maior que a densidade populacional do País do computador\n") : "A densidade populacional do País do computador é maior que a densidade populacional do País do jogador\n";
        printf("%s", turno1);
        break;
    case 6:
        // Comparando o PIB per capita
        turno1 = PIB_per_capita1 > PIB_per_capita2 ? (contador++, "O PIB per capita do País do jogador é maior que o PIB per capita do País do computador\n") : "O PIB per capita do País do computador é maior que o PIB per capita do País do jogador\n";
        printf("%s", turno1);
        break;
    case 7:
        // Comparando o super poder
        turno1 = super_poder1 > super_poder2 ? (contador++, "O super poder do jogador é maior que o super poder do computador\n") : "O super poder do computador é maior que o super poder do jogador\n";
        printf("%s", turno1);
        break;
    default:
        printf("OPÇÃO INVÁLIDA!\n");
        break;
    }

    printf("\nAgora escolha um novo atributo: \n");
    printf("1. População\n");
    printf("2. Área do País\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super Trunfo\n");
    scanf("%d", &trunfo2);

    if (trunfo1 != trunfo2)
    {
        switch (trunfo2)
        {
        case 1:
            // Comparando População
            turno2 = populacao1 > populacao2 ? (contador++, "A população do País do jogador é maior que a do País do computador\n") : "A população do País do computador é maior que a população do País do jogador\n";
            printf("%s", turno2);
            break;
        case 2:
            // Comparando a área do pais
            turno2 = area_pais1 > area_pais2 ? (contador++, "A área do País do jogador é maior que a área do País do computador\n") : "A área do País do computador é maior que a área do País do jogador\n";
            printf("%s", turno2);
            break;
        case 3:
            // Comparando o PIB do pais
            turno2 = PIB1 > PIB2 ? (contador++, "O PIB do País do jogador é maior que o PIB do País do computador\n") : "O PIB do País do computador é maior que o PIB do País do jogador\n";
            printf("%s", turno2);
            break;
        case 4:
            // Comparando o número de pontos turísticos
            turno2 = numero_pontos_turisticos1 > numero_pontos_turisticos2 ? (contador++, "O número de pontos turísticos do País do jogador é maior que o número de pontos turísticos do País do computador\n") : "O número de pontos turísticos do País do computador é maior que o número de pontos turísticos do País do jogador\n";
            printf("%s", turno2);
            break;
        case 5:
            // Comparando a densidade populacional
            turno2 = densidade_populacional1 > densidade_populacional2 ? (contador++, "A densidade populacional do País do jogador é maior que a densidade populacional do País do computador\n") : "A densidade populacional do País computador é maior que a densidade populacional do País do jogador\n";
            printf("%s", turno2);
            break;
        case 6:
            // Comparando o PIB per capita
            turno2 = PIB_per_capita1 > PIB_per_capita2 ? (contador++, "O PIB per capita do País do jogador é maior que o PIB per capita do País do computador\n") : "O PIB per capita do País do computador é maior que o PIB per capita do País do jogador\n";
            printf("%s", turno2);
            break;
        case 7:
            // Comparando o super poder
            turno2 = super_poder1 > super_poder2 ? (contador++, "O super poder do jogador é maior que o super poder do computador\n") : "O super poder do computador é maior que o super poder do jogador\n";
            printf("%s", turno2);
            break;
        default:
            printf("OPÇÃO INVÁLIDA!\n");
            break;
        }
    }
    else
    {
        printf("Você já escolheu esse trunfo antes!");
    }

    printf("\nAgora escolha um novo atributo: \n");
    printf("1. População\n");
    printf("2. Área do País\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super Trunfo\n");
    scanf("%d", &trunfo3);

    if (trunfo1 != trunfo2 && trunfo1 != trunfo3 && trunfo2 != trunfo3)
    {
        switch (trunfo3)
        {
        case 1:
            // Comparando População
            turno3 = populacao1 > populacao2 ? (contador++, "A população do País do jogador é maior que a do País do computador\n") : "A população do País do computador é maior que a população do País do jogador\n";
            printf("%s", turno3);
            break;
        case 2:
            // Comparando a área do pais
            turno3 = area_pais1 > area_pais2 ? (contador++, "A área do País do jogador é maior que a área do País do computador\n") : "A área do País do computador é maior que a área do País do jogador\n";
            printf("%s", turno3);
            break;
        case 3:
            // Comparando o PIB do pais
            turno3 = PIB1 > PIB2 ? (contador++, "O PIB do País do jogador é maior que o PIB do País do computador\n") : "O PIB do País do computador é maior que o PIB do País do jogador\n";
            printf("%s", turno3);
            break;
        case 4:
            // Comparando o número de pontos turísticos
            turno3 = numero_pontos_turisticos1 > numero_pontos_turisticos2 ? (contador++, "O número de pontos turísticos do País do jogador é maior que o número de pontos turísticos do País do computador\n") : "O número de pontos turísticos do País do computador é maior que o número de pontos turísticos do País do jogador\n";
            printf("%s", turno3);
            break;
        case 5:
            // Comparando a densidade populacional
            turno3 = densidade_populacional1 > densidade_populacional2 ? (contador++, "A densidade populacional do País do jogador é maior que a densidade populacional do País do computador\n") : "A densidade populacional do País do computador é maior que a densidade populacional do País do jogador\n";
            printf("%s", turno3);
            break;
        case 6:
            // Comparando o PIB per capita
            turno3 = PIB_per_capita1 > PIB_per_capita2 ? (contador++, "O PIB per capita do País do jogador é maior que o PIB per capita do País do computador\n") : "O PIB per capita do País do computador é maior que o PIB per capita do País do jogador\n";
            printf("%s", turno3);
            break;
        case 7:
            // Comparando o super poder
            turno3 = super_poder1 > super_poder2 ? (contador++, "O super poder do jogador é maior que o super poder do computador\n") : "O super poder do computador é maior que o super poder do jogador\n";
            printf("%s", turno3);
            break;
        default:
            printf("OPÇÃO INVÁLIDA!\n");
            break;
        }
    }
    else
    {
        printf("Você já escolheu esse trunfo antes\n!");
    }

    if (contador >= 2)
    {
        printf("Parabéns jogador, Voce venceu %d rodadas!\n", contador);
    }
    else if (contador == 1)
    {
        printf("Que pena jogador, Voce venceu apenas %d rodada!\n", contador);
    }
    else
    {
        printf("Que pena jogador, Você não venceu nenhuma rodada!\n");
    }
}