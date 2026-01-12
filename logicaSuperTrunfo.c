#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
     char estado[50], codigo[50], nome[50], estado2[50], codigo2[50], nome2[50], cidadeVencedora[50];
     int pontost, pontost2;
     unsigned long int populacao, populacao2;
     float area, pib, densidade, perCapita, area2, pib2, densidade2, perCapita2, superP, superP2;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
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



    printf("Carta 2 \n");

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
    perCapita = pib / populacao;
    densidade2 = populacao2 / area2;
    perCapita2 = pib2 / populacao2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

     
     if (area > area2) {
        strcpy(cidadeVencedora, nome);
        printf("Cidade 1 tem a maior área em Km².\n");
     } else {
        strcpy(cidadeVencedora, nome2);
        printf("Cidade 2 tem a maior área em Km².\n");
     }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    printf("Carta 1 - %s\n:", nome);
    printf("Carta 2 - %s\n:", nome2);
    printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
