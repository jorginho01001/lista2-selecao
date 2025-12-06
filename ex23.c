#include <stdio.h>
#include <string.h>

#define MAX_SIZE 256

int main() {
    char frase[MAX_SIZE];
    const char *palavra = "aula";
    char *ponteiro_busca;
    int contador = 0;
    
   
    printf("Digite uma frase: ");
    if (fgets(frase, MAX_SIZE, stdin) == NULL) {
        return 1;
    }

    
    size_t tamanho = strlen(frase);
    if (tamanho > 0 && frase[tamanho - 1] == '\n') {
        frase[tamanho - 1] = '\0';
    }

  
    ponteiro_busca = frase; 
    while ((ponteiro_busca = strstr(ponteiro_busca, palavra)) != NULL) {
        contador++;

        ponteiro_busca += strlen(palavra); 
    }
    
    
    printf("\n--- Resultado da Contagem ---\n");
    printf("Frase analisada: \"%s\"\n", frase);
    printf("A palavra \"aula\" aparece **%d vezes**.\n", contador);
    
    return 0;
}