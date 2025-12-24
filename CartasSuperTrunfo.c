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
  double superpoder;


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
superpoder = Populacao + Area + PIB + Densidade + xcapita + Pontos;
 
        // Área para exibição dos dados da cidade
        printf("Carta 1\n - Estado: %c\n - Código: %s\n - Nome da Cidade: %s\n - População: %d\n - Pontos Turísticos: %d\n - Área: %.2lfkm²\n - PIB: %.2lfbilhões de reais\n - Densidade Populacional é: %.2lf\n - PIB per Capita é: %.2lf - Super poder: %.2lf\n", Estado, Código, Nome, Populacao, Pontos, Area, PIB, Densidade, xcapita, superpoder);
int populacaoC1 = Populacao;
      double areaC1 = Area;
      double PIBC1 = PIB;
      int pontosC1 = Pontos;
      double densidadec1 = Densidade;
      double xcapitac1 = xcapita;
      double Superpoderc1 = superpoder;

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
      superpoder = Populacao + Area + PIB + Densidade + xcapita + Pontos;
      
      printf("Carta 2\n - Estado: %c\n - Código: %s\n - Nome da Cidade: %s\n - População: %d\n - Pontos Turísticos: %d\n - Área: %.2lfkm²\n - PIB: %.2lfbilhões de reais\n - Densidade Populacional é: %.2lf\n - PIB per Capita é: %.2lf Super poder: %.2f\n", Estado, Código, Nome, Populacao, Pontos, Area, PIB, Densidade, xcapita, superpoder);
int populacaoC2 = Populacao;
      double areaC2 = Area;
      double PIBC2 = PIB;
      int pontosC2 = Pontos;
      double densidadec2 = Densidade;
      double xcapitac2 = xcapita;
      double Superpoderc2 = superpoder;

printf(" Carta 1 venceu: %d\n", populacaoC1 > populacaoC2 );
printf("Carta 1 venceu: %d\n", areaC1 > areaC2);
printf("Carta 1 venceu: %d\n", PIBC1 > PIBC2);
printf("Carta 1 venceu: %d\n", pontosC1 > pontosC2);
printf("Carta 1 venceu: %d\n", densidadec1 > densidadec2);
printf("Carta 1 venceu: %d\n", xcapitac1 > xcapitac2);
printf("Carta 1 venceu: %d\n", Superpoderc1 > Superpoderc2);
        return 0;


        } 
