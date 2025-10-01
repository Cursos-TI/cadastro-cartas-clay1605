#include <stdio.h>
int main (){
    printf("Modulo 3 - Estruturas de decisões compostas.\n");
    printf("Desafio Super Trunfo Iniciante .\n");
    printf("Desenvolvido por: Wesclay Andrade\n");
    printf("_________________________________\n");

    char pais1[50], pais2[50], codigo1[50], codigo2[50], estado1[50], estado2[50], cidade1[50], cidade2[50];
    double area1, area2, populacao1, populacao2, pib1, pib2, densidade1, densidade2, pibper1, pibper2;
    int ponto1, ponto2;
    

    printf("Dados da carta número 1!\n");
    printf("Digite o seu Pais: \n");
    scanf("%s", pais1);
    printf("Digite o código da carta: \n");
    scanf("%s", codigo1);
    printf("Digite o seu estado: \n");
    scanf("%s", estado1);
    printf("Digite sua cidade: \n");
    scanf("%s", cidade1);
    printf("Digite a Área em km2: \n");
    scanf("%lf", &area1);
    getchar();
    printf("Digite a população total: \n");
    scanf("%lf", &populacao1);
    printf("Digite o valor do PIB: \n");
    scanf("%lf", &pib1);
    getchar();
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &ponto1);

    densidade1 = populacao1 / area1;
   
    pibper1 = pib1 / populacao1;
   
    printf("A densidade populacional é: %lf\n", densidade1);
    printf("O PIB per capita é: %lf\n", pibper1);

    printf("Carta de número 2!\n");
    printf("Digite o seu Pais: \n");
    scanf("%s", pais2);
    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);
    printf("Digite seu estado: \n");
    scanf("%s", estado2);
    printf("Digite sua cidade: \n");
    scanf("%s", cidade2);
    printf("Digite a Área em km2: \n");
    scanf("%lf", &area2);
    printf("Digite o total da população: \n");
    scanf("%lf", &populacao2);
    printf("Digite o valor do PIB: \n");
    scanf("%lf", &pib2);
    getchar();
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &ponto2);
    getchar();

    densidade2 = populacao2 / area2;
    pibper2 = pib2 / populacao2; 
    printf("A densidade populacional é: %lf\n", densidade2);
    printf("O PIB per capita é: %lf\n", pibper2);
    printf("Comparação entre cartas(Atributo: PIB)\n");
    printf("Carta 1 - %s : %lf\n", cidade1, pib1);
    printf("Carta 2 - %s : %lf\n", cidade2, pib2);
    
    if (pib1 > pib2){
        printf("A carta número 1 (%s) venceu\n", cidade1);
    }else {
        printf("A carta número 2 (%s) venceu\n", cidade2);
    }







return 0;




}
