#include <stdio.h>

int main() {
    float preco_etiqueta;
    int codigo_pagamento;
    float preco_final;
    float valor_desconto_juros = 0.0f;
    

    printf("Digite o preco normal de etiqueta do produto: R$ ");
    if (scanf("%f", &preco_etiqueta) != 1 || preco_etiqueta <= 0) {
        printf("ERRO: Preco invalido.\n");
        return 1;
    }
    
    printf("\n--- Condicoes de Pagamento ---\n");
    printf("1 - A vista em dinheiro ou cheque (10%% de desconto)\n");
    printf("2 - A vista no cartao de credito (5%% de desconto)\n");
    printf("3 - Em 2 vezes (Preco normal)\n");
    printf("4 - Em 3 vezes (Preco normal + 10%% de juros)\n");
    printf("Digite o codigo da condicao de pagamento: ");
    
    if (scanf("%d", &codigo_pagamento) != 1 || codigo_pagamento < 1 || codigo_pagamento > 4) {
        printf("ERRO: Codigo de pagamento invalido.\n");
        return 1;
    }
    

    printf("\n--- Recibo ---\n");
    printf("Preco de Etiqueta: R$ %.2f\n", preco_etiqueta);
    
    switch (codigo_pagamento) {
        case 1:
      
            valor_desconto_juros = preco_etiqueta * 0.10f;
            preco_final = preco_etiqueta - valor_desconto_juros;
            printf("Condicao: A vista (Dinheiro/Cheque)\n");
            printf("Desconto aplicado: R$ %.2f (10%%)\n", valor_desconto_juros);
            break;
            
        case 2:
   
            valor_desconto_juros = preco_etiqueta * 0.05f;
            preco_final = preco_etiqueta - valor_desconto_juros;
            printf("Condicao: A vista (Cartao de Credito)\n");
            printf("Desconto aplicado: R$ %.2f (5%%)\n", valor_desconto_juros);
            break;
            
        case 3:
          
            preco_final = preco_etiqueta;
            printf("Condicao: Em 2 vezes sem juros\n");
            printf("Valor da Parcela: R$ %.2f\n", preco_final / 2.0f);
            break;
            
        case 4:
      
            valor_desconto_juros = preco_etiqueta * 0.10f;
            preco_final = preco_etiqueta + valor_desconto_juros;
            printf("Condicao: Em 3 vezes com juros\n");
            printf("Juros adicionados: R$ %.2f (10%%)\n", valor_desconto_juros);
            printf("Valor da Parcela: R$ %.2f\n", preco_final / 3.0f);
            break;
            
        default:
         
            printf("ERRO INTERNO: Codigo invalido.\n");
            return 1;
    }
    
  
    printf("----------------------------------------\n");
    printf("VALOR TOTAL A PAGAR: R$ **%.2f**\n", preco_final);
    
    return 0;
}