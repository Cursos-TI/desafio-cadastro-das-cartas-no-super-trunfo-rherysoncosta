#include <stdio.h>

int main() {

    //  Declaração das variáveis
    int populacao;
    double area;
    double pib;
    int numeroPontosTuristicos;

//  Mensagens de boas-vindas para o usuário
    printf("Você está participando do jogo SUPER TRUNFO!\n");
    printf("Vamos começar!\n");

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: \n");
    scanf("%lf", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &numeroPontosTuristicos);


    return 0;
}
