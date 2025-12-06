#include <stdio.h>

int main() {
    int num1, num2, num3;
    int menor, meio, maior;
    
   
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);
    
    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &num3);

    menor = num1;
    meio = num2;
    maior = num3;
    
    
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
   
    if (num1 > num3) {
        int temp = num1;
        num1 = num3;
        num3 = temp;
    }

    if (num2 > num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }
    
   
    menor = num1;
    meio = num2;
    maior = num3;
    
    
    printf("\n--- Numeros em Ordem Crescente ---\n");
    printf("%d, %d, %d\n", menor, meio, maior);
    
    return 0;
}