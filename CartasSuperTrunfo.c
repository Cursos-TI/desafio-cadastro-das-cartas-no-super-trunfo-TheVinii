#include <stdio.h>

int main() {
    char estado1, codCarta1[4], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1, densidade1, pibPercapita1, superPoder1;
    int pTuristicos1;
    
    char estado2, codCarta2[4], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade2, pibPercapita2, superPoder2;
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

    densidade1 = populacao1 / area1;
    pibPercapita1 = pib1 / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pTuristicos1 + pibPercapita1 + (1.0f / densidade1);
    
    densidade2 = populacao2 / area2;
    pibPercapita2 = pib2 / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pTuristicos2 + pibPercapita2 + (1.0f / densidade2);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codCarta1);
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

    printf("\nComparação de Cartas:\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos turísticos: %d\n", pTuristicos1 > pTuristicos2);
    printf("PIB per capita: %d\n", pibPercapita1 > pibPercapita2);
    printf("Densidade populacional: %d\n", densidade1 < densidade2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    return 0;
}
