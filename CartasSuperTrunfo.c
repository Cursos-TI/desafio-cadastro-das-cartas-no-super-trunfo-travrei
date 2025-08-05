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
    float area_cidade1, pib_cidade1, densidade1, pip_per_capita1, super_poder1;

    char estado2;
    char codigo_carta2[4];
    char nome_cidade2[50];
    int populacao2, n_pont_turisticos2;
    float area_cidade2, pib_cidade2, densidade2, pip_per_capita2,super_poder2;

    // Cadastro das Cartas:
    printf("Olá! Vamos iniciar o cadastramento das cartas!\n Vamos cadastrar a 1ª Carta!\n");

    printf("Digite o código do Estado: ");
    scanf("%c", &estado1);
    flush_in();

    printf("Digite o Código da Carta: ");
    scanf("%s", codigo_carta1);
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
    flush_in();

    printf("Vamos cadastrar a 2ª Carta!\n");

    printf("Digite o código do Estado: ");
    scanf("%c", &estado2);
    flush_in();

    printf("Digite o Código da Carta: ");
    scanf("%s", codigo_carta2);
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

    //Calculo de Densidade Populacional
    densidade1 = (float)populacao1 / area_cidade1;
    densidade2 = (float)populacao2 / area_cidade2;

    //Calculo Pip Per Capita
    pip_per_capita1 = pib_cidade1 * 1000000000.0f / (float)populacao1;
    pip_per_capita2 = pib_cidade2 * 1000000000.0f / (float)populacao2;

    //Calculo Super Poder
    super_poder1 = (float)populacao1 + area_cidade1 + pib_cidade1 + (float)n_pont_turisticos1 + densidade1 + pip_per_capita1;
    super_poder2 = (float)populacao2 + area_cidade2 + pib_cidade2 + (float)n_pont_turisticos2 + densidade2 + pip_per_capita2;

    // Exibição dos Dados das Cartas:
    //Printando a Carta 1
    printf("Carta 1:\n Estado: %c \n Código: %c%s \n Nome da Cidade: %s População: %d \n Área: %.2f km²\n PIB: %.2f Bilhões de Reais\n Número de Pontos Turisticos: %d \n Densidade Populacional: %.2f hab/km² \n Pip Per Capita: %.2f reais\n",
        estado1, estado1, codigo_carta1, nome_cidade1, populacao1, area_cidade1, pib_cidade1, n_pont_turisticos1, densidade1, pip_per_capita1);

    printf("Carta 2:\n Estado: %c \n Código: %c%s \n Nome da Cidade: %s População: %d \n Área: %.2f km²\n PIB: %.2f Bilhões de Reais\n Número de Pontos Turisticos: %d \n Densidade Populacional: %.2fhab/km² \n Pip Per Capita: %.2f reais\n",
        estado2, estado2, codigo_carta2, nome_cidade2, populacao2, area_cidade2, pib_cidade2, n_pont_turisticos2, densidade2, pip_per_capita2);

    //Comparando as Cartas
    int maior_populacao = populacao1 > populacao2;
    int maior_area = area_cidade1 > area_cidade2;
    int maior_pib = pib_cidade1 > pib_cidade2;
    int maior_ponto_tur = n_pont_turisticos1 > n_pont_turisticos2;
    int menor_densidade = densidade1 < densidade2;
    int maior_pip_per_capta = pip_per_capita1 > pip_per_capita2;
    int maior_super_poder = super_poder1 > super_poder2;

    printf("Comparação de Cartas: \n");
    printf("População: %d\n", maior_populacao);
    printf("Area: %d\n", maior_area);
    printf("PIP: %d\n", maior_pib);
    printf("Pontos Turisticos: %d\n", maior_ponto_tur);
    printf("Desnidade Populacional: %d\n", menor_densidade);
    printf("Pip Per Capita: %d\n", maior_pip_per_capta);
    printf("Super Poder: %d\n", maior_super_poder);

    return 0;
}
