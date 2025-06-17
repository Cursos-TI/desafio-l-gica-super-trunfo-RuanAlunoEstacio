#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    int nPontosTuristicos1, nPontosTuristicos2, escolhaAtributo1, escolhaAtributo2;
    unsigned int populacao1, populacao2;
    float area1, pIB1, densidade1, pIBpC1, super1, area2, pIB2, densidade2, pIBpC2, super2;
    char nome1[30]; 
    char nome2[30];
    char codigoCidade1[4];
    char codigoCidade2[4]; 
    char letraEstado1;
    char letraEstado2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    
    //Usuário insere os dados da primeira carta
    printf("Digite a letra do estado da primeira carta: ");
    scanf(" %c", &letraEstado1);

    printf("Digite o código da primeira carta: ");
    scanf(" %s", codigoCidade1);

    printf("Digite o nome sem espaços da cidade da primeira carta: ");
    scanf(" %s", nome1);

    printf("Digite a população da primeira carta: ");
    scanf(" %d", &populacao1);

    printf("Digite a área em km² da primeira carta: ");
    scanf(" %f", &area1);

    printf("Digite o PIB em bilhões da primeira carta: ");
    scanf(" %f", &pIB1);

    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf(" %d", &nPontosTuristicos1);

    //Cálculo e conversão dos dados de densidade demográfica e PIB per Capita da carta 1
    densidade1 = (float)populacao1/area1;
    //multiplicando o pib por 1 bilhão antes de fazer of cálculo
    pIBpC1 = (pIB1*(float)1000000000)/(float)populacao1;
    //Cálculo do super poder
    super1 = (float)populacao1 + (float)nPontosTuristicos1 + (1/densidade1) + pIB1 + area1 + pIBpC1;
    
    //Usuário insere os dados da segunda carta 
    printf("Digite a letra do estado da segunda carta: ");
    scanf(" %c", &letraEstado2);

    printf("Digite o código da segunda carta: ");
    scanf(" %s", codigoCidade2);

    printf("Digite o nome sem espaços da cidade da segunda carta: ");
    scanf(" %s", nome2);

    printf("Digite a população da segunda carta: ");
    scanf(" %d", &populacao2);

    printf("Digite a área em km² da segunda carta: ");
    scanf(" %f", &area2);

    printf("Digite o PIB em bilhões da segunda carta: ");
    scanf(" %f", &pIB2);

    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf(" %d", &nPontosTuristicos2);
    
    //Cálculo e conversão dos dados de densidade demográfica e PIB per Capita da carta 2
    densidade2 = (float)populacao2/area2;
    //multiplicando o pib por 1 bilhão antes de fazer of cálculo
    pIBpC2 = pIB2*1000000000/(float)populacao2;
    //Cálculo do super poder
    super2 = (float)populacao2 + (float)nPontosTuristicos2 + (1/densidade2) + pIB2 + area2 + pIBpC2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    //Escolha do primeiro atributo a ser comparado
    printf("\n 1 - População\n 2 - Área\n 3 - PIB\n 4 - Pontos Turísticos\n 5 - Densidade demográfica\n 6 - PIB per Capita\n 7 - Super Poder\nEscolha qual atributo deseja comparar: ");
    scanf("%d", &escolhaAtributo1);
    
    //Exibe o primeiro atributo escolhido para comparação e o valor de cada carta para o mesmo
    switch(escolhaAtributo1){
        case 1:
            printf("\nComparação de cartas (Atributo: População):\n - Carta 1 - %s : %u habitantes\n - Carta 2 - %s : %u habitantes\n", nome1, populacao1, nome2, populacao2);
            if(populacao1>populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if(populacao1<populacao2){
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate, ambas as cartas têm o mesmo valor\n");
            }
            break;
        case 2:
            printf("\nComparação de cartas (Atributo: Área):\n - Carta 1 - %s : %.2f km²\n - Carta 2 - %s : %.2f km²\n", nome1, area1, nome2, area2);
            if(area1>area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if(area1<area2){
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate, ambas as cartas têm o mesmo valor\n");
            }
            break;
        case 3:
            printf("\nComparação de cartas (Atributo: PIB):\n - Carta 1 - %s : %.2f bilhões de reais\n - Carta 2 - %s : %.2f bilhões de reais\n", nome1, pIB1, nome2, pIB2);
            if(pIB1>pIB2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if(pIB1<pIB2){
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate, ambas as cartas têm o mesmo valor\n");
            }
            break;
        case 4:
            printf("\nComparação de cartas (Atributo: Pontos Turísticos):\n - Carta 1 - %s : %d\n - Carta 2 - %s : %d\n", nome1, nPontosTuristicos1, nome2, nPontosTuristicos2);
            if(nPontosTuristicos1>nPontosTuristicos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if(nPontosTuristicos1<nPontosTuristicos2){
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate, ambas as cartas têm o mesmo valor\n");
            }
            break;
        case 5:
            printf("\nComparação de cartas (Atributo: Densidade demográfica):\n - Carta 1 - %s : %.2f hab/km²\n - Carta 2 - %s : %.2f hab/km²\n", nome1, densidade1, nome2, densidade2);
            if(densidade1<densidade2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if(densidade1>densidade2){
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate, ambas as cartas têm o mesmo valor\n");
            }
            break;
        case 6:
            printf("\nComparação de cartas (Atributo: PIB per Capita):\n - Carta 1 - %s : %.2f  reais\n - Carta 2 - %s : %.2f  reais\n", nome1, pIBpC1, nome2, pIBpC2);
            if(pIBpC1>pIBpC2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if(pIBpC1<pIBpC2){
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate, ambas as cartas têm o mesmo valor\n");
            }
            break;
        case 7:
            printf("\nComparação de cartas (Atributo: Super Poder):\n - Carta 1 - %s : %.2f\n - Carta 2 - %s : %.2f\n", nome1, super1, nome2, super2);
            if(super1>super2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if(super1<super2){
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate, ambas as cartas têm o mesmo valor\n");
            }
            break;
        default:
            printf("Opção inválida");
    }

    //Escolha do segundo Atributo, não pode ser igual ao primeiro
    if(escolhaAtributo1!=1) {printf("\n 1 - População");}
    if(escolhaAtributo1!=2) {printf("\n 2 - Área");}
    if(escolhaAtributo1!=3) {printf("\n 3 - PIB");}
    if(escolhaAtributo1!=4) {printf("\n 4 - Pontos Turísticos");}
    if(escolhaAtributo1!=5) {printf("\n 5 - Densidade demográfica");}
    if(escolhaAtributo1!=6) {printf("\n 6 - PIB per Capita");}
    if(escolhaAtributo1!=7) {printf("\n 7 - Super Poder");}

    printf("\nEscolha o segundo atributo: ");
    scanf("%d", &escolhaAtributo2);

    if(escolhaAtributo2!=escolhaAtributo1) {
        switch(escolhaAtributo2){
        case 1:
            printf("\nComparação de cartas (Atributo: População):\n - Carta 1 - %s : %u habitantes\n - Carta 2 - %s : %u habitantes\n", nome1, populacao1, nome2, populacao2);
            if(populacao1>populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if(populacao1<populacao2){
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate, ambas as cartas têm o mesmo valor\n");
            }
            break;
        case 2:
            printf("\nComparação de cartas (Atributo: Área):\n - Carta 1 - %s : %.2f km²\n - Carta 2 - %s : %.2f km²\n", nome1, area1, nome2, area2);
            if(area1>area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if(area1<area2){
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate, ambas as cartas têm o mesmo valor\n");
            }
            break;
        case 3:
            printf("\nComparação de cartas (Atributo: PIB):\n - Carta 1 - %s : %.2f bilhões de reais\n - Carta 2 - %s : %.2f bilhões de reais\n", nome1, pIB1, nome2, pIB2);
            if(pIB1>pIB2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if(pIB1<pIB2){
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate, ambas as cartas têm o mesmo valor\n");
            }
            break;
        case 4:
            printf("\nComparação de cartas (Atributo: Pontos Turísticos):\n - Carta 1 - %s : %d\n - Carta 2 - %s : %d\n", nome1, nPontosTuristicos1, nome2, nPontosTuristicos2);
            if(nPontosTuristicos1>nPontosTuristicos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if(nPontosTuristicos1<nPontosTuristicos2){
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate, ambas as cartas têm o mesmo valor\n");
            }
            break;
        case 5:
            printf("\nComparação de cartas (Atributo: Densidade demográfica):\n - Carta 1 - %s : %.2f hab/km²\n - Carta 2 - %s : %.2f hab/km²\n", nome1, densidade1, nome2, densidade2);
            if(densidade1<densidade2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if(densidade1>densidade2){
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate, ambas as cartas têm o mesmo valor\n");
            }
            break;
        case 6:
            printf("\nComparação de cartas (Atributo: PIB per Capita):\n - Carta 1 - %s : %.2f  reais\n - Carta 2 - %s : %.2f  reais\n", nome1, pIBpC1, nome2, pIBpC2);
            if(pIBpC1>pIBpC2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if(pIBpC1<pIBpC2){
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate, ambas as cartas têm o mesmo valor\n");
            }
            break;
        case 7:
            printf("\nComparação de cartas (Atributo: Super Poder):\n - Carta 1 - %s : %.2f\n - Carta 2 - %s : %.2f\n", nome1, super1, nome2, super2);
            if(super1>super2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if(super1<super2){
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate, ambas as cartas têm o mesmo valor\n");
            }
            break;
        default:
            printf("Opção inválida");
    }
    } else {
        printf("\nVocê não pode escolher o mesmo atributo, fim de jogo!\n\n");
    }

    return 0;
}
