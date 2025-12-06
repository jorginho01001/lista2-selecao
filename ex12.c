#include <stdio.h>

int main() {
    float n1, n2, n3;
    float media;
    
   
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    
    
    media = (n1 + n2 + n3) / 3.0;
 
    printf("\n--- Resultado do Aluno ---\n");
    printf("Media Aritmetica: %.2f\n", media);
    
    
    if (media < 5.0) {
      
        printf("Mensagem: REPROVADO\n");
    } else if (media < 7.0) {
      
        printf("Mensagem: EXAME\n");
    } else { 
      
        printf("Mensagem: APROVADO\n");
    }
    
    return 0;
}