#include <stdio.h>

int main() {

    int opcao_inicio;
    
    //Exibir mensagem de boas-vindas e introduzir o jogo
    printf("Bem vindo ao Super Trunfo!\n");
    printf("1. Começar jogo\n");
    printf("2. Ver as regras antes de começar\n");
    printf("3. Sair\n\n");
    scanf("%d", &opcao_inicio);
    printf("\n");


   //Exibir as regras do jogo caso sejam requerida
    switch (opcao_inicio)
    {
    case 2:
    printf("Para começar, você irá cadastrar duas cartas, com os dados que o sistema pedir\n");
    printf("Depois, o sistema irá comparar os dados das duas cartas, e a carta que tiver mais atributos melhores que a outra, será a carta vencedora\n");
    printf("Você poderá ver cada atributo que cada carta venceu, apenas selecione o respectivo atributo que quer visualizar ao final do jogo\n\n");
    
    case 1:
    printf("Cadastre os dados da primeira carta: \n\n");


    //Declaração das variáveis
    char nome_do_pais1[23];
    unsigned long int populacao1;
    float area1;
    float densidade_populacional1;
    float pib1;
    float pib_per_capita1;
    int numero_de_pontos_turisticos1;
  
    
    // Solicitar e armazenar os dados do usuário
    printf("Digite o nome do País: \n");
    scanf("%s", nome_do_pais1);

    printf("Digite a população:\n");
    scanf("%lu", &populacao1);

    printf("Digite a área em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1); 

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos1);
    printf("\n");

    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    
    printf("Os dados da primeira carta foram cadastrados com sucesso!!\n\n");


    printf("Agora cadastre os dados da segunda carta \n\n");

    char nome_do_pais2[23];
    unsigned long int populacao2;
    float area2;
    float densidade_populacional2;
    float pib2;
    float pib_per_capita2;
    int numero_de_pontos_turisticos2;


    printf("Digite o nome do País: \n");
    scanf("%s",  nome_do_pais2);

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

    printf("Os dados da segunda carta foram cadastrados com sucesso!!\n\n");
    
    
    printf("Agora que ambas as cartas foram cadastradas, escolha o atributo que quer comparar entre as duas:\n\n");

   
    int opcao_resultado;
    
    printf("1. População\n");
    printf("2. Área em Km²\n");
    printf("3. Densidade Populacional\n");
    printf("4. PIB\n");
    printf("5. PIB per Capita\n");
    printf("6. Número de pontos turísticos\n\n");
    scanf("%d", &opcao_resultado);
    printf("\n");

    //Comparação dos atributos
    switch (opcao_resultado)
    {
    case 1:
    printf("População de %s: %lu\n", nome_do_pais1, populacao1);
    printf("População de %s: %lu\n\n", nome_do_pais2, populacao2);

    if (populacao1 > populacao2) {
    printf("Carta vendedora: %s\n\n", nome_do_pais1);
    } else {
    printf("Carta vendedora: %s\n\n", nome_do_pais2);
    }

    break;

    case 2:
    printf("Área em Km² de %s: %s\n", nome_do_pais1, area1);
    printf("Área em Km² de %s: %s\n\n", nome_do_pais2, area2);

    if (area1 > area2) {
    printf("Carta vendedora: %s\n\n", nome_do_pais1);
    } else {
    printf("Carta vendedora: %s\n\n", nome_do_pais2);
    }

    break;

    case 3:
    printf("Densidade Populacional de %s: %.2f\n", nome_do_pais1, densidade_populacional1);
    printf("Densidade Populacional de %s: %.2f\n\n", nome_do_pais2, densidade_populacional2);

    if (densidade_populacional1 < densidade_populacional2) {
    printf("Carta vendedora: %s\n\n", nome_do_pais1);
    } else {
    printf("Carta vendedora: %s\n\n", nome_do_pais2);
    }

    break;

    case 4:
    printf("Pib de %s: %2.f\n", nome_do_pais1, pib1);
    printf("Pib de %s: %2.f\n\n", nome_do_pais2, pib2);

    if (pib1 > pib2){
    printf("Carta vendedora: %s\n\n", nome_do_pais1);
    } else {
    printf("Carta vendedora: %s\n\n", nome_do_pais2);
    }

    break;

    case 5:
    printf("PIB per Capita de %s: %2.f \n", nome_do_pais1, pib_per_capita1);
    printf("PIB per Capita de %s: %2.f \n\n", nome_do_pais2, pib_per_capita2);

    if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2){
    printf("Carta vendedora: %s\n\n", nome_do_pais1);
    } else {
    printf("Carta vendedora: %s\n\n", nome_do_pais2);
    }

    break;

    case 6:
    printf("Número de pontos turísticos de %s: %d \n", nome_do_pais1, numero_de_pontos_turisticos1);
    printf("Número de pontos turísticos de %s: %d \n\n", nome_do_pais2, numero_de_pontos_turisticos2);


    if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2){
    printf("Carta vendedora: %s\n\n", nome_do_pais1);
    } else {
    printf("Carta vendedora: %s\n\n", nome_do_pais2);
    }

    }

    }

    switch (opcao_inicio)
    {
    case 3:
    // Finaliza o programa
    return 0;

    break;
    }

    }