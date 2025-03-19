#include <stdio.h>

int main()
{
    int x = 1;

    printf("Valor inicial do número x: %d\n", x);

    x++;
    // x += 1
    // x = x + 1
    printf("Operador Incremento: %d\n", x);
    
    x--;
    // x -= 1
    // x = x - 1
    printf("Operador Decremento: %d\n", x);


    int y = x++;
    // y = x;
    // x++;
    printf("Operador Pós-incremento: x = %d e y = %d\n", x, y);

    y = ++x;
    // y = x;
    printf("Operador Pré-incremento: x = %d e y = %d\n", x, y);

    y = x--;
    // y = x;
    // x++;
    printf("Operador Pós-decremento: x = %d e y = %d\n", x, y);

    y = --x;
    // y = x;
    printf("Operador Pré-decremento: x = %d e y = %d\n", x, y);

}