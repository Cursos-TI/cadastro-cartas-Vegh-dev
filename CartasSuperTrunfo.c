#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    // Carta1
    char estado;
    char codigo[4];
    char cidade[20];
    int  populacao;
    int  pontos;
    float area;
    float pib;
    

    // Carta2
    char estado1;
    char codigo1[4];
    char cidade1[20];
    int  populacao1;
    int  pontos1;
    float area1;
    float pib1;

 
  // Área para entrada de dados
  
    //  === Carta 1 ===
    printf("Digite o estado: \n");
    scanf("%c", &estado);  

    printf("Digite o código: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite o tamanho da População: \n");
    scanf("%d", &populacao);  
    
    printf("Digite a Área: \n");
    scanf("%f", &area);      

    printf("Digite o PIB: \n");
    scanf("%f", &pib);        

    printf("Digite o Número de pontos turísticos: \n");
    scanf("%d", &pontos);   

  // Foi necessário o uso de um while para limpar a memória do buffer pois o buffer conflitava e as variáveis se sobrepunham. 
    while(getchar() != '\n');

    
    // === Carta 2 ===
    printf("Digite o estado: \n");
    scanf("%c", &estado1);   

    printf("Digite o código: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite o tamanho da População: \n");
    scanf("%d", &populacao1); 
    printf("Digite a Área: \n");
    scanf("%f", &area1);      

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);       

    printf("Digite o Número de pontos turísticos: \n");
    scanf("%d", &pontos1);   

    
  // Área para exibição dos dados da cidade
    
    // === Carta 1 ===
    printf("\nCarta 1: \n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.1f km²\n", area);      
    printf("PIB: %.1f bilhões de reais \n", pib); 
    printf("Número de Pontos Turísticos: %d \n", pontos);


    // === Carta 2 ===
    printf("\nCarta 2: \n");               
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.1f km²\n", area1);     
    printf("PIB: %.1f bilhões de reais \n", pib1); 
    printf("Número de Pontos Turísticos: %d \n", pontos1);
 

return 0;
} 
