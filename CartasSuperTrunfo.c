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


// Entrada de dados do usuário
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: \n");
    scanf("%lf", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &numeroPontosTuristicos);

//Mensagem informando que a carta da cidade foi criada com sucesso
    printf("\nParabéns! Você acaba de criar a carta de sua cidade!\n");
    printf("\nInformações da cidade:\n");

    return 0;
}
