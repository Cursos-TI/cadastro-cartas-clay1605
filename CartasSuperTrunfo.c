#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
 printf("_________________________________\n");
  printf("Cartas Desafio Supertrunfo!\n");
  printf("_________________________________\n");
  printf("++Desenvolvido por: Wesclay Andrade++\n");

  
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Declaração primeiras cartas 
char Estado1[50];
char Codigocarta1[50];
char Nomecidade1[50];
int populacao1;
float areaemkm21;
float PIB1;
int pontosturisticos1;

// Declaração segunda carta
char Estado2[50];
char Codigocarta2[50];
char Nomecidade2[50];
int populacao2;
float areaemkm22;
float PIB2;
int pontosturisticos2;

//Entradas de dados primeira carta

printf("--Cadastro de cartas 1!--\n");


printf("Digite seu Estado: ");
scanf("%s", Estado1);


printf("Digite seu Código da carta: ");
scanf("%s", Codigocarta1);


printf("Digite o Nome da cidade: ");
scanf("%s", Nomecidade1);


printf("Digite a quantidade de população: ");
scanf("%d", &populacao1);
getchar(); //Limpa o enter do buffer 

printf("Digite a Área em KM2: ");
scanf("%f", &areaemkm21);
getchar();

printf("Digite o valor do PIB: ");
scanf("%f", &PIB1);
getchar();


printf("Digite a quantidade de pontos turisticos: ");
scanf("%d", &pontosturisticos1);


// Entradas de dados segunda carta

printf("Cadastro de cartas 2!\n");


printf("Digite seu Estado: ");
scanf("%s", Estado2);


printf("Digite seu Código da carta: ");
scanf("%s", Codigocarta2);


printf("Digite o Nome da cidade: ");
scanf("%s", Nomecidade2);


printf("Digite a quantidade de população: ");
scanf("%d", &populacao2);
getchar(); //Limpa o enter do buffer 

printf("Digite a Área em KM2: ");
scanf("%f", &areaemkm22);
getchar();

printf("Digite o valor do PIB: ");
scanf("%f", &PIB2);
getchar();


printf("Digite a quantidade de pontos turisticos: ");
scanf("%d", &pontosturisticos2);


return 0;

} 
