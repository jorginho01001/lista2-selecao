#include <stdio.h>
#include <ctype.h> 
#define MAX_SIZE 256 

int main() {
    char frase[MAX_SIZE];
    int contador_vogais = 0;
    int i = 0; 
    
    printf("Digite uma frase: ");
    
    
    if (fgets(frase, MAX_SIZE, stdin) == NULL) {
        printf("Erro ao ler a frase.\n");
        return 1;
    }
    
    
    while (frase[i] != '\0') {
        
        char caractere = tolower(frase[i]);
        
        
        if (caractere == 'a' || 
            caractere == 'e' || 
            caractere == 'i' || 
            caractere == 'o' || 
            caractere == 'u') {
            
            contador_vogais++;
        }
        
        i++; 
    }
    
 
    printf("\n--- Resultado da Analise ---\n");
    printf("A frase digitada contem **%d vogais**.\n", contador_vogais);
    
    return 0;
}