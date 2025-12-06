#include <stdio.h>

int main() {
    // Declaração de variáveis
    float preco;
    int codigo;
    char procedencia[30]; // Para armazenar o nome da procedência

    // Solicitar o preço do produto
    printf("Digite o preco do produto: R$ ");
    if (scanf("%f", &preco) != 1 || preco <= 0) {
        printf("Preco invalido.\n");
        return 1; // Sair com erro
    }

    // Solicitar o código de origem
    printf("Digite o codigo de origem do produto (1 a 30): ");
    if (scanf("%d", &codigo) != 1 || codigo < 1 || codigo > 30) {
        printf("Codigo de origem invalido (deve ser entre 1 e 30).\n");
        return 1; // Sair com erro
    }

    // --- Lógica para determinar a procedência ---

    if (codigo == 1) {
        // Código 1
        sprintf(procedencia, "Sul");
    } else if (codigo == 2) {
        // Código 2
        sprintf(procedencia, "Norte");
    } else if (codigo == 3) {
        // Código 3
        sprintf(procedencia, "Leste");
    } else if (codigo == 4) {
        // Código 4
        sprintf(procedencia, "Oeste");
    } else if (codigo == 5 || codigo == 6) {
        // Código 5 ou 6
        sprintf(procedencia, "Nordeste");
    } else if (codigo >= 7 && codigo <= 9) {
        // Código 7, 8 ou 9
        sprintf(procedencia, "Sudeste");
    } else if (codigo >= 10 && codigo <= 20) {
        // Código 10 até 20
        sprintf(procedencia, "Centro-Oeste");
    } else if (codigo >= 21 && codigo <= 30) {
        // Código 21 até 30
        // Nota: O código de 5 ou 6 também é Nordeste, esta parte cobre 21 a 30.
        sprintf(procedencia, "Nordeste");
    } else {
        // Esta parte deve ser inalcançável devido à verificação de entrada, mas é uma boa prática.
        sprintf(procedencia, "Procedencia Desconhecida");
    }

    // --- Imprimir o resultado ---

    printf("\n--- Detalhes do Produto ---\n");
    printf("Preco: R$ %.2f\n", preco);
    printf("Codigo de Origem: %d\n", codigo);
    printf("Procedencia: **%s**\n", procedencia);

    return 0; // Sair com sucesso
}