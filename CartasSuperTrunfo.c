#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1[2]; 
    char nome_da_cidade1[20]; 
    char codigo_carta1[4];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Declaração das variáveis para a segunda carta
    char estado2[50];          
    char nome_da_cidade2[50];  
    char codigo_carta2[10];    
    int populacao2;            
    float area2;               
    float pib2;                
    int pontos_turisticos2;    

    // Entrada de dados da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("estado1:");
    scanf("%s", estado1);
    printf("nome_da_cidade1:");
    scanf("%s", nome_da_cidade1);
    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo_carta1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    

    // Entrada de dados da segunda carta
    printf("\nCadastro da segunda carta:\n");

    printf("Estado (ex: SP): ");
    scanf("%49s", estado2); 

    printf("Nome da cidade: ");
    scanf("%49s", nome_da_cidade2); 

    printf("Código da carta (ex: A01): ");
    scanf("%9s", codigo_carta2); 

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);


    return 0; 
}