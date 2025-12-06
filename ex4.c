#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // habilita acentuação

    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Você é maior de idade.\n");
    } else {
        printf("Você é menor de idade.\n");
    }

    return 0;
}
