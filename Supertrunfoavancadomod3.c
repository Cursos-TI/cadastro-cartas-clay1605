#include <stdio.h>
#include <stdlib.h>

int main(){

    char nomepais1[50], nomepais2[50];
    float populacao1, populacao2, area1, area2, turistico1, turistico2, pib1, pib2, densidade1, densidade2;
    int escolha1, escolha2;

        printf("Bem-vindo ao Super Trunfo Avançado!\n");
        printf("Desenvolvido por: Wesclay Andrade!\n");
        printf("__________________________________\n");

        printf("Entre com os dados de sua carta:\n");
        printf("Carta de número 1\n");
        printf("_________________________________\n");
        printf("Digite o nome do seu País:\n");
        scanf("%s", nomepais1);
        printf("Digite a população do seu País:\n");
        scanf("%f", &populacao1);
        printf("Digite a área em km2 do seu País: \n");
        scanf("%f", &area1);
        printf("Digite a quantidade de pontos turisticos do seu País: \n");
        scanf("%f", &turistico1);
        printf("Digite o valor do PIB do seu País: \n");
        scanf("%f", &pib1);
        densidade1= populacao1/area1;
        printf("A densidade demográfica do seu País é: %f\n", densidade1);

        printf("_________________________________\n");
        printf("Entre com os dados da carta do seu País!\n");
        printf("Carta de número 2!\n");
        printf("_________________________________\n");
        printf("Digite o nome do seu País: \n");
        scanf("%s", nomepais2);
        printf("Digite a população de seu País: \n");
        scanf("%f", &populacao2);
        printf("Digite a área em km2 de seu País: \n");
        scanf("%f", &area2);
        printf("Digite a quantidade de pontos turisticos de seu País: \n");
        scanf("%f", &turistico2);
        printf("Digite o valor do PIB de seu país: \n");
        scanf("%f", &pib2);
        densidade2= populacao2/area2;
        printf("A densidade populacional do seu País é de: %f\n", densidade2);

        printf("Escolha qual atributo será comparado: \n");
        printf("__________________________________\n");
        printf("1. População\n");
        printf("2. Área em km2\n");
        printf("3. Pib\n");
        printf("4. Pontos turisticos\n");
        printf("5. Densidade Populacional\n");
        scanf("%d", &escolha1);
        printf("Você escolheu o atributo %d, como primeira escolha!\n", escolha1);
        printf("__________________________________\n");
        switch (escolha1){
            case 1:
            printf("População %s: %f - População %s: %f.\n", nomepais1, populacao1, nomepais2, populacao2);
            if (populacao1 > populacao2){
                printf("O pais %s venceu!\n", nomepais1);
            } else if ( populacao1 == populacao2){
                printf("Houve um empate entre os Países %s e %s.\n", nomepais1, nomepais2);
            } else {
                printf("O pais %s venceu.\n", nomepais2);
            }
            break;
            case 2: 
               printf("A área em km2 do %s é %f e a área em km2 do %s é %f.\n", nomepais1, area1, nomepais2, area2);
               if (area1 > area2){
                printf("O %s venceu.\n", nomepais1);
               } else if( area1 == area2){
                printf("Houve um empate entre os Países %s e %s!\n", nomepais1, nomepais2);
               } else {
                printf("O pais %s venceu.\n", nomepais2);
               }
               break;
               case 3:
               printf("O PIB do pais %s é %f, o do País %s é de %f.\n", nomepais1, pib1, nomepais2, pib2);
               if ( pib1 > pib2){
                printf("O pais %s venceu!\n", nomepais1);
               } else if( pib1 == pib2){
                printf("Houve um empate entre os Países %s e %s.\n", nomepais1, nomepais2);
               } else{
                printf("O pais %s venceu!\n", nomepais2);
               }
               break;
               case 4: 
               printf("A quantidade de pontos turisticos do País %s é de %f e a do País %s é de %f.\n", nomepais1, turistico1, nomepais2, turistico2);
               if ( turistico1 > turistico2){
                printf("O pais %s é o vencedor!\n", nomepais1);
               } else if(turistico1 == turistico2){
                printf("Houve um empate entre os Países %s e %s!\n", nomepais1, nomepais2);            
               } else {
                printf("O pais %s é o vencedor!\n", nomepais2);
               }
               break;
               case 5:
               printf("A densidade demografica do País %s é de %f e a do País %s é de %f.\n", nomepais1, densidade1, nomepais2, densidade2);
               if ( densidade1 < densidade2){
                printf("O pais %s é o vencedor!\n", nomepais1);
               } else if( densidade1 == densidade2){
                printf("Houve um empate entre os Países %s e %s!\n", nomepais1, nomepais2);
               } else{
                printf("O País %s é o vencedor!\n", nomepais2);
               }
               break;
               default:
               printf("Opção invalida, tente novammente!\n");
                break;
        }
             printf("__________________________________\n");
            printf("Agora escolha o segundo atributo para comparação: \n");
            printf("1. População!\n");
            printf("2. Área em km2!\n");
            printf("3. PIB\n");
            printf("4. Pontos turisticos.\n");
            printf("5. Densidade Populacional!\n");
            scanf("%d", &escolha2);
            printf("Você escolheu o atributo %d, como segunda escolha!\n", escolha2);
            printf("__________________________________\n");
             
            if ( escolha1 == escolha2){
                printf("Você repetiu o atributo, favor modificar!\n");
             } else {
                switch (escolha2){
                case 1:
                printf("População do %s é de %f e a população do %s é de %f!\n", nomepais1, populacao1, nomepais2, populacao2);
                 if (populacao1 > populacao2){
                    printf("O país %s é o vencedor!\n", nomepais1);
                 } else if( populacao1 == populacao2){
                    printf("Houve um empate entre os Países %s e %s!\n", nomepais1, nomepais2);
                 }else {
                    printf("O País %s é o vencedor\n", nomepais2);
                 }
                 break;
                 case 2:
                 printf("A área em km2 do %s é de %f e a do %s é de %f!\n", nomepais1, area1, nomepais2, area2);
                 if ( area1 > area2){
                    printf("O %s é o vencedor!\n", nomepais1);
                 } else if ( area1 == area2){
                    printf("Houve um empate entre %s e %s!\n", nomepais1, nomepais2);
                 }else {
                    printf("O %s é o vencedor!\n", nomepais2);
                 }
                 break;
                 case 3: 
                 printf("O PIB do %s é de %f e o do %s é de %f!\n", nomepais1, pib1, nomepais2, pib2);
                  if ( pib1 > pib2){
                    printf("O %s é o vencedor!\n", nomepais1);
                  } else if ( pib1 == pib2){
                    printf("Houve um empate entre o %s e %s!\n", nomepais1, nomepais2);
                  } else {
                    printf("O país %s é o vencedor!\n", nomepais2);
                  }
                  break;
                  case 4:
                  printf("A quantidade de pontos turisticos do %s é de %f e a do %s é de %f!\n", nomepais1, turistico1, nomepais2, turistico2); 
                  if ( turistico1 > turistico2){
                    printf("O %s é o vencedor!\n", nomepais1); 
                  } else if ( turistico1 == turistico2){
                    printf("Houve um empate entre o %s e %s!\n", nomepais1, nomepais2);
                 } else{
                    printf("O %s é o vencedor!\n", nomepais2);
                 }
                 break;
                 case 5:
                 printf("A densidade demografica do %s é de %f e a do %s é de %f!\n", nomepais1, densidade1, nomepais2, densidade2);
                 if ( densidade1 > densidade2){
                    printf("O %s é o vencedor!\n", nomepais1);
                 } else if( densidade1 == densidade2){
                    printf("Houve um empate entre o %s e o %s!\n", nomepais1, nomepais2);
                 } else {
                    printf("O %s é o vencedor!\n", nomepais2);
                 }
                    break;
                 }
                }
                 printf("__________________________________\n");
                 printf("A primeira escolha foi o atributo %d e a segunda escolha foi o atributo %d. O pais vencedor é aquele que ganhou mais atributos!\n", escolha1, escolha2);
                 printf("Obrigado por jogar o Super Trunfo Avançado!\n");
                 
                 
                 
}


