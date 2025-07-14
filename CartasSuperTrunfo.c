#include <stdio.h>

int main(){
    // Declaração das variáveis da Carta 1
    char Estado;     // só uma letra
    char Codigo[5]; 
    char NomeCidade[50];
    int Populacao;
    float Area;
    float PIB;
    int PontosTuristicos;

    // Declaração das variáveis da Carta 2
    char Estado2;
    char Codigo2[5];
    char NomeCidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2;

    // Coleta de dados da Carta 1
    printf("Bem vindo ao jogo Super Trunfo \n");

    printf("Carta 1\n");

    printf("Insira o Estado(Letra de A a H):");
    scanf(" %c", &Estado);

    printf("Insira o Código da Carta(ex: A01): ");
    scanf(" %s", &Codigo);

    printf("Insira o Nome da Cidade: ");
    scanf("%s", &NomeCidade);

    printf("Insira a População: ");
    scanf("%d", &Populacao);

    printf("Insira a Área(em km²): ");
    scanf("%f", &Area);

    printf("Insira o PIB: ");
    scanf("%f", &PIB);

    printf("Insira o Número de Pontos Turísticos: ");
    scanf("%d", &PontosTuristicos);

    // Coleta de dados da Carta 2
    printf("\nCARTA 2\n");

    printf("Insira o Estado(Letra de A a H): ");
    scanf(" %c", &Estado2);

    printf("Insira o Código da Carta(ex: A01): ");
    scanf(" %s", &Codigo2);

    printf("Insira o Nome da Cidade: ");
    scanf("%s", &NomeCidade2);

    printf("Insira a População: ");
    scanf("%d", &Populacao2);

    printf("Insira a Área(em km²): ");
    scanf("%f", &Area2);

    printf("Insira o PIB: ");
    scanf("%f", &PIB2);

    printf("Insira o Número de Pontos Turísticos: \n");
    scanf(" %d", &PontosTuristicos2);

    // Resultados da Carta 1
    printf("\nCarta 1 :\n");
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", NomeCidade);
    printf("População: %d\n", Populacao);
    printf("Área: %fkm²\n", Area);
    printf("PIB: %f de reais\n", PIB);
    printf("Pontos Turísticos: %d\n\n", PontosTuristicos);
    // Resultados da Carta 2
    printf("\nCarta 2 :\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %d \n", Populacao2);
    printf("Área: %fkm²\n", Area2);
    printf("PIB: %f de reais\n", PIB2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);

    return 0;

}