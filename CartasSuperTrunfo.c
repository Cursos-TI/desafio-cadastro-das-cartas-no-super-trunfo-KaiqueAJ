#include <stdio.h>

int main() {

    // 1. declaração de variáveis 
    
    // 1.1 variáveis para a primeira carta
    char estado[20], nome[20], codigo[20];
    int turisticos;
    unsigned long int populacao;
    float area, pib, densidade, pibpercapita;

    // 1.2 variáveis para a segunda carta
    char estadoc2[20], nomec2[20], codigoc2[20];
    int turisticosc2;
    unsigned long int populacaoc2;
    float areac2, pibc2, pibpercapitac2, densidadec2;

    // 1.3 variáveis para cálculos
    float superpoderc1, superpoderc2;

    // 2. início de entrada e saída de dados

    printf("*** Programa Super trunfo ***\n");


    printf("Insira abaixo o código de sua primeira carta de super trunfo:\n");
    scanf("%s", codigo);

    printf("Insira abaixo o nome da cidade escolhida:\n");
    scanf("%s", nome);

    printf("Insira abaixo o estado de sua cidade escolhida:\n");
    scanf(" %s", &estado);

    printf("Qual a populaçao de sua cidade?\n");
    scanf("%u", &populacao);

    printf("Quantos são os pontos turísticos de sua cidade?\n");
    scanf("%d", &turisticos);

    printf("Qual a área da sua cidade?\n");
    scanf("%f", &area);

    printf("Qual o pib da sua cidade? (EX: 400 milhões de reais)\n");
    scanf("%f", &pib);

    // 2.1 dados para a segunda carta
    printf("\nAgora coloque os dados da segunda carta!\n");

    printf("Qual o código da segunda cidade?\n");
    scanf("%s", codigoc2);

    printf("Qual o nome da segunda cidade?\n");
    scanf("%s", nomec2);

    printf("Qual o estado da segunda cidade?\n");
    scanf(" %s", &estadoc2);

    printf("Qual a populaçao da segunda cidade?\n");
    scanf("%u", &populacaoc2);

    printf("Quantos pontos turisticos tem sua cidade?\n");
    scanf(" %d", &turisticosc2);

    printf("Qual a area da segunda cidade?\n");
    scanf(" %f", &areac2);

    printf("Qual o pib da segunda cidade? (EX: 400 milhões de reais)\n");
    scanf(" %f", &pibc2);

    // 3. cálculos 

    densidade = (float)populacao / area;
    densidadec2 = (float)populacaoc2 / areac2;

    pibpercapita = (float)(pib*100000) / populacao;
    pibpercapitac2 = (float)(pibc2*100000) / populacaoc2;

    superpoderc1 = area + pib + pibpercapita + populacao + turisticos + (1 / densidade);
    superpoderc2 = areac2 + pibc2 + pibpercapitac2 + populacaoc2 + turisticosc2 + (1 / densidadec2);

    // 4 exibição de dados finais na tela 
    
    // 4.1 exibição de dados cadastrados para a primeira cart
    printf("\nA sua primeira carta foi concluída!\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %u\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("Pib: %.2f milhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pibpercapita);

    // 4.2 exibição de dados cadastrados para a segunda carta
    printf("\nA sua segunda carta também está concluída!\n");
    printf("Carta 2:\n");
    printf("Estado: %s\n", estadoc2);
    printf("Código: %s\n", codigoc2);
    printf("Nome da cidade: %s\n", nomec2);
    printf("População: %u\n", populacaoc2);
    printf("Área: %.2f km²\n", areac2);
    printf("Pib: %.2f milhões de reais\n", pibc2);
    printf("Número de pontos turísticos: %d\n", turisticosc2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadec2);
    printf("PIB per Capita: %.2f reais\n\n", pibpercapitac2);

    // 4.3 exibição do super poder das cartas
    printf("O super poder de cada carta é: %f para a carta 1, %f para a carta 2\n", superpoderc1, superpoderc2);

    // 4.4 exibição dos resultados de comparação entre cartas
    printf("Comparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao > populacaoc2);
    printf("Área: Carta 1 venceu (%d)\n", area > areac2);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pibc2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", turisticos > turisticosc2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade < densidadec2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita > pibpercapitac2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoderc1 > superpoderc2);
    printf("Exibição de 1 para sim e 0 para não\n");

    return 0;
}
