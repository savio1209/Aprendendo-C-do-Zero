#include <stdio.h>

int main() {

    int a, b;

    printf("Digite um valor para a:\n");
    scanf("%d", &a);

    printf("Digite um valor para b:\n");
    scanf("%d", &b);

    if (a < b) {
        printf("a é menor que b\n");
    } else if (a > b) {
        printf("a é maior que b\n");
    } else {
        printf("a é igual a b\n");
    }

    printf("Segue o resultado da soma: %d\n", a + b);
    printf("Segue o resultado da diferença: %d\n", a - b);
    printf("Segue o resultado do produto: %d\n", a * b);
    if (b!=0) {
        printf("Segue o resultado do resto da divisão: %d\n", a % b);
    } else {
        printf("Não existe resto de divisão por zero\n");
    }

    return 0;
}