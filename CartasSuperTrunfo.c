#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {

    //Definição das variaveis para as duas cartas, sendo a segunda representada pelo número 2.

    char estado[1], estado2[1], codigo[3], codigo2[3], cidade, cidade2;
    int populacao, populacao2, pontosturisticos, pontosturisticos2;
    float area, area2, pib, pib2;

    //Solicitação e armazenamentos dos dados para a primeira carta.

    printf ("**Digite os dados da primeira carta** \n Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf ("%s", &estado);

    printf ("Código(digite a letra do estado seguida de um número de 01 a 04): \n");
    scanf ("%s", &codigo);

    printf ("Nome da cidade: \n");
    scanf("%s", &cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf ("Área (em km²): \n");
    scanf ("%f", &area);

    printf ("Pib: \n");
    scanf ("%f", &pib);

    printf ("Digite a quantidade de pontos turisticos: \n");
    scanf ("%d", &pontosturisticos);

    //Solicitação e armazenamentos dos dados para a segunda carta.

    printf ("**Digite os dados da segunda carta** \n Digite uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf ("%s", &estado2);

    printf ("Código (digite a letra do estado seguida de um número de 01 a 04): \n");
    scanf ("%s", &codigo2);

    printf ("Nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf ("Área (em km²): \n");
    scanf ("%f", &area2);

    printf ("Pib: \n");
    scanf ("%f", &pib2);

    printf ("Digite a quantidade de pontos turisticos: \n");
    scanf ("%d", &pontosturisticos2);

    //Exibir na tela os dados da primeira carta

    printf ("**Carta 1:** \n Estado:%s\n Codigo:%s \n Cidade:%c \n Populacao:%d \n Area:%f \n PIB:%f \n Pontos Turisticos:%d \n", 
        estado, codigo, cidade, populacao, area, pib, pontosturisticos);

        printf ("**Carta 2:** \n Estado:%s\n Codigo:%s \n Cidade:%c \n Populacao:%d \n Area:%f \n PIB:%f \n Pontos Turisticos:%d", 
            estado2, codigo2, cidade2, populacao2, area2, pib2, pontosturisticos2);
  

    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
