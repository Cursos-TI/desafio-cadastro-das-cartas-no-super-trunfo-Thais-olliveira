#include <stdio.h>

int main() {

    //Definição das variaveis para as duas cartas, sendo a segunda representada pelo número 2.

    char cidade[255], cidade2[255];
    char estado[2], estado2[2], codigo[4], codigo2[4];
    int  pontos_turisticos, pontos_turisticos2;
    float area, area2, pib, pib2, densidade_populacional, densidade_populacional2, pibpercapta, pibpercapta2;
    float superpoder1, superpoder2;
    int resultadosuper, resultadopop, resultadoarea, resultadopib, resultadopt, 
    resultadodensidadepopulacional, resultadopibpercapita;

    unsigned long int populacao, populacao2; //Mestre: Transformação da variavel de população

    //Solicitação e armazenamento dos dados para a primeira carta.

    printf("**Digite os dados da primeira carta** \n Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf("%s", estado); // O & (operador de endereço) não é usado com %s.

    printf ("Código (digite a letra do estado seguida de um número de 01 a 04): \n");
    scanf ("%s", codigo); //use %s ao invés de %c, pois isso simboliza que você esta utilizando uma string.

    printf ("Nome da cidade: \n");
    scanf("%s", cidade);

    printf ("População: \n");
    scanf("%lu", &populacao);

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
    scanf("%lu", &populacao2);

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
        printf ("População:%lu \n", populacao);
        printf ("Área:%.2f km² \n", area);
        printf ("PIB:%.2f bilhões de reais\n", pib);
        printf ("Quantidade de Pontos Túristicos:%d \n", pontos_turisticos);
        printf ("Densidade Populacional:%.2f hab/km²\n", densidade_populacional);
        printf ("PIB per capita:%.2f reais\n", pibpercapta);

    //Exibir na tela os dados da segunda carta:

        printf ("\n**Carta 2:**\n");
        printf ("Estado:%s \n", estado2);
        printf ("Código:%s \n", codigo2);
        printf ("Nome da Cidade:%s \n", cidade2);
        printf ("População:%lu \n", populacao2);
        printf ("Área:%.2f km² \n", area2);
        printf ("PIB:%.2f bilhões de reais\n", pib2);
        printf ("Quantidade de Pontos Túristicos:%d \n", pontos_turisticos2);
        printf ("Densidade Populacional:%.2f hab/km²\n", densidade_populacional2);
        printf ("PIB per capita:%.2f reais\n", pibpercapta2);
  
    
     // Calcular comparação de cartas, a carta com maior valor ganha, exceto densidade populacional
    
      printf ("\nComparação de cartas: \n");

        resultadopop = (populacao > populacao2);
        printf ("População: %d \n", resultadopop);

        resultadoarea = (area > area2);
        printf ("Área: %d \n", resultadoarea);

        resultadopib = (pib > pib2);
        printf ("PIB: %d \n", resultadopib);

        resultadopt = (pontos_turisticos > pontos_turisticos2);
        printf ("Ponto Turistico: %d \n", resultadopt);

        resultadodensidadepopulacional = (densidade_populacional < densidade_populacional2);
        printf ("Densidade Populacional: %d \n", resultadodensidadepopulacional); //Densidade populacional a carta com menor valor ganha
        
        resultadopibpercapita = (pibpercapta > pibpercapta2);
        printf ("PIB per capita: %d \n", resultadopibpercapita);
        
        // Calcular o super poder // Conversão de int para float (pontos turisticos);

        superpoder1 = populacao + area + pib + (float)pontos_turisticos + pibpercapta + (1/densidade_populacional);
        superpoder2 = populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pibpercapta2 + (1/densidade_populacional2);
        
        resultadosuper = superpoder1 > superpoder2;
        printf ("Super Poder: %d \n", resultadosuper);

    //Comparando cartas do Super Trunfo, o valor da população da carta 1 com população da carta 2
    

    printf ("\nComparação de cartas (Atributo: População) \n");

    printf("\nCarta 1 - (%s): %lu", cidade, populacao);
    printf("\nCarta 2 - (%s): %lu", cidade2, populacao2);

//Exibe o resultado de qual das cartas ganhou com maior valor para a variavel população

        if (populacao > populacao2){
    printf("\n Resultado: Carta 1 (%s) venceu!", cidade);
    } else {
    printf("\nResultado: Carta 2 (%s) venceu", cidade2);
    }

    return 0;
}
