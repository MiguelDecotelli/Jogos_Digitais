#include <stdio.h>

int main() {

    char nome[50];
    int idade;
    float altura;
    double peso;
    char sexo;

    printf("Qual o seu nome? ");
    scanf("%s", nome);
    printf("Qual a sua idade? ");
    scanf("%d", &idade);
    printf("Qual a sua altura? ");
    scanf("%f", &altura);
    printf("Qual o seu peso? ");
    scanf("%lf", &peso);

    // getchar();

    printf("Qual o seu sexo? ");
    scanf(" %c", &sexo);

    printf("Eu me chamo %s, tenho %d anos, %.2f de altura, peso %.1lf quilos e sou do sexo [%c]", nome, idade, altura, peso, sexo);


return 0;
     
}