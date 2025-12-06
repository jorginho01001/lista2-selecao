#include <stdio.h>
#include <ctype.h> 

int main() {
    int idade;
    char grupo_risco_char;
    int codigo_seguro = 0; 

  
    printf("Digite a idade do segurado: ");
    if (scanf("%d", &idade) != 1) {
        printf("ERRO: Idade invalida. Digite um numero inteiro.\n");
        return 1;
    }

   
    printf("Digite o grupo de risco (B para Baixo, M para Medio, A para Alto): ");
 
    if (scanf(" %c", &grupo_risco_char) != 1) {
        printf("ERRO: Grupo de risco invalido.\n");
        return 1;
    }

    
    char grupo_risco = tolower(grupo_risco_char);

 
    if (idade < 18 || idade > 70) {
        printf("\nO segurado nao se qualifica. Apenas pessoas entre 18 e 70 anos podem adquirir apolices.\n");
        return 0;
    }

    
    if (idade >= 18 && idade <= 24) {
        
        if (grupo_risco == 'b') {
            codigo_seguro = 7;
        } else if (grupo_risco == 'm') {
            codigo_seguro = 8;
        } else if (grupo_risco == 'a') {
            codigo_seguro = 9;
        }
    } else if (idade >= 25 && idade <= 40) {
       
        if (grupo_risco == 'b') {
            codigo_seguro = 4;
        } else if (grupo_risco == 'm') {
            codigo_seguro = 5;
        } else if (grupo_risco == 'a') {
            codigo_seguro = 6;
        }
    } else if (idade >= 41 && idade <= 70) {
        
        if (grupo_risco == 'b') {
            codigo_seguro = 1;
        } else if (grupo_risco == 'm') {
            codigo_seguro = 2;
        } else if (grupo_risco == 'a') {
            codigo_seguro = 3;
        }
    }

 

    if (codigo_seguro > 0) {
        printf("\nO codigo do seguro para o segurado (Idade: %d, Risco: %c) é: **%d**\n", 
               idade, grupo_risco_char, codigo_seguro);
    } else {
 
        printf("\nERRO: Grupo de risco (%c) invalido. Use B, M ou A.\n", grupo_risco_char);
    }

    return 0;
}