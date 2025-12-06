#include <stdio.h>

int main() {
    int num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    if (num1 < num2) {
        printf("O menor numero é: %d\n", num1);
    } else if (num2 < num1) {
        printf("O menor numero é: %d\n", num2);
    } else {
        printf("Os dois números sao iguais: %d\n", num1);
    }
    
    return 0;
}