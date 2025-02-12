#include <stdio.h>

int main() {

    //  Declaração das variáveis carta 1
    char estado1[3], nomeDaCidade1[50], codigo1;
    int populacao1, numeroPontosTuristicos1;
    double area1, pib1, pibPerCapita1;
    float densidadePopulacional1;

//  Mensagens de boas-vindas para o usuário
    printf("Você está participando do jogo SUPER TRUNFO!\n");
    printf("Vamos começar!\n");


// Entrada de dados do usuário

    printf("CARTA 1!\n");
    printf("Digite o estado: \n");
    scanf("%s", estado1);
    printf("Digite o código da Cata: \n");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeDaCidade1);
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade: \n");
    scanf("%lf", &area1);
    printf("Digite o PIB da cidade : \n");
    scanf("%lf", &pib1);
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &numeroPontosTuristicos1);

    //Operações matemáticas carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    //Exibir a carta 1
    printf("\nInformações da cidade (CARTA1):\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %d\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %lf\n", area1);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
    printf("PIB: %lf\n", pib1);
    printf("Numero de Pontos Turísticos: %d\n", numeroPontosTuristicos1);

    return 0;
}
