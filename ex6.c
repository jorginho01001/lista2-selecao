#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese"); // permite acentos

    float altura, pesoIdeal;
    char sexo;

    printf("Digite o sexo (M para masculino / F para feminino): ");
    scanf(" %c", &sexo); // espaço antes do %c evita ler o ENTER anterior

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
        printf("Seu peso ideal é: %.2f kg\n", pesoIdeal);
    } 
    else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal é: %.2f kg\n", pesoIdeal);
    } 
    else {
        printf("Sexo inválido! Use M ou F.\n");
    }

    return 0;
}
