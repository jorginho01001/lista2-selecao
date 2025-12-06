#include <stdio.h>

int main() {
    int n1, n2, n3, n4;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    printf("Digite o quarto numero: ");
    scanf("%d", &n4);

    printf("Numeros divisiveis por 2 e 3:\n");

    if (n1 % 2 == 0 && n1 % 3 == 0)
        printf("%d\n", n1);

    if (n2 % 2 == 0 && n2 % 3 == 0)
        printf("%d\n", n2);

    if (n3 % 2 == 0 && n3 % 3 == 0)
        printf("%d\n", n3);

    if (n4 % 2 == 0 && n4 % 3 == 0)
        printf("%d\n", n4);

    return 0;
}
