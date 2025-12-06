#include <stdio.h>
#include <math.h> 
int main() {
    int angulo_original;
    int angulo_reduzido;
    
  
    printf("Digite a medida de um angulo em graus (numero inteiro): ");
    
    if (scanf("%d", &angulo_original) != 1) {
        printf("ERRO: Entrada invalida. Por favor, digite um numero inteiro.\n");
        return 1;
    }
    
   
    angulo_reduzido = angulo_original % 360;
    

    if (angulo_reduzido < 0) {
        angulo_reduzido += 360;
    }
    
    printf("\nAngulo Original: %d graus\n", angulo_original);
    printf("Angulo Reduzido (0 a 360): %d graus\n", angulo_reduzido);
    
   
    if (angulo_reduzido == 0 || angulo_reduzido == 360) {
        printf("Localizacao: Eixo Positivo X (ou final da volta)\n");
    } else if (angulo_reduzido == 90) {
        printf("Localizacao: Eixo Positivo Y\n");
    } else if (angulo_reduzido == 180) {
        printf("Localizacao: Eixo Negativo X\n");
    } else if (angulo_reduzido == 270) {
        printf("Localizacao: Eixo Negativo Y\n");
    } 
    
    else if (angulo_reduzido > 0 && angulo_reduzido < 90) {
     
        printf("Localizacao: **1o quadrante**\n");
    } else if (angulo_reduzido > 90 && angulo_reduzido < 180) {
      
        printf("Localizacao: **2o quadrante**\n");
    } else if (angulo_reduzido > 180 && angulo_reduzido < 270) {
        
        printf("Localizacao: **3o quadrante**\n");
    } else { 
        
        printf("Localizacao: **4o quadrante**\n");
    }
    
    return 0;
}