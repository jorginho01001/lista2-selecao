#include <stdio.h>

int main() {
    
    float nota_laboratorio, nota_semestral, nota_exame;
    float media_final;
    char conceito;

    // Pesos das notas
    const int PESO_LABORATORIO = 2;
    const int PESO_SEMESTRAL = 3;
    const int PESO_EXAME = 5;
    const int SOMA_PESOS = PESO_LABORATORIO + PESO_SEMESTRAL + PESO_EXAME; // Deve ser 10

    printf("--- Calculadora de Media e Conceito (Desenvolvimento de Software) ---\n");

    
    float ler_nota(const char *nome) {
        float nota;
        do {
            printf("Digite a nota de %s (0 a 10): ", nome);
            if (scanf("%f", &nota) != 1) {
                printf("Entrada invalida. Tente novamente.\n");
                // Limpa o buffer de entrada para evitar loop infinito
                while (getchar() != '\n'); 
                nota = -1.0; // Define como invalida para repetir o loop
            } else if (nota < 0.0 || nota > 10.0) {
                printf("Nota fora do intervalo. Digite um valor entre 0.0 e 10.0.\n");
            }
        } while (nota < 0.0 || nota > 10.0);
        return nota;
    }

    nota_laboratorio = ler_nota("Trabalho de Laboratorio (Peso 2)");
    nota_semestral = ler_nota("Avaliacao Semestral (Peso 3)");
    nota_exame = ler_nota("Exame Final (Peso 5)");

    
    // Formula: (n1*p1 + n2*p2 + n3*p3) / (p1 + p2 + p3)
    media_final = (
        (nota_laboratorio * PESO_LABORATORIO) + 
        (nota_semestral * PESO_SEMESTRAL) + 
        (nota_exame * PESO_EXAME)
    ) / SOMA_PESOS;

    
    if (media_final >= 8.0 && media_final <= 10.0) {
        conceito = 'A';
    } else if (media_final >= 7.0) { 
        conceito = 'B';
    } else if (media_final >= 6.0) { 
        conceito = 'C';
    } else if (media_final >= 5.0) { 
        conceito = 'D';
    } else { 
        conceito = 'E';
    }

    // 4. Imprimir o resultado
    printf("\n--- Resultado Final ---\n");
    printf("Nota do Laboratorio: %.2f (Peso %d)\n", nota_laboratorio, PESO_LABORATORIO);
    printf("Nota da Av. Semestral: %.2f (Peso %d)\n", nota_semestral, PESO_SEMESTRAL);
    printf("Nota do Exame Final: %.2f (Peso %d)\n", nota_exame, PESO_EXAME);
    printf("---------------------------\n");
    printf("Media Final Ponderada: **%.2f**\n", media_final);
    printf("Conceito Atribuido: **%c**\n", conceito);
    printf("---------------------------\n");

    return 0;
}