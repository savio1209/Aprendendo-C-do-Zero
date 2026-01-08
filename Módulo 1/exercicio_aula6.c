#include <stdio.h>

int main(){

int i;

printf("\nFOR:\n");

for (int i = 1; i <= 10; i++){
    printf("%d\n", i);
}

printf("\nWHILE:\n");

i = 10;

while (i >= 1){
printf("%d\n", i);
i--;
}

printf("\nDO-WHILE:\n");

int opcao;

do {
    printf("Digite 1 para seguir.\n");
    printf("Digite 0 para encerrar.\n");
    scanf("%d", &opcao);
} while (opcao != 0);

return 0;

}