#include <stdio.h>

int main(){

char nomepais1[40], nomepais2[40];
float populacao1, populacao2, area1, area2, turisticos1, turisticos2, pib1, pib2, densidade1, densidade2;
int escolha;



printf("Jogo SuperTrunfo Médio...\n");
printf("Desensolvido por: Wesclay Andrade\n");
printf("__________________________________\n");

printf("Dados carta número 1\n");
printf("__________________________________\n");
printf("Digite o País: \n");
scanf("%s", nomepais1);
printf("Digite o total de população: \n");
scanf("%f", &populacao1);
printf("Digite o total de Áreakm2: \n");
scanf("%f", &area1);
printf("Digite a quantidade de pontos turisticos: \n");
scanf("%f", &turisticos1);
printf("Digite o PIB: \n");
scanf("%f", &pib1);
densidade1 = populacao1 / area1;
printf("A densidade demográfica é: %lf.\n", densidade1);
printf("__________________________________\n");
printf("Dados carta número 2\n");
printf("__________________________________\n");
printf("Digite o País: \n");
scanf("%s", nomepais2 );
printf("Digite o total de população: \n");
scanf("%f", &populacao2);
printf("Digite o total de Áreakm2: \n");
scanf("%f", &area2);
printf("Digite a quantidade de pontos turisticos: \n");
scanf("%f", &turisticos2);
printf("Digite o PIB: \n");
scanf("%f", &pib2);
densidade2 = populacao2 / area2;
printf("A densidade demográfica é: %lf\n.", densidade2);


printf("Escolha qual cartas serão comparadas:\n");
printf("1. População.\n");
printf("2. Área em km2.\n");
printf("3. Pontos Turisticos.\n");
printf("4. PIB\n");
printf("5. Densidade Populacional.\n");
 scanf("%d", &escolha);

switch (escolha){
    case 1: 
    printf("População %s: %f - População %s: %f.\n", populacao1, populacao2, nomepais1, nomepais2);
    if (populacao1 > populacao2 ){
          printf("A País %s venceu\n", nomepais1);
    }else if( populacao1 == populacao2){
        printf("Houve um empate entre os Países %s e %s\n", nomepais1, nomepais2);
    }
    else{
        printf("A País %s venceu\n", nomepais2);
    }
    break;
    case 2:
    printf("Área km2 %s: %f - Área km2 %s: %f", area1, area2, nomepais1, nomepais2);
    if (area1 > area2){
       printf("A País %s venceu\n", nomepais1);
    }else {
        printf("A País %s venceu\n", nomepais2);
    }
    break;
    case 3:
    printf("Pontos turisticos %s: %f - Pontos turisticos %s: %f\n", turisticos1, turisticos2, nomepais1, nomepais2);
    if (turisticos1 > turisticos2){
         printf("A País %s venceu\n", nomepais1);
    }else {
          printf("A País %s venceu\n", nomepais2);
    }
    break;
    case 4:
    printf("PIB %s: %f - PIB %s: %f \n", pib1, pib2, nomepais1, nomepais2);
    if ( pib1 > pib2) {
   printf("A País %s venceu\n", nomepais1);
    } else {
        printf("A País %s venceu\n", nomepais2);
    }
    break;
    case 5:
    printf("Densidade %s: %f - Densidade %s: %f \n", densidade1, densidade2, nomepais1, nomepais2);
    if( densidade1 < densidade2){
          printf("A País %s venceu\n", nomepais1);
    }else {
        printf("A País %s venceu\n", nomepais2);
    }
    break;
    

  




}



return 0;


}


