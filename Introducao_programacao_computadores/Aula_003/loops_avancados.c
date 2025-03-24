#include <stdio.h>

int main()
{

    printf("========================= EXEMPLO 01 =========================\n");

    for (int i = 0, j = 10; i < j; i++, j--)
    {
        printf("i = %d, j = %d\n", i, j);
    }

    printf("========================= EXEMPLO 02 =========================\n");

    for (int k = 0, l = 10; k < 5 && l > 5; k++, l--)
    {
        printf("i = %d, j = %d\n", k, l);
    }

    printf("========================= EXEMPLO 03 =========================\n");

    for (
        int m = 0;
        m < 100;
        m += (m % 2 == 0) ? 1 : 2)
    {
        printf("%d\n", m);
    }

    printf("========================= EXEMPLO 03 =========================\n");

    for (int n = 0; n < 10; n++)
    {
        if (n == 5)
            continue; // Pula a iteração quando n é 5
        if (n == 8)
            break; // Sai do loop quando n é 8
        printf("%d ", n);
    }
    return 0;
}