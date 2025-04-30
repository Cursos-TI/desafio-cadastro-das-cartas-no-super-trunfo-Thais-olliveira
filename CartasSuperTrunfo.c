#include <stdio.h>

int main() {

    //Definição das variaveis para as duas cartas, sendo a segunda representada pelo número 2.

    char cidade[255], cidade2[255];
    char estado[2], estado2[2], codigo[4], codigo2[4];
    int populacao, populacao2, pontos_turisticos, pontos_turisticos2;
    float area, area2, pib, pib2, densidade_populacional, densidade_populacional2, pibpercapta, pibpercapta2;

    //Solicitação e armazenamento dos dados para a primeira carta.

    printf ("**Digite os dados da primeira carta** \n Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf ("%s", estado); // O & (operador de endereço) não é usado com %s.

    printf ("Código (digite a letra do estado seguida de um número de 01 a 04): \n");
    scanf ("%s", codigo); //use %s ao invés de %c, pois isso simboliza que você esta utilizando uma string.

    printf ("Nome da cidade: \n");
    scanf("%s", cidade);

    printf ("População: \n");
    scanf("%d", &populacao);

    printf ("Área (em km²): \n");
    scanf ("%f", &area);
    densidade_populacional = populacao / area; //calculo da densidade populacional carta 1


    printf ("PIB: \n");
    scanf ("%f", &pib);
    pibpercapta = pib / populacao; //calculo do PIB per capita carta 2

    printf ("Digite a quantidade de pontos turisticos: \n");
    scanf ("%d", &pontos_turisticos);

    //Solicitação e armazenamentos dos dados para a segunda carta.

    printf ("\n**Digite os dados da segunda carta** \n Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf ("%s", estado2);

    printf ("Código (digite a letra do estado seguida de um número de 01 a 04): \n");
    scanf ("%s", codigo2); //use %s ao invés de %c, pois isso simboliza que você esta utilizando uma string.

    printf ("Nome da cidade: \n");
    scanf("%s", cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf ("Área (em km²): \n");
    scanf ("%f", &area2);
    densidade_populacional2 = populacao2 / area2; //calculo da densidade populacional carta 2


    printf ("PIB: \n");
    scanf ("%f", &pib2);
    pibpercapta2 = pib2 / populacao2; //calculo do PIB per capita carta 2

    printf ("Digite a quantidade de pontos turisticos: \n");
    scanf ("%d", &pontos_turisticos2);

    //Exibir na tela os dados da primeira carta:

        printf ("\n**Carta 1:**\n");
        printf ("Estado:%s \n", estado);
        printf ("Código:%s \n", codigo);
        printf ("Nome da Cidade:%s \n", cidade);
        printf ("População:%d \n", populacao);
        printf ("Área:%f km² \n", area);
        printf ("PIB:%f bilhões de reais\n", pib);
        printf ("Quantidade de Pontos Túristicos:%d \n", pontos_turisticos);
        printf ("Densidade Populacional:%f hab/km²\n", densidade_populacional);
        printf ("PIB per capita:%f reais\n", pibpercapta);

    //Exibir na tela os dados da segunda carta:

        printf ("\n**Carta 2:**\n");
        printf ("Estado:%s \n", estado2);
        printf ("Código:%s \n", codigo2);
        printf ("Nome da Cidade:%s \n", cidade2);
        printf ("População:%d \n", populacao2);
        printf ("Área:%f km² \n", area2);
        printf ("PIB:%f bilhões de reais\n", pib2);
        printf ("Quantidade de Pontos Túristicos:%d \n", pontos_turisticos2);
        printf ("Densidade Populacional:%f hab/km²\n", densidade_populacional2);
        printf ("PIB per capita:%f reais\n", pibpercapta2);
  

    return 0;
}
