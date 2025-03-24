#include <stdio.h>

void printMessage()
{
    printf("Hello, World\n");
}

void recursiveLoop(int n)
{
    if (n > 0)
    {
        printf("%d", n);
        recursiveLoop(n - 1);
    }
}

void recursive(int number){
    if (number>0)
    {
        printf("%d \n", number);

        recursive(number - 1);
    }
    
}

int main()
{
    printMessage();
    int numero = 5;
    printf("Contagem regressiva: ");
    recursiveLoop(numero);

    int amount = 10;

    recursive(amount);

    return 0;
}