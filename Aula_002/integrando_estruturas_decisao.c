#include <stdio.h>

int main()
{

    int option;
    float nota1, nota2, media;

    // Exibição do menu
    printf("Menu de Gerenciamento de Estudantes\n");
    printf("1. Calcular Média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("1. Calcular Média\n");
        printf("Informe a nota 1: ");
        scanf("%f", &nota1);
        printf("Informe a nota 2: ");
        scanf("%f", &nota2);

        if ((nota1 >=0 && nota1 <= 10) && (nota2 >=0 && nota2 <= 10))
        {
            media = (nota1 + nota2) / 2;
            printf("A média é: %.2f\n", media);
        } else {
            printf("Entrada com valores errados.\n");
        }
        
        break;
    case 2:
        printf("2. Determinar Status\n");
        printf("Entrar com a média: ");
        scanf("%f", &media);
        // media >= 7 ? printf("Aprovado!\n") : printf("Reprovado!\n");

        if (media >= 7)
        {
            printf("Aprovado!\n");
        } else if (media >=5 && media < 7) {
            printf("Recuperação!\n");
        } else if (media < 5) {
            printf("Reprovado!");
        } else {
            printf("Entrada com valores errados.\n");
        }
        

        break;

    case 3:
        printf("3. Sair\n");
        break;

    default:
        printf("Opção inválida!\n");
        break;
    }

    return 0;
}