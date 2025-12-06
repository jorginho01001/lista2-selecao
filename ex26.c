#include <stdio.h>

int main() {
    int num1, num2;
    char operacao;
    float resultado;
    
 
    printf("Digite o primeiro numero inteiro: ");
    if (scanf("%d", &num1) != 1) {
        printf("ERRO: Entrada invalida para o primeiro numero.\n");
        return 1;
    }
    
    printf("Digite o segundo numero inteiro: ");
    if (scanf("%d", &num2) != 1) {
        printf("ERRO: Entrada invalida para o segundo numero.\n");
        return 1;
    }
    
    
    printf("Digite a operacao desejada (+, -, *, /): ");
 
    if (scanf(" %c", &operacao) != 1) {
        printf("ERRO: Operacao invalida.\n");
        return 1;
    }
    
   
    printf("\n--- Resultado ---\n");
    
    switch (operacao) {
        case '+':
            resultado = (float)num1 + num2;
            printf("%d %c %d = %.2f\n", num1, operacao, num2, resultado);
            break;
            
        case '-':
            resultado = (float)num1 - num2;
            printf("%d %c %d = %.2f\n", num1, operacao, num2, resultado);
            break;
            
        case '*':
            resultado = (float)num1 * num2;
            printf("%d %c %d = %.2f\n", num1, operacao, num2, resultado);
            break;
            
        case '/':
           
            if (num2 != 0) {
               
                resultado = (float)num1 / num2; 
                printf("%d %c %d = %.2f\n", num1, operacao, num2, resultado);
            } else {
                printf("ERRO: Nao é possivel realizar divisao por zero.\n");
            }
            break;
            
        default:
            printf("ERRO: Simbolo de operacao '%c' desconhecido.\n", operacao);
    }
    
    return 0;
}