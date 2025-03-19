#include <stdio.h>

int main()
{
    printf("========================PROBLEMA 01========================\n");

    unsigned int idade;
    float renda;

    printf("Informe a sua idade: ");
    scanf("%u", &idade);
    printf("Informe a sua renda: ");
    scanf("%f", &renda);

    if (idade > 60 || idade < 18)
    {
        if (renda < 2000)
        {
            printf("Você está qualificado para um desconto especial\n");
        }
        else
        {
            printf("O valor da sua renda não lhe dá acesso ao desconto especial\n");
        }
    }
    else
    {
        printf("Sua idade não é contemplada pelo desconto especial.\n");
    }

    printf("\n========================PROBLEMA 02========================\n");

    unsigned int dependentes;

    printf("Informe o número de dependentes: ");
    scanf("%u", &dependentes);

    if (idade > 18 && idade < 65)
    {
        if (renda < 3000)
        {
            if (dependentes > 2)
            {
                printf("Você está qualificado para um desconto especial\n");
            }
            else
            {
                printf("Você não possui o número de dependentes necessários\n");
            }
        }
        else
        {
            printf("O valor da sua renda não lhe dá acesso ao desconto especial\n");
        }
    }
    else
    {
        printf("Sua idade não é contemplada pelo desconto especial.\n");
    }

    printf("\n========================PROBLEMA 03========================\n");

    int opcao;

    printf("Escolha uma opção:\n");
    printf("1. Verificar saldo\n");
    printf("2. Fazer depósito\n");
    printf("3. Fazer saque\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Saldo atual: R$ 100.000,00\n");
        break;
    case 2:
        printf("Depósito realizado com sucesso\n");
        break;
    case 3:
        printf("Saque realizado com sucesso\n");
        break;
    default:
        printf("Opção inválida\n");
    }

    return 0;
}