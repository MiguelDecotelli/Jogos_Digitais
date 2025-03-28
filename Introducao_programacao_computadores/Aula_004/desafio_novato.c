#include <stdio.h>

int main()
{

    int index;

    char *alunos[][3] = {
        {"Miguel", "Português: 88", "Matemática: 95"},
        {"Dênis", "Português: 68", "Matemática: 90"},
        {"Flávio", "Português: 73", "Matemática: 84"}};

    printf("Qual aluno você deseja ver as notas?\n");
    printf("1. Miguel\n");
    printf("2. Dênis\n");
    printf("3. Flávio\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &index);

    printf("As notas de %s são: %s e %s \n", alunos[index - 1][0], alunos[index - 1][1], alunos[index - 1][2]);

    return 0;
}