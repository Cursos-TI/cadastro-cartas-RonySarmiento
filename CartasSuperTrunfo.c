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
        printf("Carta 1\n - Estado: %c\n - Código: %s\n - Nome da Cidade: %s\n - População: %d\n - Pontos Turísticos: %d\n - Área: %.2lfkm²\n - PIB: %.2lfbilhões de reais\n - Densidade Populacional é: %.2lf\n - PIB per Capita é: %.2lf\n - Super poder: %.2lf\n", Estado, Código, Nome, Populacao, Pontos, Area, PIB, Densidade, xcapita, superpoder);
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
      
      printf("Carta 2\n - Estado: %c\n - Código: %s\n - Nome da Cidade: %s\n - População: %d\n - Pontos Turísticos: %d\n - Área: %.2lfkm²\n - PIB: %.2lfbilhões de reais\n - Densidade Populacional é: %.2lf\n - PIB per Capita é: %.2lf\n - Super poder: %.2f\n", Estado, Código, Nome, Populacao, Pontos, Area, PIB, Densidade, xcapita, superpoder);
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
printf("Carta 2 venceu: %d\n", densidadec1 < densidadec2);
printf("Carta 1 venceu: %d\n", xcapitac1 > xcapitac2);
printf("Carta 1 venceu: %d\n", Superpoderc1 > Superpoderc2);

double carta1 = areaC1 + PIBC1 + pontosC1 + densidadec1 + xcapitac1 + Superpoderc1; 
double carta2 = areaC2 + PIBC2 + pontosC2 + densidadec2 + xcapitac2 + Superpoderc2;
        if (carta1 > carta2) {
            printf("Carta 1 é a vencedora com pontuação total de: %.2lf\n", carta1);
        } else if (carta1 < carta2) {
            printf("Carta 2 é a vencedora com pontuação total de: %.2lf\n", carta2);
        } else {
            printf("Empate! Ambas as cartas têm a mesma pontuação total de: %.2lf\n", carta1);
        }
// Menu Interativo
printf("\n========== MENU DE COMPARAÇÃO ==========\n");
printf("Escolha qual atributo deseja comparar:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turísticos\n");
printf("5. Densidade Populacional\n");
printf("0. Sair\n");
printf("=========================================\n");
printf("Digite sua escolha: ");

int opcao;
scanf("%d", &opcao);

switch(opcao) {
      case 1: // População
            printf("\n--- COMPARAÇÃO DE POPULAÇÃO ---\n");
            if (populacaoC1 > populacaoC2) {
                  printf("Carta 1 venceu!\n");
                  printf("Carta 1: %d habitantes\n", populacaoC1);
                  printf("Carta 2: %d habitantes\n", populacaoC2);
            } else if (populacaoC1 < populacaoC2) {
                  printf("Carta 2 venceu!\n");
                  printf("Carta 1: %d habitantes\n", populacaoC1);
                  printf("Carta 2: %d habitantes\n", populacaoC2);
            } else {
                  printf("Empate!\n");
                  printf("Ambas com %d habitantes\n", populacaoC1);
            }
            break;

      case 2: // Área
            printf("\n--- COMPARAÇÃO DE ÁREA ---\n");
            if (areaC1 > areaC2) {
                  printf("Carta 1 venceu!\n");
                  printf("Carta 1: %.2lf km²\n", areaC1);
                  printf("Carta 2: %.2lf km²\n", areaC2);
            } else if (areaC1 < areaC2) {
                  printf("Carta 2 venceu!\n");
                  printf("Carta 1: %.2lf km²\n", areaC1);
                  printf("Carta 2: %.2lf km²\n", areaC2);
            } else {
                  printf("Empate!\n");
                  printf("Ambas com %.2lf km²\n", areaC1);
            }
            break;

      case 3: // PIB
            printf("\n--- COMPARAÇÃO DE PIB ---\n");
            if (PIBC1 > PIBC2) {
                  printf("Carta 1 venceu!\n");
                  printf("Carta 1: %.2lf bilhões\n", PIBC1);
                  printf("Carta 2: %.2lf bilhões\n", PIBC2);
            } else if (PIBC1 < PIBC2) {
                  printf("Carta 2 venceu!\n");
                  printf("Carta 1: %.2lf bilhões\n", PIBC1);
                  printf("Carta 2: %.2lf bilhões\n", PIBC2);
            } else {
                  printf("Empate!\n");
                  printf("Ambas com %.2lf bilhões\n", PIBC1);
            }
            break;

      case 4: // Pontos Turísticos
            printf("\n--- COMPARAÇÃO DE PONTOS TURÍSTICOS ---\n");
            if (pontosC1 > pontosC2) {
                  printf("Carta 1 venceu!\n");
                  printf("Carta 1: %d pontos\n", pontosC1);
                  printf("Carta 2: %d pontos\n", pontosC2);
            } else if (pontosC1 < pontosC2) {
                  printf("Carta 2 venceu!\n");
                  printf("Carta 1: %d pontos\n", pontosC1);
                  printf("Carta 2: %d pontos\n", pontosC2);
            } else {
                  printf("Empate!\n");
                  printf("Ambas com %d pontos\n", pontosC1);
            }
            break;

      case 5: // Densidade (MENOR vence)
            printf("\n--- COMPARAÇÃO DE DENSIDADE (MENOR VENCE) ---\n");
            if (densidadec1 < densidadec2) {
                  printf("Carta 1 venceu!\n");
                  printf("Carta 1: %.2lf hab/km²\n", densidadec1);
                  printf("Carta 2: %.2lf hab/km²\n", densidadec2);
            } else if (densidadec1 > densidadec2) {
                  printf("Carta 2 venceu!\n");
                  printf("Carta 1: %.2lf hab/km²\n", densidadec1);
                  printf("Carta 2: %.2lf hab/km²\n", densidadec2);
            } else {
                  printf("Empate!\n");
                  printf("Ambas com %.2lf hab/km²\n", densidadec1);
            }
            break;

      case 0:
            printf("Saindo do jogo...\n");
            break;

      default:
            printf("Opção inválida! Tente novamente.\n");
}

return 0;


        } 
