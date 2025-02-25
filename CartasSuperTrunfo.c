#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    char estado1;
    char codigo_carta1[3];
    char cidade1[50];
    int populacao1;
    float area_estado1;
    float PIB1;
    int numero_pontos_turisticos1;
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Informe a letra do Estado 1 (Entre A e H): ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta 1 (Entre 01 e 04): ");
    scanf("%s", codigo_carta1);

    printf("Informe o nome da cidade 1: ");
    scanf("%s", cidade1);

    printf("Informe a população da cidade 1: ");
    scanf("%d", &populacao1);

    printf("Informe a área do Estado 1 (Km²): ");
    scanf("%f", &area_estado1);

    printf("Informe o PIB da cidade 1 (Bilhões): ");
    scanf("%f", &PIB1);

    printf("Informe o número de pontos turísticos da cidade 1: ");
    scanf("%d", &numero_pontos_turisticos1);

    // Adição do nível aventureiro
    
    float densidade_populacional1 = (float) populacao1 / area_estado1;
    float PIB_per_capita1 = (PIB1 * 10000000)  / (float) populacao1; 


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nCarta 1:\nEstado: %c\nCódigo: %c%s\n"
           "Nome da Cidade: %s\nPopulação: %d habitantes\nÁrea: %.2f km²\n"
           "PIB: R$ %.2f bilhões\nNúmero de Pontos Turísticos: %d.\n"
           "Densidade Populacional: %.2f hab/km²\nPIB per Capita: R$ %.2f por pessoa.\n\n",
           estado1, estado1, codigo_carta1, cidade1, populacao1, area_estado1,
           PIB1, numero_pontos_turisticos1, densidade_populacional1, PIB_per_capita1);

    // Dados da carta 02:
    
    char estado2;
    char codigo_carta2[3];
    char cidade2[20];
    int populacao2;
    float area_estado2;
    float PIB2;
    int numero_pontos_turisticos2;

    printf("\nInforme a letra do Estado 2 (Entre A e H): ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta 2 (Entre 01 e 04): ");
    scanf("%s", codigo_carta2);

    printf("Informe o nome da cidade 2: ");
    scanf("%s", cidade2);

    printf("Informe a população da cidade 2: ");
    scanf("%d", &populacao2);

    printf("Informe a área do Estado 2(Km²): ");
    scanf("%f", &area_estado2);

    printf("Informe o PIB da cidade 2 (Bilhões): ");
    scanf("%f", &PIB2);

    printf("Informe o número de pontos turísticos da cidade 2: ");
    scanf("%d", &numero_pontos_turisticos2);

    float densidade_populacional2 = (float) populacao2 / area_estado2;
    float PIB_per_capita2 = (PIB2 * 10000000) / (float) populacao2;


    printf("\nCarta 2:\nEstado: %c\nCódigo: %c%s\n"
           "Nome da Cidade: %s\nPopulação: %d habitantes\nÁrea: %.2f km²\n"
           "PIB: R$ %.2f bilhões\nNúmero de Pontos Turísticos: %d\n"
           "Densidade Populacional: %.2f hab/km²\nPIB per Capita: R$ %.2f por pessoa.\n\n",
           estado2, estado2, codigo_carta2, cidade2, populacao2, area_estado2, 
           PIB2, numero_pontos_turisticos2, densidade_populacional2, PIB_per_capita2);

    return 0;
}
