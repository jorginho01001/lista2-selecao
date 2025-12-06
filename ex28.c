#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite o primeiro lado: ");
    scanf("%d", &a);

    printf("Digite o segundo lado: ");
    scanf("%d", &b);

    printf("Digite o terceiro lado: ");
    scanf("%d", &c);

    
    if (a + b > c && a + c > b && b + c > a) {

        if (a == b && b == c) {
            printf("Triangulo Equilatero\n");
        } 
        else if (a == b || b == c || a == c) {
            printf("Triangulo Isosceles\n");
        } 
        else {
            printf("Triangulo Escaleno\n");
        }

    } else {
        printf("Os lados nao formam um triangulo\n");
    }

    return 0;
}
