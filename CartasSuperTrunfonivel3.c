#include <stdio.h>
int main() {

char Paiscarta1[50], Paiscarta2[50], codigocarta1[50], codigocarta2[50], estadocarta1[50], estadocarta2[50], cidadecarta1[50],cidadecarta2[50];
long int populacaocarta1, populacaocarta2, pontosturisticoscarta1, pontosturisticoscarta2, somacarta1, somacarta2, resultado, resultado1, resultado2, resultado3, resultado4, resultado5, resultado6; 
float areakmcarta1, areakmcarta2, pibcarta1, pibcarta2;
long double densidadecarta1, densidadecarta2, pibpercapitacarta1, pibpercapitacarta2;

printf("!!!Jogo Super Trunfo!!!\n");
printf("Desenvolvido por: Wesclay Andrade\n");
printf("________________________________________\n");

printf("Primeira Carta\n");
printf("........................................\n");

printf("Digite o nome do pais: \n");
scanf("%s", Paiscarta1);
printf("Digite o código da carta: \n");
scanf("%s", codigocarta1);
printf("Digite o estado da carta: \n");
scanf("%s", estadocarta1);
printf("Digite a cidade da carta: \n");
scanf("%s", cidadecarta1);
printf("Digite a população total: \n");
scanf("%ld", &populacaocarta1);
getchar();
printf("Digite o total de pontos turisticos: \n");
scanf("%ld", &pontosturisticoscarta1);
getchar();
printf("Digite a área em km2: \n");
scanf("%f", &areakmcarta1);
getchar();
printf("Digite o PIB: \n");
scanf("%f", &pibcarta1);
getchar();
densidadecarta1 = populacaocarta1 / areakmcarta1;
printf("A densidade demográfica é: %.2ld\n", densidadecarta1);
pibpercapitacarta1 = pibcarta1 / populacaocarta1;
printf("O PIB percapita é: %.2ld\n", pibpercapitacarta1);
somacarta1 = populacaocarta1 + pontosturisticoscarta1 + areakmcarta1 + pibcarta1; 
printf("Total Super Poder: %ld\n", somacarta1);


printf("Segunda carta\n");
printf("........................................\n");

printf("Digite o nome do pais: \n");
scanf("%s", Paiscarta2);
printf("Digite o código da carta: \n");
scanf("%s", codigocarta2);
printf("Digite o nome do estado: \n");
scanf("%s", estadocarta2);
printf("Digite o nome da cidade: \n");
scanf("%s", cidadecarta2);
printf("Digite a população total: \n");
scanf("%ld", &populacaocarta2);
getchar();
printf("Digite o número de pontos turisticos: \n");
scanf("%ld", &pontosturisticoscarta2);
getchar();
printf("Digite o total de Área em km2: \n");
scanf("%f", &areakmcarta2);
printf("Digite o PIB: \n");
scanf("%f", &pibcarta2);
densidadecarta2 = populacaocarta2 / areakmcarta2;
pibpercapitacarta2 = pibcarta2 / populacaocarta2;
printf("A densidade demográfica é: %.2Ld\n", densidadecarta2);
printf("O Pibpercapita é: %.2Ld\n", pibpercapitacarta2); 
somacarta2 = populacaocarta2 + pontosturisticoscarta2 + areakmcarta2 + pibcarta2;
printf("Total do super poder: %ld\n", somacarta2);


printf("Comparativo entre as cartas!\n");
printf("A carta 1 tem %ld população enquanto a carta dois tem %ld\n", populacaocarta1, populacaocarta2);
printf("A carta 1 tem %ld pontos turisticos enquanto a carta dois tem %ld\n", pontosturisticoscarta1, pontosturisticoscarta2);
printf("A carta 1 tem %f km2 enquanto a carta dois tem %f km2\n", areakmcarta1, areakmcarta2);
printf("A carta 1 tem %f PIB enquanto a carta dois tem %f PIB\n", pibcarta1, pibcarta2);
printf("A carta 1 apresenta %.2Ld densidade demografica enquanto a carta 2 apresenta %.2Ld densidade demografica\n", densidadecarta1, densidadecarta2);
printf("A carta 1 apresenta %.2Ld PIB percapita enquanto a carta 2 apresenta %.2Ld PIB percapita\n", pibpercapitacarta1, pibpercapitacarta2);
printf("O poder total da carta um é %Ld enquanto o poder total da carta 2 é %Ld\n", somacarta1, somacarta2);

printf("Comparação de cartas.\n");
printf("___________________________\n");

    resultado = populacaocarta1 > populacaocarta2;
    resultado1 = pontosturisticoscarta1 > pontosturisticoscarta2;
    resultado2 = areakmcarta1 > areakmcarta2;
    resultado3 = pibcarta1 > pibcarta2;
    resultado4 = densidadecarta1 > densidadecarta2;
    resultado5 = pibpercapitacarta1 > pibpercapitacarta2;
    resultado6 = somacarta1 > somacarta2;


    if (populacaocarta1 > populacaocarta2){
        printf("População: A carta 1 venceu.\n");
    } else if  (populacaocarta1 < populacaocarta2) {
        printf("População: A carta 2 venceu.\n");
    }
    if (pontosturisticoscarta1 > pontosturisticoscarta2) {
        printf("Pontos Turisticos: A carta 1 venceu.\n");
    } else if (pontosturisticoscarta1 < pontosturisticoscarta2){
        printf("Pontos Turisticos: A carta 2 venceu.\n");
    }
    if (areakmcarta1 > areakmcarta2) {
         printf("Área em km2: A carta 1 venceu.\n");
    } else if (areakmcarta1 < areakmcarta2) {
         printf("Área em km2: A carta 2 venceu.\n");
    }
    if (densidadecarta1 > densidadecarta2)  {
         printf("Densidade demográfica: A carta 1 venceu.\n");
    } else if (densidadecarta1 < densidadecarta2){
         printf("Densidade demográfica: A carta 2 venceu.\n");
    }
    if (pibpercapitacarta1 > pibpercapitacarta2){
         printf("PIB per Capita: A carta 1 venceu.\n");
    } else if (pibpercapitacarta1 < pibpercapitacarta2){ 
         printf("PIB per Capita: A carta 2 venceu.\n");
    }
    if (somacarta1 > somacarta2) {
        printf("Super Poder: A carta 1 venceu.\n");
    } else if (somacarta1 < somacarta2) {
        printf("Super Poder: A carta 2 venceu.\n");
    }
    

return 0;

}