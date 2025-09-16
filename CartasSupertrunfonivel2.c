#include <stdio.h>

int main() {

printf("---------------------------------\n");
printf("Super Trunfo Nível 2\n");
printf("Desenvolvido por: Wesclay Andrade\n");
printf("_--------------------------------\n");

char Pais1[50], Pais2[50], Pais3[50];
char estado1[50], estado2[50], estado3[50];
char Codigocarta1[50], Codigocarta2[50], Codigocarta3[50];
char Nomecidade1[50], Nomecidade2[50], Nomecidade3[50];
int populacao1, populacao2, populacao3;
float areakm1, areakm2, areakm3;
float PIB1, PIB2, PIB3;
int pontoturistico1, pontoturistico2, pontoturistico3;
float densidade1, densidade2, densidade3;
float pibpercapita1, pibpercapita2, pibpercapita3;


// Entradas primeira carta 
printf("Cadastro de cartas 1!\n");
printf("\n");
printf("Digite o nome do pais: ");
scanf("%s", Pais1);
printf("Digite o código da carta: ");
scanf("%s", Codigocarta1);
printf("Digite o nome do estado: ");
scanf("%s", estado1);
printf("Digite o nome da cidade: ");
scanf("%s", Nomecidade1);
printf("Digite  a população: ");
scanf("%d", &populacao1);
getchar();
printf("Digite a Área em km2:  ");
scanf("%f", &areakm1);
printf("Digite o PIB: ");
scanf("%f", &PIB1);
getchar();
printf("Digite oo número de pontos turísticos: ");
scanf("%d", &pontoturistico1);
getchar();
densidade1 = populacao1 / areakm1;
pibpercapita1 = PIB1 / populacao1;
printf("A densidade demográfica é: %.2f\n", densidade1);
printf("O PIB percapita é: %.2f\n", pibpercapita1);

// Entradas da segunda carta 
printf("Cadastro de cartas número 2!\n");

printf("Digite o nome do Pais: ");
scanf("%s", Pais2);
printf("Digite o código da carta: ");
scanf("%s", Codigocarta2);
printf("Digite o nome do estado: ");
scanf("%s", estado2);
printf("Digite o nome da cidade: ");
scanf("%s", Nomecidade2);
printf("Digite a população: ");
scanf("%d", &populacao2);
getchar();
printf("Digite  a Área em km2: ");
scanf("%f", &areakm2);
printf("Digite o PIB: ");
scanf("%f", &PIB2);
getchar();
printf("Digite o número de pontos turísticos: ");
scanf("%d", &pontoturistico2);
getchar();

densidade2 = populacao2 / areakm2;
pibpercapita2 = PIB2 / populacao2;
printf("A densidade demográfica é: %.2f\n", densidade2);
printf("O PIB percapita é: %.2f\n", pibpercapita2);

// Entradas terceira carta
printf("Cadastro de cartas número 3!\n");

printf("Digite o nome do pais: ");
scanf("%s", Pais3);
printf("Digite o código da carta: ");
scanf("%s", Codigocarta3);
printf("Digite o nome do estado: ");
scanf("%s", estado3);
printf("Digite o nome da cidade: ");
scanf("%s", Nomecidade3);
printf("Digite a população: ");
scanf("%d", &populacao3);
printf("Digite a Área em km2: ");
scanf("%f", &areakm3);
printf("Digite o PIB: ");
scanf("%f", &PIB3);
getchar();
printf("Digite o número de pontos turísticos: ");
scanf("%d", &pontoturistico3);
getchar();

densidade3 = populacao3 / areakm3;
pibpercapita3 = PIB3 / populacao3;
printf("A densidade demográfica é: %.2f\n", densidade3);
printf("O PIB percapita é: %.2f\n", pibpercapita3);

return 0;
}