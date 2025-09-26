#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades 
    char estado, estado1, codigo[4], codigo1[4], cidade[20], cidade1[20];
    int pontos, pontos1;
    unsigned long int populacao, populacao1;
    float area, area1, pib, pib1; 

    
    // Área para entrada de dados
  
    // === Carta 1 ===
    printf("Digite o estado: \n");
    scanf("%c", &estado);  

    printf("Digite o código: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    getchar();
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0'; 

    printf("Digite o tamanho da População: \n");
    scanf("%lu", &populacao);  
    
    printf("Digite a Área: \n");
    scanf("%f", &area);      

    printf("Digite o PIB: \n");
    scanf("%f", &pib);        

    printf("Digite o Número de pontos turísticos: \n");
    scanf("%d", &pontos); 
    
    // Cálculo de densidade e PIB per capita Carta 1
    float densidade = (float) populacao / area;
    float capita = (pib * 1000000000) / populacao;
    float superpoder = (float) populacao + area + pib + pontos + densidade + capita;


    // === Carta 2 ===
    printf("Digite o estado: \n");
    getchar(); // ← ADICIONE ESTA LINHA para limpar o buffer
    scanf("%c", &estado1);

    printf("Digite o código: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    getchar(); // Este já estava correto
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';
   
    printf("Digite o tamanho da População: \n");
    scanf("%lu", &populacao1); 
    
    printf("Digite a Área: \n");
    scanf("%f", &area1);      

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);       

    printf("Digite o Número de pontos turísticos: \n");
    scanf("%d", &pontos1); 

    // Cálculo de densidade e PIB per capita Carta 2
    float densidade1 = (float) populacao1 / area1;
    float capita1 = (pib1 * 1000000000) / populacao1;
    float superpoder1 = (float) populacao1 + area1 + pib1 + pontos1;


    // Área para exibição dos dados da cidade
    
    // === Carta 1 ===
    printf("\nCarta 1: \n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %lu \n", populacao);
    printf("Área: %.2f KM²\n", area);      
    printf("PIB: %.2f bilhões de reais \n", pib); 
    printf("Número de Pontos Turísticos: %d \n", pontos);
    printf("Densidade populacional: %.2f hab/km² \n", densidade);
    printf("PIB per capita: %.2f reais \n", capita);
    printf("Super Poder: %.2f \n", superpoder);
    
    // === Carta 2 ===
    printf("\nCarta 2: \n");               
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f KM² \n", area1);     
    printf("PIB: %.2f bilhões de reais \n", pib1); 
    printf("Número de Pontos Turísticos: %d \n", pontos1);
    printf("Densidade populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per capita: %.2f reais \n", capita1);
    printf("Super Poder: %.2f \n", superpoder1);

    // === Comparação das Cartas ===
    
    printf("\nComparação das Cartas:\n");
    printf("População: Carta 1 Venceu %d\n",populacao >= populacao1);
    printf("Área: Carta 1 Venceu %d\n",area >= area1);
    printf("PIB: Carta 1 Venceu %d\n", pib >= pib1);
    printf("Pontos Turísticos: Carta 1 Venceu %d\n",pontos >= pontos1);
    printf("Densidade Populacional: Carta 2 Venceu %d\n",densidade <= densidade1);
    printf("PIB per capita: Carta 1 Venceu %d\n", capita >= capita1);
    printf("Super Poder: Carta 1 Venceu %d\n", superpoder >= superpoder1);
    
    return 0;

}