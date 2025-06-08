#include <stdio.h>

int main() {
    // Variáveis da carta 1
    char estado1, codigo1[10], nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;
    float densidade1, pib_capita1, super_poder1;

    // Variáveis da carta 2
    char estado2, codigo2[10], nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pib_capita2, super_poder2;

    // Entrada carta 1
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Codigo: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // Entrada carta 2
    printf("\nCarta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Codigo: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos carta 1
    densidade1 = populacao1 / area1;
    pib_capita1 = (pib1 * 1000000000) / populacao1;
    super_poder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + pontos1 + pib_capita1 + (1 / densidade1);

    // Cálculos carta 2
    densidade2 = populacao2 / area2;
    pib_capita2 = (pib2 * 1000000000) / populacao2;
    super_poder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + pontos2 + pib_capita2 + (1 / densidade2);

    // Comparações
    printf("\nComparacao de Cartas:\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);  // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_capita1 > pib_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}
