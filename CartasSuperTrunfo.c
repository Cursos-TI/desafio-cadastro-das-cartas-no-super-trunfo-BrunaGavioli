#include <stdio.h>

int main() {
    // Primeira carta
    char Estado1;
    char Codigo_da_Carta1[10];
    char Nome_da_Cidade1[50];
    int Populacao1;
    float Area1;
    float PIB1;
    int Pontos_Turisticos1;

    //Segunda carta
    char Estado2;
    char Codigo_da_Carta2[10];
    char Nome_da_Cidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int Pontos_Turisticos2;

    // Dados para a primeira carta
    printf("=== Cadastro da Primeira Carta ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &Estado1);

    printf("Digite o código da carta (Ex: A01): ");
    scanf("%s", Codigo_da_Carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", Nome_da_Cidade1);

    printf("Digite a população: ");
    scanf("%d", &Populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &Area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &Pontos_Turisticos1);

    //Dados para a segunda carta
    printf("\n=== Cadastro da Segunda Carta ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &Estado2);

    printf("Digite o código da carta (Ex: B02): ");
    scanf("%s", Codigo_da_Carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", Nome_da_Cidade2);

    printf("Digite a população: ");
    scanf("%d", &Populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &Area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &Pontos_Turisticos2);

    // Exibição dos dados da primeira carta
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo_da_Carta1);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", Pontos_Turisticos1);

    // Exibição dos dados da segunda carta
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo_da_Carta2);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Pontos_Turisticos2);

    return 0;
}
