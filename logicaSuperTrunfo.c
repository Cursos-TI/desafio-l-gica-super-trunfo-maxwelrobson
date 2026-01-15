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

    
   int op1, op2;

    printf("\nEscolha o PRIMEIRO atributo:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    scanf("%d", &op1);

    printf("\nEscolha o SEGUNDO atributo:\n");
    if (op1 != 1) printf("1. Populacao\n");
    if (op1 != 2) printf("2. Area\n");
    if (op1 != 3) printf("3. PIB\n");
    if (op1 != 4) printf("4. Pontos Turisticos\n");
    if (op1 != 5) printf("5. Densidade Demografica\n");
    scanf("%d", &op2);

    if (op1 == op2) {
        printf("\nErro: voce nao pode escolher o mesmo atributo duas vezes.\n");
        return 0;
    }

    float v1a = 0, v1b = 0;
    float v2a = 0, v2b = 0;

    switch (op1) {
        case 1: v1a = populacao; v2a = populacao2; break;
        case 2: v1a = area; v2a = area2; break;
        case 3: v1a = pib; v2a = pib2; break;
        case 4: v1a = pontost; v2a = pontost2; break;
        case 5: v1a = densidade; v2a = densidade2; break;
        default: printf("Opcao invalida.\n"); return 0;
    }

    switch (op2) {
        case 1: v1b = populacao; v2b = populacao2; break;
        case 2: v1b = area; v2b = area2; break;
        case 3: v1b = pib; v2b = pib2; break;
        case 4: v1b = pontost; v2b = pontost2; break;
        case 5: v1b = densidade; v2b = densidade2; break;
        default: printf("Opcao invalida.\n"); return 0;
    }

    float soma1 = v1a + v1b;
    float soma2 = v2a + v2b;

    printf("\n=== RESULTADO ===\n");
    printf("%s vs %s\n\n", nome, nome2);

    printf("Valores da Carta 1: %.2f e %.2f\n", v1a, v1b);
    printf("Valores da Carta 2: %.2f e %.2f\n\n", v2a, v2b);

    printf("Soma %s: %.2f\n", nome, soma1);
    printf("Soma %s: %.2f\n\n", nome2, soma2);

    if (soma1 > soma2)
        printf("Vencedora: %s\n", nome);
    else if (soma2 > soma1)
        printf("Vencedora: %s\n", nome2);
    else
        printf("Empate!\n");

    return 0;
}
