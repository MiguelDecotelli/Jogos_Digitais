#include <stdio.h>

int main()
{

    float temperatura, umidade;
    unsigned int reservatorio, reservatorio_minimo = 100;

    printf("Informe a temperatura: ");
    scanf("%f", &temperatura);
    printf("Informe a umidade: ");
    scanf("%f", &umidade);
    printf("Informe o reservatorio: ");
    scanf("%u", &reservatorio);

    if (temperatura >= 30)
    {
        printf("\nTemperatura atual está elevada.");
    }
    else
    {
        printf("\nTemperatura atual está dentro dos valores aceitáveis.");
    }

    if (umidade >= 50)
    {
        printf("\nUmidade relativa do ar está elevada.");
    }
    else
    {
        printf("\nUmidade atual está dentro dos valores aceitáveis.");
    }

        if (reservatorio < reservatorio_minimo)
    {
        printf("\nReservatório de água está abaixo do nível mínimo\n.");
    }
    else
    {
        printf("\nReservatório de água com níveis satisfatórios\n.");
    }
}