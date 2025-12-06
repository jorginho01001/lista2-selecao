#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    float salario, novoSalario;

    printf("Digite o salário atual: ");
    scanf("%f", &salario);

    if (salario <= 300) {
        novoSalario = salario + (salario * 0.50); // aumento de 50%
    } else {
        novoSalario = salario + (salario * 0.30); // aumento de 30%
    }

    printf("Salário reajustado: R$ %.2f\n", novoSalario);

    return 0;
}
