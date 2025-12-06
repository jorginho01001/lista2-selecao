#include <stdio.h>

int main() {
    int horas_extras_minutos;
    int horas_falta_minutos;

    float horas_extras_horas;
    float horas_falta_horas;
    float H_calculado;
    int premio_valor;
    
 
    printf("Digite o numero de horas extras (em minutos): ");
    if (scanf("%d", &horas_extras_minutos) != 1 || horas_extras_minutos < 0) {
        printf("ERRO: Horas extras invalidas.\n");
        return 1;
    }
    
    printf("Digite o numero de horas-falta (em minutos): ");
    if (scanf("%d", &horas_falta_minutos) != 1 || horas_falta_minutos < 0) {
        printf("ERRO: Horas-falta invalidas.\n");
        return 1;
    }
    
  
    H_calculado = (float)horas_extras_minutos - (2.0f / 3.0f * (float)horas_falta_minutos);
    
  
    if (H_calculado > 2400) {
        premio_valor = 500;
    } else if (H_calculado >= 1800) {
        
        premio_valor = 400;
    } else if (H_calculado >= 1200) {
        
        premio_valor = 300;
    } else if (H_calculado >= 600) {
        
        premio_valor = 200;
    } else { 
        premio_valor = 100;
    }
    
    
    horas_extras_horas = (float)horas_extras_minutos / 60.0f;
    horas_falta_horas = (float)horas_falta_minutos / 60.0f;
    
 
    printf("\n--- Detalhes da Gratificacao ---\n");
    printf("Horas Extras: %.2f horas (%d minutos)\n", horas_extras_horas, horas_extras_minutos);
    printf("Horas-Falta: %.2f horas (%d minutos)\n", horas_falta_horas, horas_falta_minutos);
    printf("Valor H (minutos): %.2f\n", H_calculado);
    printf("Valor do Premio: R$ %d,00\n", premio_valor);
    
    return 0;
}