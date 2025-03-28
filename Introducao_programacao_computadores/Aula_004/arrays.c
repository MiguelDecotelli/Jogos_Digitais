#include <stdio.h>

int main()
{

    printf("Array de notas:\n");
    float notas[3] = {85.0, 90.0, 73.0};

    printf("Nota do aluno 1 é: %.1f.\n", notas[0]);
    printf("Nota do aluno 2 é: %.1f.\n", notas[1]);
    printf("Nota do aluno 3 é: %.1f.\n", notas[2]);


    printf("\nArray de Letras:\n");
    char letras[4] = {'A', 'B', 'C', 'D'};  // Array de caracteres
 
    printf("Primeira letra: %c\n", letras[0]);
    printf("Segunda letra: %c\n", letras[1]);
    printf("Terceira letra: %c\n", letras[2]);
    printf("Quarta letra: %c\n", letras[3]);

    
    printf("\nArray de Nomes com estrutura de repetição:\n");
    char *nomes[] = {"Alice", "Bob", "Carol"};
    int i;
    for(i = 0; i < 3; i++) {
        printf("%s\n", nomes[i]);
    }

    return 0;
}