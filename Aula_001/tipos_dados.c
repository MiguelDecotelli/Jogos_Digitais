#include <stdio.h>

int main()
{

    int x = 10;
    int y = 3;

    int soma = x + y;
    int diferenca = x - y;
    int produto = x * y;
    float quociente = x / y;
    float quociente_cast = (float)x / y;

    printf("Soma inteiros: 10 + 3 = %d\n", soma);
    printf("Diferença de inteiros: 10 - 3 = %d \n", diferenca);
    printf("Produto de inteiros: 10 * 3 = %d \n", produto);
    printf("Quociente de inteiros: 10 / 3 =  %.2f \n", quociente);
    printf("Quociente de numeros flutuantes(cast): 10 / 3 =  %.2f \n", quociente_cast);

    printf("Tamanho do int: %zu bytes\n", sizeof(int));
    printf("Tamanho do long int: %zu bytes\n", sizeof(long int));
    printf("Tamanho do long long int: %zu bytes\n", sizeof(long long int));
    printf("Tamanho do double: %zu bytes\n", sizeof(double));
    printf("Tamanho do long double: %zu bytes\n", sizeof(long double));

    double numeroPreciso = 3.141592653589793;
    long double numeroMuitoPreciso = 3.14159265358979323846;

    printf("Número preciso (double): %.15f\n", numeroPreciso);
    printf("Número muito preciso (long double): %.21Lf\n", numeroMuitoPreciso);

    return 0;
}
