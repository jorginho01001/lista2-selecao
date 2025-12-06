#include <stdio.h>

int main() {
    int idade;
    
   
    printf("Digite a idade da pessoa: ");
    
    
    if (scanf("%d", &idade) != 1 || idade < 0) {
        printf("Idade invalida. Por favor, digite um numero inteiro nao-negativo.\n");
        return 1; 
    }
    
   
    printf("\n--- Classificacao Etaria ---\n");

    if (idade >= 0 && idade <= 2) {
        
        printf("A pessoa é classificada como: Recem-nascido\n");
    } else if (idade >= 3 && idade <= 11) {
        
        printf("A pessoa é classificada como: Crianca\n");
    } else if (idade >= 12 && idade <= 19) {
        
        printf("A pessoa é classificada como: Adolescente\n");
    } else if (idade >= 20 && idade <= 55) {
        
        printf("A pessoa é classificada como: Adulto\n");
    } else { 
        printf("A pessoa é classificada como: Idoso\n");
    }
    
    return 0;
}