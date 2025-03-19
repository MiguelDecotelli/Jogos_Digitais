#include <stdio.h>

int main()
{
    int x = 5;
    int y = 10;

    if (x > 0 && y > 0)
    {
        printf("Ambos os números são positivos\n");
    }

    int x = 5;
    int y = -10;

    if (x > 0 || y > 0)
    {
        printf("Pelo menos um dos números é positivo\n");
    }

    int x = -5;

    if (!(x > 0))
    {
        printf("X não é um número positivo\n");
    }

    int x = 5;
    int y = -10;
    int z = 0;

    if (x > 0 && y < 0 || z == 0)
    {
        printf("A condição é verdadeira\n");
    }
    else
    {
        printf("A condição é falsa\n");
    }

    int idade = 20;
    float altura = 1.75;

    if (idade >= 18 && idade <= 30 && altura > 1.70)
    {
        printf("Você está na faixa etária esperada e tem a altura adequada.\n");
    }
    else
    {
        printf("Você não atende aos critérios especificados acima.\n");
    }

    float temperatura = 25.0;
    float umidade = 55.0;

    if (temperatura >= 20 && temperatura <=30 && umidade > 50)
    {
        printf("As condições climáticas estão favoráveis");
    } else {
        printf("As condições climáticas estão desfavoráveis");
    }
    

    return 0;
}