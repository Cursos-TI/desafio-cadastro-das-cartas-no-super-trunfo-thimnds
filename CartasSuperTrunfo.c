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
    long int SuperPoder;

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
    long int SuperPoder2;

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

    printf("Insira o Número de Pontos Turísticos: ");
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
    
    Densidadepop = Populacao / Area;
    printf("Densidade Populacional: %.2f habitantes por km²\n", Densidadepop);

    PIBpercap = PIB / Populacao;
    printf("PIB per Capita: R$ %.2f de reais\n", PIBpercap);

    SuperPoder = (long double)(Populacao + PontosTuristicos) +
                 (long double)Area +
                 (long double)PIB +
                 (long double)PIBpercap +
                 (1.0 / Densidadepop);

    printf("Super Poder: %ld\n", SuperPoder);

    // Resultados da Carta 2
    printf("\nCarta 2 :\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %lu\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: R$ %.2f de reais\n", PIB2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);

    Densidadepop2 = Populacao2 / Area2;
    printf("Densidade Populacional: %.2f habitantes por km²\n", Densidadepop2);

    PIBpercap2 = PIB2 / Populacao2;
    printf("PIB per Capita: R$ %.2f de reais\n", PIBpercap2);

    SuperPoder2 = (long double)(Populacao2 + PontosTuristicos2) +
                  (long double)Area2 +
                  (long double)PIB2 +
                  (long double)PIBpercap2 +
                  (1.0 / Densidadepop2);

    printf("Super Poder: %ld\n", SuperPoder2);

    // menu interativo para comparação manual
    int opcao;

    printf("\nEscolha o atributo para comparar manualmente:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional\n");
    printf("5 - Pontos Turísticos\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    printf("\n*** Comparação Escolhida ***\n");

    switch(opcao) {
        case 1:
            if (Populacao > Populacao2) {
                printf("População: Carta 1 venceu - %s (%lu)\n", NomeCidade, Populacao);
            } else if (Populacao < Populacao2) {
                printf("População: Carta 2 venceu - %s (%lu)\n", NomeCidade2, Populacao2);
            } else {
                printf("População: Empate\n");
            }
            break;

        case 2:
            if (Area > Area2) {
                printf("Área: Carta 1 venceu - %s (%.2f km²)\n", NomeCidade, Area);
            } else if (Area < Area2) {
                printf("Área: Carta 2 venceu - %s (%.2f km²)\n", NomeCidade2, Area2);
            } else {
                printf("Área: Empate\n");
            }
            break;

        case 3:
            if (PIB > PIB2) {
                if (PIB > 100000) {
                    printf("PIB: Carta 1 venceu com PIB muito alto! (%.2f)\n", PIB);
                } else {
                    printf("PIB: Carta 1 venceu (%.2f)\n", PIB);
                }
            } else if (PIB < PIB2) {
                if (PIB2 > 100000) {
                    printf("PIB: Carta 2 venceu com PIB muito alto! (%.2f)\n", PIB2);
                } else {
                    printf("PIB: Carta 2 venceu (%.2f)\n", PIB2);
                }
            } else {
                printf("PIB: Empate\n");
            }
            break;

        case 4:
            if (Densidadepop < Densidadepop2) {
                if (Densidadepop < 100) {
                    printf("Densidade Populacional: Carta 1 venceu com densidade ideal! (%.2f)\n", Densidadepop);
                } else {
                    printf("Densidade Populacional: Carta 1 venceu, mas a densidade é alta. (%.2f)\n", Densidadepop);
                }
            } else if (Densidadepop > Densidadepop2) {
                if (Densidadepop2 < 100) {
                    printf("Densidade Populacional: Carta 2 venceu com densidade ideal! (%.2f)\n", Densidadepop2);
                } else {
                    printf("Densidade Populacional: Carta 2 venceu, mas a densidade é alta. (%.2f)\n", Densidadepop2);
                }
            } else {
                printf("Densidade Populacional: Empate\n");
            }
            break;

        case 5:
            if (PontosTuristicos > PontosTuristicos2) {
                printf("Pontos Turísticos: Carta 1 venceu - %d pontos\n", PontosTuristicos);
            } else if (PontosTuristicos < PontosTuristicos2) {
                printf("Pontos Turísticos: Carta 2 venceu - %d pontos\n", PontosTuristicos2);
            } else {
                printf("Pontos Turísticos: Empate\n");
            }
            break;

        case 6:
            if (PIBpercap > PIBpercap2) {
                printf("PIB per capita: Carta 1 venceu - R$ %.2f\n", PIBpercap);
            } else if (PIBpercap < PIBpercap2) {
                printf("PIB per capita: Carta 2 venceu - R$ %.2f\n", PIBpercap2);
            } else {
                printf("PIB per capita: Empate\n");
            }
            break;

        case 7:
            if (SuperPoder > SuperPoder2) {
                printf("Super Poder: Carta 1 venceu - %ld\n", SuperPoder);
            } else if (SuperPoder < SuperPoder2) {
                printf("Super Poder: Carta 2 venceu - %ld\n", SuperPoder2);
            } else {
                printf("Super Poder: Empate\n");
            }
            break;

        default:
            printf("Opção inválida. Nenhuma comparação feita.\n");
            break;
    }

    // comparações (Carta 1 venceu, 2 venceu )
    // contadores de vitórias

    int vitoriasCarta1 = 0;
    int vitoriasCarta2 = 0;
   
    printf("\n*** Comparação Automática ***\n");

    if (Populacao > Populacao2){
        printf("População: Carta 1 Venceu - %s: %lu\n", NomeCidade, Populacao);
        vitoriasCarta1++;
    }else{
        printf("População: Carta 2 Venceu - %s: %lu\n", NomeCidade2, Populacao2);
        vitoriasCarta2++;
    }

    if (Area > Area2){
        printf("Área: Carta 1 Venceu - %s: %.2f\n", NomeCidade, Area);
        vitoriasCarta1++;
    }else{
        printf("Área: Carta 2 Venceu - %s: %.2f\n", NomeCidade2, Area2);
        vitoriasCarta2++;
    }

    if (PIB > PIB2){
        printf("PIB: Carta 1 Venceu - %s: %.2f\n", NomeCidade, PIB);
        vitoriasCarta1++;
    }else{
        printf("PIB: Carta 2 Venceu - %s: %.2f\n", NomeCidade2, PIB2);
        vitoriasCarta2++;
    }

    if (Densidadepop < Densidadepop2){
        printf("Densidade Populacional: Carta 1 Venceu - %s: %.2f\n", NomeCidade, Densidadepop);
        vitoriasCarta1++;
    }else{
        printf("Densidade Populacional: Carta 2 Venceu - %s: %.2f\n", NomeCidade2, Densidadepop2);
        vitoriasCarta2++;
    }

    if (PontosTuristicos > PontosTuristicos2){
        printf("Pontos Turístico: Carta 1 Venceu - %s: %d\n", NomeCidade, PontosTuristicos);
        vitoriasCarta1++;
    }else{
        printf("Pontos Turístico: Carta 2 Venceu - %s: %d\n", NomeCidade2, PontosTuristicos2);
        vitoriasCarta2++;
    }

    if (PIBpercap > PIBpercap2){
        printf("PIB per capita: Carta 1 Venceu - %s: %.2f\n", NomeCidade, PIBpercap);
        vitoriasCarta1++;
    }else{
        printf("PIB per capita: Carta 2 Venceu - %s: %.2f\n", NomeCidade2, PIBpercap2);
        vitoriasCarta2++;
    }

    if (SuperPoder > SuperPoder2){
        printf("Super Poder: Carta 1 Venceu - %s: %ld\n", NomeCidade, SuperPoder);
        vitoriasCarta1++;
    }else{
        printf("Super Poder: Carta 2 Venceu - %s: %ld\n", NomeCidade2, SuperPoder2);
        vitoriasCarta2++;
    }

    printf("\n*** Resultado Final ***\n");

    printf("Vitórias da Carta 1: %d\n", vitoriasCarta1);
    printf("Vitórias da Carta 2: %d\n", vitoriasCarta2);

    if (vitoriasCarta1 > vitoriasCarta2) {
        printf("A Carta 1 (%s) venceu o jogo!\n", NomeCidade);
    } else if (vitoriasCarta2 > vitoriasCarta1) {
        printf("A Carta 2 (%s) venceu o jogo!\n", NomeCidade2);
    } else {
        printf("O jogo terminou empatado!\n");
    }

    return 0;
}
