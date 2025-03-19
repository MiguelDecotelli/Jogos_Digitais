#include <stdio.h>

int main()
{
    int idade;
    printf("Quanto anos você tem? ");
    scanf("%d", &idade);

    if (idade >= 16)
    {
        printf("\nVocê já pode votar!");
    }
    else
    {
        printf("\nVocê ainda não possui idade para votar.");
    }

    return 0;
}