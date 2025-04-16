#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("=== Programa de Super trunfo ===\n");

    // começa contador de tempo para número rand
    srand(time(0));

    // variáveis para a primeira carta
    char estadoc1[20], codigoc1[20], nomec1[20];
    unsigned long long int populacaoc1;
    double areac1, pibc1;
    short int pontosturisticosc1;

    // variáveis para a segunda carta
    char estadoc2[20], codigoc2[20], nomec2[20];
    unsigned long long int populacaoc2;
    double areac2, pibc2;
    short int pontosturisticosc2;

    // variáveis para escolhas de opção (menus interativos)
    short int escolhainicial, escolhajogar, escolhasuascartas, escolhacomputador;

    // variável para armazenar número randomico
    unsigned long long int numeroRandomizado;

    // impressão de dados na tela para seleção de jogo
    printf("Olá! Bem vindo ao programa de super trunfo!\n");
    printf("O que deseja fazer?\n");
    printf("1. Jogar\n");
    printf("2. Ler regras\n");
    printf("3. Sair\n");
    printf("Escolha:\n");

    scanf("%hi", &escolhainicial);

    // switch para determinar como o programa prosseguirá dependendo da escolha inicial
    switch (escolhainicial)
    {
    case 1:
        printf("Como gostaria de jogar?\n");
        printf("1. Contra o computador\n");
        printf("2. Cadastrando ambas as cartas\n");
        printf("Escolha:\n");
        
        scanf("%hi", &escolhajogar);
        
        if (escolhajogar == 1)
        {       
            printf("Gostaria de jogar com:\n");
            printf("1. Cartas randômicas\n");
            printf("2. Cartas pré definidas\n");
            printf("3. Cadastrando suas cartas\n");
            printf("Escolha:\n");
            scanf("%hi", &escolhasuascartas);

            printf("Gostaria que o computador jogasse com:\n");
            printf("1. Números randômicos e cartas fictícias\n");
            printf("2. Números pré definidos da geografia real\n");
            printf("Escolha:\n");
            scanf("%hi", &escolhacomputador);
        }

        break;

    case 2:
        printf("Regras\n");
        break;

    case 3:
        printf("Saindo...\n");

        return 0;
        break;

    default:
        printf("Opção inválida\n");
        break;
    }

    // caso a escolha seja jogar com suas cartas randomizadas
    if (escolhasuascartas == 1)
    {
        printf("Randomizando suas cartas...\n");

            // randomiza o número aleatório
            numeroRandomizado = rand();
        
        // atribui um de 3 nomes de estados fictícios a sua carta
        switch (numeroRandomizado % 3 + 1)
        {
        case 1:
            estadoc1[20] = "Forest";
            break;
        
        case 2:
            estadoc1[20] = "MoonriseTowers";
            break;

        case 3:
            estadoc1[20] = "BlightedVillage";
            break;

        }  


        // atribui um código randomizado a sua carta
        codigoc1[20] = numeroRandomizado % 100;


        // atribui um de 5 nomes a sua carta
        switch (numeroRandomizado % 5 + 1)
        {
        case 1:
            nomec1[20] = "Grymforge";
            break;
        
        case 2:
            nomec1[20] = "GoblinCamp";
            break;
            
        case 3:
            nomec1[20] = "Nautiloid";
            break;
        
        case 4:
            nomec1[20] = "SunlitWetlands";
            break;
            
        case 5:
            nomec1[20] = "ArcaneTower";
            break;

        }

            // randomiza o número aleatório novamente
            numeroRandomizado = rand();

        // atribui um número randomizado às categorias população e área de sua carta
        populacaoc1 = numeroRandomizado;

        areac1 = numeroRandomizado + populacaoc1;

            // randomiza o número aleatório novamente
            numeroRandomizado = rand();

        // atribui um número randomizado às categorias PIB e ponto turístico de sua carta
        pibc1 = numeroRandomizado * 2,75;

        pontosturisticosc1 = numeroRandomizado % 200;
        
        printf("%s, %s, %s, %d, %d, %llu", nomec1, estadoc1, codigoc1, areac1, pibc1, pontosturisticosc1);
    }
    
    // caso a escolha seja > Jogar > cadastrando ambas as cartas
    // ou Jogar > Contra o computador > cadastrando suas cartas
    if (escolhajogar == 2 || escolhasuascartas == 3)
    {
        // dados para a primeira carta
        printf("*** Entre com os dados de sua primeira carta de Super trunfo: ***\n");
        printf("Entre com o estado de sua cidade:\n");
        scanf(" %s", estadoc1);

        printf("Entre com o código da sua primeira carta de super trunfo:\n");
        scanf("%s", codigoc1);

        printf("Entre com o nome da cidade escolhida:\n");
        scanf("%s", nomec1);

        printf("Entre com a população de sua cidade:\n");
        scanf("%u", &populacaoc1);

        printf("Entre com a área da sua cidade:\n");
        scanf("%d", &areac1);

        printf("Entre com o PIB da sua cidade:\n");
        scanf("%d", &pibc1);

        printf("Entre com os pontos turísticos de sua cidade:\n");
        scanf("%d", &pontosturisticosc1);
    
    // caso a escolha seja > Jogar > cadastrando ambas as cartas
    if (escolhajogar == 2)
    {
        // dados para a segunda carta
        printf("Agora coloque os dados da segunda carta!\n");

        printf("Entre com o estado de sua cidade:\n");
        scanf(" %s", estadoc2);

        printf("Entre com o código da sua segunda carta de super trunfo:\n");
        scanf("%s", codigoc2);

        printf("Entre com o nome da cidade escolhida:\n");
        scanf("%s", nomec2);

        printf("Entre com a população de sua cidade:\n");
        scanf("%u", &populacaoc2);

        printf("Entre com a área da sua cidade:\n");
        scanf("%d", &areac2);

        printf("Entre com o PIB da sua cidade:\n");
        scanf("%d", &pibc2);

        printf("Entre com os pontos turísticos de sua cidade:\n");
        scanf("%d", &pontosturisticosc2);
    }

    // fazer calculos... densidade populacional e essas coisas aqui: simplificar super poder
    
        return 0;
    }
    
}
/*
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
*/
// if else, utilizar operador ternário

// melhorar legibilidade do código, decorebas e comentar melhor (unsigned long long int), short p pontos turisticos etc
// escolher entre ler regras ou jogar
// escolher entre jogar contra computador ou cadastrar ambas as cartas...
// jogar contra computador pode ser aleatório (escolhe entre tipo 10 nomes ficticios de lugares de baldurs gate lol)
// ou contra cidades reais; com geografia correta, escolhida aleatoriamente, tb umas 10 p facilitar
// utilizar operador ternario ; ai no final ifelse pra ganhar perder ou empate apenas...
