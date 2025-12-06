#include <stdio.h>
#include <math.h> 

void exibir_menu() {
    printf("\n--- MENU DE OPERACOES ---\n");
    printf("1 - Soma\n");
    printf("2 - Raiz Quadrada\n");
    printf("3 - Finalizar\n");
    printf("---------------------------\n");
    printf("Escolha uma opcao (1, 2 ou 3): ");
}

int main() {
    int opcao;
    float num1, num2, resultado;
    
    do {
        
        exibir_menu();
        
       
        if (scanf("%d", &opcao) != 1) {
            printf("\nERRO: Opcao invalida. Digite um numero inteiro.\n");
          
            while (getchar() != '\n'); 
            continue; 
        }
        
       
        switch (opcao) {
            case 1: // Soma
                printf("\n--- SOMA ---\n");
                printf("Digite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                
                resultado = num1 + num2;
                printf("Resultado da Soma: %.2f + %.2f = %.2f\n", num1, num2, resultado);
                break;
                
            case 2: 
                printf("\n--- RAIZ QUADRADA ---\n");
                printf("Digite o numero (nao-negativo) para calcular a raiz: ");
                scanf("%f", &num1);
                
                if (num1 >= 0) {
                    resultado = sqrt(num1);
                    printf("Resultado da Raiz Quadrada de %.2f: %.2f\n", num1, resultado);
                } else {
                    printf("ERRO: Nao é possivel calcular a raiz quadrada de um numero negativo.\n");
                }
                break;
                
            case 3: // Finalizar
                printf("\nPrograma finalizado. Até mais!\n");
                break;
                
            default:
                printf("\nOpcao invalida. Por favor, escolha 1, 2 ou 3.\n");
        }
        
    } while (opcao != 3);
    
    return 0;
}