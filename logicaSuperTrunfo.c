#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
     char estado[50], codigo[50], nome[50], estado2[50], codigo2[50], nome2[50], cidadeVencedora[50];
     int pontost, pontost2;
     int populacao, populacao2;
     float area, pib, densidade, perCapita, area2, pib2, densidade2, perCapita2, superP, superP2;

    
    printf("Insira os valores das cartas:\n\n");
    
    printf("Carta 1 \n");

    printf("Digite o Estado: ");
    scanf("%s", estado);

    printf("Digite o Código: ");
    scanf("%s", codigo);

    printf("Digite o nome da Cidade: ");
    getchar();
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';
    
    printf("Digite o número da população: ");
    scanf("%d", &populacao);

    printf("Digite a área em Km²: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontost);



    printf("\nCarta 2 \n");

    printf("Digite o Estado: ");
    scanf("%s", estado2);

    printf("Digite o Código: ");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade: ");
    getchar();
    fgets(nome2, 50, stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    printf("Digite o número da população: ");
    scanf("%d", &populacao2);

    printf("Digite a área em Km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontost2);

    densidade = populacao / area;
    densidade2 = populacao2 / area2;

    
   int opcao;

   printf("\nEscolha qual atributo será usado para comparar as cartas:\n");
   printf("1. População\n");
   printf("2. Área\n");
   printf("3. PIB\n");
   printf("4. Número de pontos turísticos\n");
   printf("5. Densidade demográfica\n");
   scanf("%d\n", &opcao);

   switch (opcao) {
      case 1:
      printf("%s vs %s\n", nome, nome2);
      printf("Atributo população\n");
      printf("População de %s: %d\n", nome, populacao);
      printf("População de %s: %d\n", nome2, populacao2);
      if (populacao > populacao2) {
         printf("Carta 1 venceu!\n");
      } else if ( populacao < populacao2) {
         printf("Carta 2 venceu!\n");
      } else {
         printf("Houve um empate! \n");
      }
      break;

      case 2:
      printf("%s vs %s\n", nome, nome2);
      printf("Atributo Àrea(km²)\n");
      printf("Àrea de %s: %f\n", nome, area);
      printf("Àrea de %s: %f\n", nome2, area2);
      if (area > area2) {
         printf("Carta 1 venceu!\n");
      } else if ( area < area2) {
         printf("Carta 2 venceu!\n");
      } else {
         printf("Houve um empate! \n");
      }
      break;

      case 3:
      printf("%s vs %s\n", nome, nome2);
      printf("Atributo PIB\n");
      printf("PIB de %s: %f\n", nome, pib);
      printf("PIB de %s: %f\n", nome2, pib2);
      if (pib > pib2) {
         printf("Carta 1 venceu!\n");
      } else if ( pib < pib2) {
         printf("Carta 2 venceu!\n");
      } else {
         printf("Houve um empate! \n");
      }
      break;

      case 4:
      printf("%s vs %s\n", nome, nome2);
      printf("Atributo Pontos Turísticos\n");
      printf("Pontos Turísticos %s: %d\n", nome, pontost);
      printf("Pontos Turísticos %s: %d\n", nome2, pontost2);
      if (pontost > pontost2) {
         printf("Carta 1 venceu!\n");
      } else if ( pontost < pontost2) {
         printf("Carta 2 venceu!\n");
      } else {
         printf("Houve um empate! \n");
      }
      break;

      case 5:
      printf("%s vs %s\n", nome, nome2);
      printf("Atributo Densidade demográfica\n");
      printf("Densidade demográfica de %s: %d\n", nome, densidade);
      printf("Densidade demográfica de %s: %d\n", nome2, densidade2);
      if (densidade < densidade2) {
         printf("Carta 1 venceu!\n");
      } else if ( densidade > densidade2) {
         printf("Carta 2 venceu!\n");
      } else {
         printf("Houve um empate! \n");
      }
      break;
   }     
     

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    

    return 0;
}
