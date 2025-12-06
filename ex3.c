#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese"); 

    char senhaCorreta[] = "ASDFG";
    char senhaDigitada[20]; // espaço para guardar o que o usuario digitar

    printf("Digite a senha: ");
    scanf("%s", senhaDigitada);

    // compara as duas string
    if (strcmp(senhaDigitada, senhaCorreta) == 0) {
        printf("Acesso permitido!\n");
    } else {
        printf("Acesso negado!\n");
    }

    return 0;
}
