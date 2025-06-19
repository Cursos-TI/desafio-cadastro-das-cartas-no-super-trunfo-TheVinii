#include <stdio.h>

int main() {
    char estado1;
    char codCarta1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pTuristicos1;

    char estado2;
    char codCarta2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pTuristicos2;

    printf("Digite os dados da Carta 1:\n");
    printf("Uma sigla de A-H para o Estado:");
    scanf(" %c", &estado1);
    printf("Um Código da carta de 01-04:");
    scanf("%s", codCarta1);
    printf("Nome da cidade:");
    scanf(" %s", cidade1);
    printf("Numero de habitantes:");
    scanf("%d", &populacao1);
    printf("Área da cidade (em km²):");
    scanf("%f", &area1);
    printf("O Produto Interno Bruto da cidade (PIB):");
    scanf("%f", &pib1);
    printf("Quantidade de pontos turísticos na cidade:");
    scanf("%d", &pTuristicos1);

    printf("Digite os dados da Carta 2:\n");
    printf("Uma sigla de A-H para o Estado:");
    scanf(" %c", &estado2);
    printf("Um Código da carta de 01-04:");
    scanf("%s", codCarta2);
    printf("Nome da cidade:");
    scanf(" %s", cidade2);
    printf("Numero de habitantes:");
    scanf("%d", &populacao2);
    printf("Área da cidade (em km²):");
    scanf("%f", &area2);
    printf("O Produto Interno Bruto da cidade (PIB):");
    scanf("%f", &pib2);
    printf("Quantidade de pontos turísticos na cidade:");
    scanf("%d", &pTuristicos2);

    float densidade1 = populacao1 / area1;
    float pibPercapita1 = pib1 / populacao1;
    float densidade2 = populacao2 / area2;
    float pibPercapita2 = pib2 / populacao2;

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %S\n", codCarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pTuristicos1);
    printf("Densidade Populacional: %f hab/km²\n", densidade1);
    printf("PIB per Capita: %f reais\n", pibPercapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pTuristicos2);
    printf("Densidade Populacional: %f hab/km²\n", densidade2);
    printf("PIB per Capita: %f reais\n", pibPercapita2);

    return 0;
}
