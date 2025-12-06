#include <stdio.h>

int main() {
    
    float salario_minimo;
    float horas_trabalhadas;
    int num_dependentes;
    float horas_extras;

  
    float valor_hora;
    float salario_mes;
    float acrescimo_dependentes;
    float valor_hora_extra;
    float acrescimo_horas_extras;
    float salario_bruto;
    float irrf;
    float salario_liquido;
    float gratificacao;
    float salario_a_receber;

    
    printf("Digite o valor do salario minimo: R$ ");
    scanf("%f", &salario_minimo);

    printf("Digite o numero de horas trabalhadas (normais) no mes: ");
    scanf("%f", &horas_trabalhadas);

    printf("Digite o numero de dependentes: ");
    scanf("%d", &num_dependentes);

    printf("Digite a quantidade de horas extras trabalhadas: ");
    scanf("%f", &horas_extras);

   
    valor_hora = salario_minimo / 5.0f;
    salario_mes = horas_trabalhadas * valor_hora;

    
    acrescimo_dependentes = num_dependentes * 32.0f;

  
    valor_hora_extra = valor_hora * 1.50f; 
    acrescimo_horas_extras = horas_extras * valor_hora_extra;

    
    salario_bruto = salario_mes + acrescimo_dependentes + acrescimo_horas_extras;

   
    if (salario_bruto < 200.00f) {
    
        irrf = 0.0f;
    } else if (salario_bruto <= 500.00f) {
        
        irrf = salario_bruto * 0.10f;
    } else { 
      
        irrf = salario_bruto * 0.20f;
    }

    
    salario_liquido = salario_bruto - irrf;
 if (salario_liquido <= 350.00f) {
      
        gratificacao = 100.00f;
    } else {
        gratificacao = 50.00f;
    }

    
    salario_a_receber = salario_liquido + gratificacao;

    
    printf("\n--- Detalhes do Salario ---\n");
    printf("Valor da Hora Normal: R$ %.2f\n", valor_hora);
    printf("Salario Base (Horas Normais): R$ %.2f\n", salario_mes);
    printf("Acrescimo Dependentes: R$ %.2f\n", acrescimo_dependentes);
    printf("Acrescimo Horas Extras: R$ %.2f\n", acrescimo_horas_extras);
    printf("--------------------------------\n");
    printf("Salario Bruto: R$ %.2f\n", salario_bruto);
    printf("IRRF Retido: R$ %.2f\n", irrf);
    printf("Salario Liquido: R$ %.2f\n", salario_liquido);
    printf("Gratificacao: R$ %.2f\n", gratificacao);
    printf("--------------------------------\n");
    printf("SALARIO FINAL A RECEBER: R$ **%.2f**\n", salario_a_receber);

    return 0;
}