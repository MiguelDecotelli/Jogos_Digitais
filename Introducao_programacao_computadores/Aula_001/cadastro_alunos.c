
#include <stdio.h>

int main()
{

    char nome[50];
    int idade;
    double matricula;

    printf("Nome do aluno: ");
    scanf("%s", nome);

    printf("Idade do aluno: ");
    scanf("%d", &idade);

    printf("Matrícula do aluno: ");
    scanf("%lf", &matricula);

    float nota1;
    float nota2;
    float nota3;

    printf("Primeira nota do aluno: ");
    scanf("%f", &nota1);
    printf("Segunda nota do aluno: ");
    scanf("%f", &nota2);
    printf("Terceira nota do aluno: ");
    scanf("%f", &nota3);

    float media_notas = (nota1 + nota2 + nota3) / 3;
    printf("A média das notas do aluno %s é %.2f", nome, media_notas);

    // int count = 0

    // while (count < 3);
    // {
    //     printf("Nota do aluno: ");
    //     scanf("%f", nota);
        
    // float soma = nota
    // }
    


return 0;
}