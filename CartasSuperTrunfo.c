#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
int main() {

    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    //variaveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

// Entrada dos dados da Carta 1
    printf("=== Digite os dados da Carta 1 ===\n");

    printf("Estado: ");
    scanf("%c", &estado1);

    printf("Código da carta: ");
    scanf("%s", &codigo1);

    printf("Nome da cidade (sem espaços): ");
    scanf("%s", &nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²) ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    
    //Entrada de dados Carta 2
    printf("=== Digite os dados da Carta 2 ===\n");

     printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Código da carta: ");
    scanf("%s", &codigo2);

    printf("Nome da cidade (sem espaços): ");
    scanf("%s", &nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    //Saída de dados
    printf("Estado: %c\n", &estado1);
    printf("Código da carta: %s\n", &codigo1);
    printf("Nome da cidade: %s\n", &nomeCidade1);
    printf("População: %d\n", &populacao1);
    printf("Área (em km²): %f", &area1);
    printf("PIB: %f", &pib1);
    printf("Número de pontos turísticos: %d\n", &pontosTuristicos1);

    printf("Estado: %c\n", &estado2);
    printf("Código da carta: %s\n", &codigo2);
    printf("Nome da cidade: %s\n", &nomeCidade2);
    printf("População: %d\n", &populacao2);
    printf("Área (em km²): %f\n", &area2);
    printf("PIB: %f\n", &pib2);
    printf("Número de pontos turísticos: %d\n", &pontosTuristicos2);

    return 0;
}
