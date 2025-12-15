#include <stdio.h>

int main() {

    int idade;
    float altura;
    char letra;

    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    printf("Digite sua altura:\n");
    scanf("%f", &altura);

    printf("Digite a inicial do seu nome:\n");
    scanf(" %c", &letra);

    printf("Você digitou:\n");
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Inicial do nome: %c\n", letra);

    return 0;

}