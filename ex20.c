#include <stdio.h>
#include <math.h> 
int main() {
    float a, b, c; 
    float delta;   
    float x1, x2;   
    
    printf("--- Solucionador de Equacoes do 2o Grau (ax^2 + bx + c = 0) ---\n");
    
    
    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);
    
   
    if (a == 0) {
        printf("\nNao é uma equacao do 2o grau, pois o coeficiente 'a' é zero.\n");
        printf("Se 'b' for diferente de zero, é uma equacao do 1o grau.\n");
        return 0;
    }
    
    
    
    delta = pow(b, 2) - 4 * a * c;
    
    printf("\nValor do Discriminante (Delta): %.2f\n", delta);
    
    
    
    if (delta > 0) {
       
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        
        printf("A equacao possui **DUAS RAIZES REAIS E DISTINTAS**.\n");
        printf("x1 = %.4f\n", x1);
        printf("x2 = %.4f\n", x2);
        
    } else if (delta == 0) {
       
        x1 = (-b) / (2 * a);
        
        printf("A equacao possui **UMA RAIZ REAL** (ou duas raizes iguais).\n");
        printf("x = %.4f\n", x1);
        
    } else { 
        
        
        printf("A equacao possui **RAIZES COMPLEXAS**.\n");
        printf("Nao existem raizes reais para esta equacao.\n");
    }
    
    return 0;
}