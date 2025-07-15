#include <stdio.h>

int main(){
    // Declaração das variáveis da Carta 1
    char Estado;     // só uma letra
    char Codigo[5]; 
    char NomeCidade[50];
    unsigned long int Populacao;
    float Area;
    float PIB;
    int PontosTuristicos;
    float Densidadepop;
    float PIBpercap;
    long double SuperPoder;

    // Declaração das variáveis da Carta 2
    char Estado2;
    char Codigo2[5];
    char NomeCidade2[50];
    unsigned long int Populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2;
    float Densidadepop2;
    float PIBpercap2;
    long double SuperPoder2;

    // Coleta de dados da Carta 1
    printf("Bem vindo ao jogo Super Trunfo \n");

    printf("Carta 1\n");

    printf("Insira o Estado(Letra de A a H):");
    scanf(" %c", &Estado);

    printf("Insira o Código da Carta(ex: A01): ");
    scanf(" %s", Codigo);

    printf("Insira o Nome da Cidade: ");
    scanf("%s", NomeCidade);

    printf("Insira a População: ");
    scanf("%lu", &Populacao);

    printf("Insira a Área(em km²): ");
    scanf("%f", &Area);

    printf("Insira o PIB: ");
    scanf("%f", &PIB);

    printf("Insira o Número de Pontos Turísticos: ");
    scanf("%d", &PontosTuristicos);

    // Coleta de dados da Carta 2
    printf("\nCarta 2\n");

    printf("Insira o Estado(Letra de A a H): ");
    scanf(" %c", &Estado2);

    printf("Insira o Código da Carta(ex: A01): ");
    scanf(" %s", Codigo2);

    printf("Insira o Nome da Cidade: ");
    scanf("%s", NomeCidade2);

    printf("Insira a População: ");
    scanf("%lu", &Populacao2);

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
    printf("População: %lu\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: R$ %.2f de reais\n", PIB);
    printf("Pontos Turísticos: %d\n", PontosTuristicos);
    
    Densidadepop = Populacao / Area; //Cálculo da densidade populacional da primeira carta
    printf("Densidade Populacional: %.2f habitantes por km²\n", Densidadepop);

    PIBpercap = PIB / Populacao; //Cálculo do PIB per capita da primeira carta
    printf("PIB per Capita: R$ %.2f de reais\n", PIBpercap);

    SuperPoder = (long double)(Populacao + PontosTuristicos) +
                 (long double)Area +
                 (long double)PIB +
                 (long double)PIBpercap +
                 (1.0 / Densidadepop);

    printf("Super Poder: %.0Lf\n", SuperPoder);


    // Resultados da Carta 2
    printf("\nCarta 2 :\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %lu\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: R$ %.2f de reais\n", PIB2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);

    Densidadepop2 = Populacao2 / Area2; //Cálculo da densidade populacional da segunda carta
    printf("Densidade Populacional: %.2f habitantes por km²\n", Densidadepop2);

    PIBpercap2 = PIB2 / Populacao2; //Cálculo do PIB per capita da segunda carta
    printf("PIB per Capita: R$ %.2f de reais\n", PIBpercap2);

    SuperPoder2 = (long double)(Populacao2 + PontosTuristicos2) +
                  (long double)Area2 +
                  (long double)PIB2 +
                  (long double)PIBpercap2 +
                  (1.0 / Densidadepop2);

    
    printf("Super Poder: %.0Lf\n", SuperPoder2);

    // Comparações (1 = Carta 1 venceu, 0 = Carta 2 venceu ou empate)
    int resultadoPop = Populacao > Populacao2;
    int resultadoArea = Area > Area2;
    int resultadoPIB = PIB > PIB2;
    int resultadoPT = PontosTuristicos > PontosTuristicos2;
    int resultadoDenPop = Densidadepop > Densidadepop2;
    int resultadoPIBperCap = PIBpercap > PIBpercap2;
    int resultadoSuperpoder = SuperPoder < SuperPoder2;

    printf("Comparação das Cartas:\n");
    printf("População (Carta 1 vence = 1 / Carta 2 vence = 0): %s\n", resultadoPop);
    printf("Área (Carta 1 vence = 1 / Carta 2 vence = 0): %d\n", resultadoArea);
    printf("PIB (Carta 1 vence = 1 / Carta 2 vence = 0): %d\n", resultadoPIB);
    printf("Pontos Turísticos (Carta 1 vence = 1 / Carta 2 vence = 0): %d\n", resultadoPT);
    printf("Densidade Populacional (Carta 1 vence = 1 / Carta 2 vence = 0): %d\n", resultadoDenPop);
    printf("PIB per capita (Carta 1 vence = 1 / Carta 2 vence = 0): %d\n", resultadoPIBperCap);
    printf("Super Poder (Carta 1 vence = 1 / Carta 2 vence = 0): %d\n", resultadoSuperpoder);


    return 0;

}
