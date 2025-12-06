#include <stdio.h>
#include <ctype.h> 


char ler_resposta(const char *pergunta) {
    char resposta;
    do {
        printf("%s (S/N): ", pergunta);
      
        if (scanf(" %c", &resposta) != 1) {
           
            while (getchar() != '\n'); 
            continue; 
        }
        resposta = tolower(resposta);
    } while (resposta != 's' && resposta != 'n');
    return resposta;
}

int main() {
    char resp_mamifero, resp_quadrupede, resp_bipede, resp_carnivoro;
    char resp_herbivoro, resp_frutifero, resp_voador, resp_aquatico;
    char resp_nao_voadora, resp_rapina, resp_casco, resp_sem_patas;
    char resp_tropical, resp_polar, resp_nadadora;

    printf("--- Identificador de Animais ---\n");
    printf("Responda as perguntas com S (Sim) ou N (Nao).\n");

    //  PRIMEIRA CLASSIFICACAO PRINCIPAL: MAMÍFERO?
    resp_mamifero = ler_resposta("\nO animal e um mamifero?");

    if (resp_mamifero == 's') {
        // --- GRUPO MAMÍFEROS ---
        resp_quadrupede = ler_resposta("O animal e quadrupede?");

        if (resp_quadrupede == 's') {
            // Leão (Carnívoro), Cavalo (Herbívoro)
            resp_carnivoro = ler_resposta("O animal e carnivoro?");

            if (resp_carnivoro == 's') {
                printf("\nO animal escolhido foi o **LEAO**.\n");
            } else {
                resp_herbivoro = ler_resposta("O animal e herbivoro?");
                if (resp_herbivoro == 's') {
                    printf("\nO animal escolhido foi o **CAVALO**.\n");
                } else {
                    printf("\nNao foi possivel identificar o animal (Dica: o cavalo e herbivoro).\n");
                }
            }
        } else {
            // Bípede (Homem, Macaco) ou Voador (Morcego) ou Aquático (Baleia)
            resp_bipede = ler_resposta("O animal e bípede?");

            if (resp_bipede == 's') {
                // Homem (Onívoro), Macaco (Frutífero)
                resp_frutifero = ler_resposta("O animal e frutifero?");
                
                if (resp_frutifero == 's') {
                    printf("\nO animal escolhido foi o **MACACO**.\n");
                } else {
                    printf("\nO animal escolhido foi o **HOMEM**.\n");
                }
            } else {
                resp_voador = ler_resposta("O animal e voador?");
                
                if (resp_voador == 's') {
                    printf("\nO animal escolhido foi o **MORCEGO**.\n");
                } else {
                    resp_aquatico = ler_resposta("O animal e aquatico?");
                    
                    if (resp_aquatico == 's') {
                        printf("\nO animal escolhido foi a **BALEIA**.\n");
                    } else {
                        printf("\nNao foi possivel identificar o animal mamifero.\n");
                    }
                }
            }
        }
    } else { 
        // SEGUNDA CLASSIFICACAO PRINCIPAL: AVE ou RÉPTIL?
        resp_nao_voadora = ler_resposta("O animal e uma ave nao-voadora?");

        if (resp_nao_voadora == 's') {
            // --- GRUPO AVES (Não-voadoras/Nadadoras) ---
            resp_tropical = ler_resposta("O animal vive em regioes tropicais?");
            
            if (resp_tropical == 's') {
                printf("\nO animal escolhido foi o **AVESTRUZ**.\n");
            } else {
                resp_polar = ler_resposta("O animal vive em regioes polares?");

                if (resp_polar == 's') {
                    printf("\nO animal escolhido foi o **PINGUIM**.\n");
                } else {
                    // Se não é tropical nem polar verifica se é nadadora (Pato)
                    resp_nadadora = ler_resposta("O animal e nadador (pato)?");
                    if (resp_nadadora == 's') {
                        printf("\nO animal escolhido foi o **PATO**.\n");
                    } else {
                        printf("\nNao foi possivel identificar a ave nao-voadora.\n");
                    }
                }
            }
        } else {
            // Pode ser Ave de rapina (aguia) ou reptil
            resp_rapina = ler_resposta("O animal e uma ave de rapina (aguia)?");
            
            if (resp_rapina == 's') {
                printf("\nO animal escolhido foi a **AGUIA**.\n");
            } else {
                // --- GRUPO RÉPTEIS ---
                resp_casco = ler_resposta("O animal possui casco?");

                if (resp_casco == 's') {
                    printf("\nO animal escolhido foi a **TARTARUGA**.\n");
                } else {
                    resp_sem_patas = ler_resposta("O animal nao possui patas?");
                    
                    if (resp_sem_patas == 's') {
                        printf("\nO animal escolhido foi a **COBRA**.\n");
                    } else {
                        // Se não tem casco e tem patas, deve ser carnívoro (crocodilo)
                        resp_carnivoro = ler_resposta("O animal e carnivoro (crocodilo)?");
                        
                        if (resp_carnivoro == 's') {
                            printf("\nO animal escolhido foi o **CROCODILO**.\n");
                        } else {
                            printf("\nNão foi possivel identificar o animal.\n");
                        }
                    }
                }
            }
        }
    }

    return 0;
}