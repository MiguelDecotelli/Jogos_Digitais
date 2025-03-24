#include <stdio.h>

void recursive(int number)
{
    if (number > 0)
    {
        printf("%d \n", number);
        recursive(number - 2);
    }
}

int main()
{
    int amount;
    printf("Qual a quantidade de vezes da contagem regressiva? ");
    scanf("%d", &amount);
    printf("Contagem regressiva... \n");
    recursive(amount);

    return 0;
}
