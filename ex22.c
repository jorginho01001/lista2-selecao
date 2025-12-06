#include <stdio.h>
#include <string.h> 

#define MAX_SIZE 256 
int main() {
    char frase[MAX_SIZE];
    int contador_palavras = 0;
    int i;
 
    int anterior_era_espaco = 1; 
    
  
    printf("Digite uma frase: ");
    
  
    if (fgets(frase, MAX_SIZE, stdin) == NULL) {
        printf("Erro ao ler a frase.\n");
        return 1;
    }

 
    int tamanho = strlen(frase);
    if (tamanho > 0 && frase[tamanho - 1] == '\n') {
        frase[tamanho - 1] = '\0';
        tamanho--; 
    }

 
    for (i = 0; i < tamanho; i++) {
    
        if (frase[i] == ' ' || frase[i] == '\t' || frase[i] == '\n' || frase[i] == '\r') {
            anterior_era_espaco = 1; 
        } 
      
        else if (anterior_era_espaco == 1) {
            contador_palavras++; 
            anterior_era_espaco = 0; 
        }
    }
    
  
    printf("\n--- Resultado da Analise ---\n");
    printf("Frase analisada: \"%s\"\n", frase);
    printf("A frase contem **%d palavras**.\n", contador_palavras);
    
    return 0;
}