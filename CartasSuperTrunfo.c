#include <stdio.h>

int main() {

    //  Declaração das variáveis
    char estado[3];
    char nomeDaCidade[50];
    char codigo;
    int populacao;
    double area;
    double pib;
    double pibPerCapita;
    int numeroPontosTuristicos;
    float densidadePopulacional;

//  Mensagens de boas-vindas para o usuário
    printf("Você está participando do jogo SUPER TRUNFO!\n");
    printf("Vamos começar!\n");


// Entrada de dados do usuário
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: \n");
    scanf("%lf", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &numeroPontosTuristicos);
q
//Mensagem informando que a carta da cidade foi criada com sucesso
    printf("Parabéns! Você acaba de criar a carta de sua cidade!\n");

    printf("\nInformações da cidade:\n");
    printf("População: %d\n", populacao);
    printf("Área: %lf\n", area);
    printf("PIB: %lf\n", pib);
    printf("Numero de Pontos Turísticos: %d\n", numeroPontosTuristicos);

    return 0;
}
