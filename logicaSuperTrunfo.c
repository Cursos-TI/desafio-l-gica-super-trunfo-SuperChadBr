#include <stdio.h>

int main() {
    
    //Exibir mensagem de boas-vindas e introduzir o jogo
    printf("Bem vindo ao Super Trunfo!\n");
    printf("Para começar, você irá cadastrar duas cartas, com os dados que o sistema pedir\n");
    printf("Depois, o sistema irá comparar os dados das duas cartas, e a carta que tiver mais atributos melhores que a outra, será a carta vencedora\n");
    printf("Agora cadastre os dados da primeira carta, que será reresentada pelo número 1 nas comparações\n\n");


    //Declaração das variáveis
    char estado1;
    char codigo_da_carta1[4];
    char nome_da_cidade1[23];
    unsigned long int populacao1;
    float area1;
    float densidade_populacional1;
    float pib1;
    float pib_per_capita1;
    int numero_de_pontos_turisticos1;
    float super_poder1;

    
    // Solicitar e armazenar os dados do usuário
    printf("Digite o estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo_da_carta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade1);

    printf("Digite a população:\n");
    scanf("%lu", &populacao1);

    printf("Digite a área em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1); 

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos1);
    printf("\n");

    // Calculando a densidade populacional, PIB per capita e o Super Poder após a entrada dos dados
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = populacao1 + pib1 + pib_per_capita1 + numero_de_pontos_turisticos1 - densidade_populacional1;

    
    // Exibir os dados cadastrados
    printf("Os dados da primeira carta foram cadastrados com sucesso, aqui está a carta com os respectivos dados:\n\n");

    // Imprimir os dados cadastrados
    printf("Nome do estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Area em Km²: %.2f\n", area1);
    printf("Densidade Populacional: %.2f\n", densidade_populacional1);
    printf("PIB: %.2f\n", pib1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos1);
    printf("O Super Poder é de: %.2f\n\n", super_poder1);


    printf("Agora cadastre os dados da segunda carta, que será reresentada pelo número 0 nas comparações\n\n");

    char estado2;
    char codigo_da_carta2[4];
    char nome_da_cidade2[23];
    unsigned long int populacao2;
    float area2;
    float densidade_populacional2;
    float pib2;
    float pib_per_capita2;
    int numero_de_pontos_turisticos2;
    float super_poder2;


    printf("Digite o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo_da_carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade2);

    printf("Digite a população:\n");
    scanf("%lu", &populacao2);

    printf("Digite a área em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2); 

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos2);
    printf("\n");


    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = populacao2 + pib2 + pib_per_capita2 + numero_de_pontos_turisticos2 - densidade_populacional2;


    printf("Os dados da segunda carta foram cadastrados com sucesso, aqui está a carta com os respectivos dados:\n\n");

    printf("Nome do estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Area em Km²: %.2f\n", area2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional2);
    printf("PIB: %.2f\n", pib2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos2);
    printf("O Super Poder é de: %.2f\n\n", super_poder2);


    printf("E com isso, temos abaixo, a carta vencedora de cada atributo, a carta com mais atrubutos melhores que a outra é a carta vencedora\n\n");

    // Comparar os dados cadastrados
    if (populacao1 > populacao2)
    printf("População: %s\n", codigo_da_carta1);
    else
    printf("População: %s\n", codigo_da_carta2);

    if (area1 > area2)
    printf("Area em Km²: %s\n", codigo_da_carta1);
    else
    printf("Area em Km²: %s\n", codigo_da_carta2);

    if (densidade_populacional1 < densidade_populacional2)
    printf("Densidade Populacional: %s\n", codigo_da_carta1);
    else
    printf("Densidade Populacional: %s\n", codigo_da_carta2);

    if (pib1 > pib2)
    printf("PIB: %s\n", codigo_da_carta1);
    else
    printf("PIB: %s\n", codigo_da_carta2);

    if(pib_per_capita1 > pib_per_capita2)
    printf("PIB per Capita: %s\n", codigo_da_carta1);
    else 
    printf("PIB per Capita: %s\n", codigo_da_carta2);
    
    if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2)
    printf("Pontos turísticos: %s\n", codigo_da_carta1);
    else
    printf("Pontos turísticos: %s\n", codigo_da_carta2);

    if (super_poder1 > super_poder2)
    printf("Super Poder: %s\n\n", codigo_da_carta1);
    else
    printf("Super Poder: %s\n\n", codigo_da_carta2);


    // Finaliza o programa
    return 0;
}