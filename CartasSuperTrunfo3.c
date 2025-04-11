#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1, codigo1[5], nomeCidade1[50];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1, superPoder1;

    // Dados da Carta 2
    char estado2, codigo2[5], nomeCidade2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2, superPoder2;

    // Entrada de dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: A01): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos Carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);

    // Cálculos Carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    // Comparações separadas

    // Comparação de Área
    printf("\n=== Comparação de Área ===\n");
    printf("Carta 1: %.2f km²\n", area1);
    printf("Carta 2: %.2f km²\n", area2);
    printf("Resultado: %d (1 = Carta 1 venceu, 0 = Carta 2 venceu)\n", area1 > area2);

    // Comparação de PIB
    printf("\n=== Comparação de PIB ===\n");
    printf("Carta 1: %.2f\n", pib1);
    printf("Carta 2: %.2f\n", pib2);
    printf("Resultado: %d (1 = Carta 1 venceu, 0 = Carta 2 venceu)\n", pib1 > pib2);

    // Comparações dos outros atributos
    printf("\n=== Comparação de Outros Atributos ===\n");
    printf("População: %d (1 = Carta 1 venceu, 0 = Carta 2 venceu)\n", populacao1 > populacao2);
    printf("Pontos Turísticos: %d (1 = Carta 1 venceu, 0 = Carta 2 venceu)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: %d (1 = Carta 1 venceu, 0 = Carta 2 venceu)\n", densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per Capita: %d (1 = Carta 1 venceu, 0 = Carta 2 venceu)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d (1 = Carta 1 venceu, 0 = Carta 2 venceu)\n", superPoder1 > superPoder2);

    return 0;
}