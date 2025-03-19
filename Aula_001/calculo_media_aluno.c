#include <stdio.h>

int main(){

    // Receber 3 notas de um aluno e calcular a media.
    float nota1, nota2, nota3;

    printf("\n======CÁLCULO DE MÉDIA DO ALUNO=========\n");

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);

    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);

    float media = (nota1 + nota2 + nota3) / 3;

    printf("A média de notas do aluno é: %.2f\n", media);

    return 0;
}