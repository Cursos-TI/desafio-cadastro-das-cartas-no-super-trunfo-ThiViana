#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
     //Criação das variáveis necessárias para o cadastro de cartas.
    char cod_carta[4];
    char nome[20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    
     // Solicitação do Código da carta 
    printf("Digite o código da cidade: \n");
    scanf("%3s", cod_carta);
    
     // Solicitação do nome da cidade
    printf("Digite o nome da cidade: \n");
    scanf("%19s", nome);
    
     // Solicitação da população da cidade
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);
    
     // Solicitação da área da cidade
    printf("Digite a área em Km2: \n");
    scanf("%f", &area);
    
     // Solicitação do PIB da cidade
    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    
    // Solicitação do número de pontos turísticos da cidade
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    // Exibição dos Dados das Cartas:
    printf("\n--- Dados da Cidade ---\n");
    printf("Código: %s\n", cod_carta);
    printf("Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f$\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}