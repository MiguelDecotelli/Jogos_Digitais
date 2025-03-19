
#include <stdio.h>

int main()
{
       // Decalração das variáveis das Carta 1 e 2 - Desafio Novato.
       char estado1, estado2;
       char codigo_carta1[3], codigo_carta2[3];
       char cidade1[50], cidade2[20];
       unsigned int populacao1, populacao2;
       float area_estado1, area_estado2;
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

       printf("Informe a área do Estado 1 (Km²): ");
       scanf("%f", &area_estado1);

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

       printf("Informe a área do Estado 2(Km²): ");
       scanf("%f", &area_estado2);

       printf("Informe o PIB da cidade 2 (Bilhões): ");
       scanf("%f", &PIB2);

       printf("Informe o número de pontos turísticos da cidade 2: ");
       scanf("%d", &numero_pontos_turisticos2);

       // Cálculo das variáveis - Desafio Intermediário.
       float densidade_populacional1 = (float)populacao1 / area_estado1;
       float PIB_per_capita1 = (PIB1 * 10000000) / (float)populacao1;

       float densidade_populacional2 = (float)populacao2 / area_estado2;
       float PIB_per_capita2 = (PIB2 * 10000000) / (float)populacao2;

       // Inverso da densidade populacional - Desafio Mestre.
       float densidade_populacional_invertida1 = area_estado1 / (float)populacao1;
       float densidade_populacional_invertida2 = area_estado2 / (float)populacao2;

       // Cálculo da variável de super poder - Desafio mestre.
       float super_poder1 = ((float)populacao1 + area_estado1 + PIB1 + numero_pontos_turisticos1 + PIB_per_capita1 + densidade_populacional_invertida1);
       float super_poder2 = ((float)populacao2 + area_estado2 + PIB2 + numero_pontos_turisticos2 + PIB_per_capita2 + densidade_populacional_invertida2);

       // Comparação de poderes das cartas - Desafio Mestre.
       unsigned int populacao =  populacao1 > populacao2;
       int area = (int) (area_estado1 > area_estado2);
       int PIB = (int) (PIB1 > PIB2);
       int pontos_turisticos = numero_pontos_turisticos1 > numero_pontos_turisticos2;
       int densidade_populacional = (int) (densidade_populacional1 > densidade_populacional2);
       int PIB_per_capita = (int) (PIB_per_capita1 > PIB_per_capita2);
       unsigned int super_poder = (int) (super_poder1 > super_poder2);

       // Exibição dos resultados - Desafio Mestre
       printf("\n=====COMPARAÇÃO DAS CARTAS=====\n");
       printf("População: Carta 1 venceu (%u).\n", populacao);
       printf("Área: Carta 1 venceu (%d).\n", area);
       printf("PIB: Carta 1 venceu (%d).\n", PIB);
       printf("Pontos Turísticos: Carta 1 venceu (%d).\n", pontos_turisticos);
       printf("Densidade Populacional: Carta 1 venceu (%d).\n", densidade_populacional);
       printf("PIB per Capita: Carta 1 venceu (%d).\n", PIB_per_capita);
       printf("Super Poder: Carta 1 venceu (%d).\n", super_poder);
       
       return 0;
}