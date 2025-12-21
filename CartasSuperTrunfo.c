#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado;
  char Código[20];
  char Nome[30];
  int Populacao, Pontos;
  double Area, PIB;
  double Densidade;
  double xcapita; 
    // Área para entrada de dados
      printf("Cadastre sua carta\n");
      printf("Digite o Estado: \n");
      scanf("%c", &Estado);
      printf("Digite O Código: \n");
      scanf("%s", Código);
      printf("Digite o nome da cidade: \n");
      scanf("%s", Nome);
      printf("Digite a População: \n");
      scanf("%d", &Populacao);
      printf("Digite o Número de Pontos Turísticos: \n");
      scanf("%d", &Pontos);
      printf("Digite a Área: \n");
      scanf("%lf", &Area);
      printf("Digite o PIB: \n");
      scanf("%lf", &PIB);

      Densidade = (double) (Populacao / Area );
      xcapita = (double) (PIB / Populacao);


        // Área para exibição dos dados da cidade
        printf("Carta 1\n - Estado: %c\n - Código: %s\n - Nome da Cidade: %s\n - População: %d\n - Pontos Turísticos: %d\n - Área: %.2lfkm²\n - PIB: %.2lfbilhões de reais\n - Densidade Populacional é: %.2lf\n - PIB per Capita é: %.2lf\n", Estado, Código, Nome, Populacao, Pontos, Area, PIB, Densidade, xcapita);

      printf("Cadastre sua carta\n");
      printf("Digite o Estado: \n");
      scanf(" %c", &Estado);
      printf("Digite O Código: \n");
      scanf("%s", Código);
      printf("Digite o nome da cidade: \n");
      scanf("%s", Nome);
      printf("Digite a População: \n");
      scanf("%d", &Populacao);
      printf("Digite o Número de Pontos Turísticos: \n");
      scanf("%d", &Pontos);
      printf("Digite a Área: \n");
      scanf("%lf", &Area);
      printf("Digite o PIB: \n");
      scanf("%lf", &PIB);

      Densidade = (double) (Populacao / Area );
      xcapita = (double) (PIB / Populacao);

      printf("Carta 2\n - Estado: %c\n - Código: %s\n - Nome da Cidade: %s\n - População: %d\n - Pontos Turísticos: %d\n - Área: %.2lfkm²\n - PIB: %.2lfbilhões de reais\n - Densidade Populacional é: %.2lf\n - PIB per Capita é: %.2lf\n", Estado, Código, Nome, Populacao, Pontos, Area, PIB, Densidade, xcapita);

        return 0;


        } 
