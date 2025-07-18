#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

//Limpar o buffer para retirar a quebra de linha -- Peguei do StackOverflow(https://pt.stackoverflow.com/questions/9427/limpeza-do-buffer-do-teclado-ap%C3%B3s-scanf)
void flush_in(){
    int ch;
    while((ch=fgetc(stdin)) != EOF && ch != '\n'){}
}

int main() {
    //Declarando variáveis:
    char estado1;
    char codigo_carta1[4];
    char nome_cidade1[50];
    int populacao1, n_pont_turisticos1;
    float area_cidade1, pib_cidade1;
    
    char estado2;
    char codigo_carta2[4];
    char nome_cidade2[50];
    int populacao2, n_pont_turisticos2;
    float area_cidade2, pib_cidade2;

    // Cadastro das Cartas:
    printf("Olá! Vamos iniciar o cadastramento das cartas!\n Vamos cadastrar a 1ª Carta!\n");
    
    printf("Digite o código do Estado: ");
    scanf("%c", &estado1);
    flush_in();

    printf("Digite o Código da Carta: ");
    scanf("%s", &codigo_carta1);
    flush_in();

    printf("Digite o nome da Cidade: ");
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin);

    printf("Digite a População da Cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a Area em km² da Cidade: ");
    scanf("%f", &area_cidade1);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib_cidade1);

    printf("Digite o número de Pontos turísticos: ");
    scanf("%d", &n_pont_turisticos1);


    printf("Vamos cadastrar a 2ª Carta!\n");
    
    printf("Digite o código do Estado: ");
    scanf("%s", &estado2);
    flush_in();

    printf("Digite o Código da Carta: ");
    scanf("%s", &codigo_carta2);
    flush_in();

    printf("Digite o nome da Cidade: ");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);

    printf("Digite a População da Cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a Area em km² da Cidade: ");
    scanf("%f", &area_cidade2);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib_cidade2);

    printf("Digite o número de Pontos turísticos: ");
    scanf("%d", &n_pont_turisticos2);

    // Exibição dos Dados das Cartas:
    //Printando a Carta 1
    printf("Carta 1:\n Estado: %c \n Código: %s \n Nome da Cidade: %s População: %d \n Área: %.2f km²\n PIB: %.2f Bilhões de Reais\n Número de Pontos Turisticos: %d \n", estado1, codigo_carta1, nome_cidade1, populacao1, area_cidade1, pib_cidade1, n_pont_turisticos1);

    printf("Carta 2:\n Estado: %c \n Código: %s \n Nome da Cidade: %s População: %d \n Área: %.2f km²\n PIB: %.2f Bilhões de Reais\n Número de Pontos Turisticos: %d \n", estado2, codigo_carta2, nome_cidade2, populacao2, area_cidade2, pib_cidade2, n_pont_turisticos2);

    return 0;
}
