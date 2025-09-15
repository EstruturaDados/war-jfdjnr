#include <stdio.h>
#include <string.h>

#define MAX_TERRITORIOS 5
#define TAM_NOME 30
#define TAM_COR 30

// Definição da struct Territorio
typedef struct {
    char nome[TAM_NOME];
    char corExercito[TAM_COR];
    int numeroTropas;
} Territorio;

int main() {
    Territorio mapa[MAX_TERRITORIOS];

    printf(" Vamos cadastrar os 5 territorios do nosso mundo \n\n");

    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("----- Cadastro Território %d:-----\n", i + 1);

        // Leitura do nome do território
        printf("Nome do Territorio: ");
        fgets(mapa[i].nome, TAM_NOME, stdin);
        mapa[i].nome[strcspn(mapa[i].nome, "\n")] = '\0'; // Remove o '\n'

        // Leitura da cor do exército
        printf("Cor do Exército: (ex: Verde, Amarelo, Azul...) ");
        fgets(mapa[i].corExercito, TAM_COR, stdin);
        mapa[i].corExercito[strcspn(mapa[i].corExercito, "\n")] = '\0';

        // Leitura do número de tropas
        printf("Número de Tropas: ");
        scanf("%d", &mapa[i].numeroTropas);
        getchar(); // Limpa o '\n' deixado pelo scanf

        printf("\n");
    }
        printf(" Cadastro concluido com sucesso! \n");
        printf("_________________________________ \n\n\n");
    
    // Exibição do estado atual do mapa
    printf("MAPA DO MUNDO - Estado Atual:\n");
    printf("====================================================\n\n");
    for (int i = 0; i < MAX_TERRITORIOS; i++) {
        printf("TERRITÓRIO %d:\n", i + 1);
        printf("  - Nome: %s\n", mapa[i].nome);
        printf("  - Cor do Exército: %s\n", mapa[i].corExercito);
        printf("  - Número de Tropas: %d\n", mapa[i].numeroTropas);
        printf("--------------------------\n");
    }

    return 0;
}
