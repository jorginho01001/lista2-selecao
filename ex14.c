#include <stdio.h>

int main() {
    int codigo;
    char cargo[20]; 
    float aumento_percentual; 
    
    
    printf("Digite o codigo do cargo do funcionario (1 a 5): ");
    
    
    if (scanf("%d", &codigo) != 1) {
        printf("Entrada invalida. Digite um numero inteiro.\n");
        return 1;
    }
    
   
    switch (codigo) {
        case 1:
            sprintf(cargo, "Escriturario");
            aumento_percentual = 50.00;
            break;
        case 2:
            sprintf(cargo, "Secretario");
            aumento_percentual = 35.00;
            break;
        case 3:
            sprintf(cargo, "Caixa");
            aumento_percentual = 20.00;
            break;
        case 4:
            sprintf(cargo, "Gerente");
            aumento_percentual = 10.00;
            break;
        case 5:
            sprintf(cargo, "Diretor");
            aumento_percentual = 0.00;
            break;
        default:
            
            printf("\nERRO: Codigo de cargo %d é invalido.\n", codigo);
            return 1; // Sai do programa com erro
    }
    
    printf("\n--- Detalhes do Aumento ---\n");
    printf("Codigo: %d\n", codigo);
    printf("Cargo: %s\n", cargo);
    
    if (aumento_percentual > 0) {
        printf("Percentual de Aumento: %.2f%%\n", aumento_percentual);
    } else {
        printf("Percentual de Aumento: Nao tem direito a aumento.\n");
    }
    
    return 0;
}