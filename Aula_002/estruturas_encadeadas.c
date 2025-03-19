#include <stdio.h>

int main()
{
    int idade;

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);

    if (idade < 12)
    {
        printf("Você é uma criança\n");
    }
    else if (idade >= 12 && idade < 18)
    {
        printf("Você é um adolescente\n");
    }
    else if (idade >= 18 && idade < 60)
    {
        printf("Você é um adulto\n");
    }
    else
    {
        printf("Você é um idoso\n");
    }

    float nota;

    printf("Informe a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 90)
    {
        printf("Conceito A!\n");
    }
    else if (nota >= 80 && nota < 90)
    {
        printf("Conceito B!\n");
    }
    else if (nota >= 70 && nota < 80)
    {
        printf("Conceito C!\n");
    }
    else if (nota >= 60 && nota < 70)
    {
        printf("Conceito D!\n");
    }
    else if (nota >= 50 && nota < 60)
    {
        printf("Conceito E!\n");
    }
    else
    {
        printf("Conceito F!\n");
    }

    float valor = 25000;

    if (valor >= 100000)
    {
        printf("Produto Luxo\n");
    }
    else if (valor >= 10000)
    {
        printf("Produto premium\n");
    }
    else if (valor > 10000)
    {
        printf("Produto Classic\n");
    }
    else
    {
        printf("Produto popular\n");
    }

    return 0;
}