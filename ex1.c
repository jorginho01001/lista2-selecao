#include <stdio.h>
#include <stdlib.h>

int main (void){

    int nota1, nota2, nota3, nota4;
    float media;

    
    printf ("Digite a primeira nota: \n");
    scanf("%d", &nota1);

    printf ("Digite a segunda nota: \n");
    scanf  ("%d", &nota2);

    printf ("Digite a terceira nota: \n");
    scanf ("%d", &nota3);

    printf("Digite a quarta nota: \n");
    scanf("%d", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4.0;

    if (media >= 7.0)
    {
        printf("Aluno Aprovado");
      
    }
    else{ 
        printf("Reprovado: \n");
    }

    printf("Media final:  %.2f  \n",  media);


}
