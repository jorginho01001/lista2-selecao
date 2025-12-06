#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {

      setlocale(LC_ALL, "Portuguese");

    float salario, aumento, novoSalario;

    printf("Digite o valor do salario: ");
    scanf("%f", &salario);

    if (salario <= 500) {

        aumento = 30; // 30% de aumento
        novoSalario = salario + (salario * aumento / 100);
        printf("Você recebeu um aumento de %.0f%%\n", aumento);
        printf("Seu novo salario é: R$ %.2f\n", novoSalario);
    } else {
        printf("Salario nao se aplica as condicoes.\n");
    }

    return 0;
}
