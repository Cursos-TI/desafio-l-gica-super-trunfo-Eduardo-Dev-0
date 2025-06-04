#include <stdio.h>

//Definindo Variáveis

int main(){

char estado1, estado2;

char codigocarta1[3], codigocarta2[3];

char nomecidade1[12], nomecidade2[12];

int populacao1, populacao2;

float areakm1, areakm2;

float pib1, pib2;

int numerosturisticos1, numerosturisticos2;

float densidadepopulacional1, densidadepopulacional2;

float pibpercapita1, pibpercapita2;

densidadepopulacional1 = populacao1 / areakm1;

densidadepopulacional2 = populacao2 / areakm2;

pibpercapita1 = pib1 / populacao1;

pibpercapita2 = pib2 / populacao2;

//Solicitando a entrada e exibindo no terminal
//Carta 1
printf("Digite o estado1: \n");
scanf("%c", &estado1);

printf("Digite o codigo da carta1: \n");
scanf("%s", &codigocarta1);

printf("Digite o nome da cidade1: \n");
scanf("%s", &nomecidade1);

printf("Digite sua população1: \n");
scanf("%d", &populacao1);

printf("Digite a área em km1: \n");
scanf(" %f", &areakm1);

printf("Digite seu pib1: \n");
scanf("%f", &pib1);

printf("Digite as áreas turisticas1: \n");
scanf("%d", &numerosturisticos1);

//Carta 2

printf("Digite o estado2: \n");
scanf("%c", &estado2);

printf("Digite o codigo da carta2: \n");
scanf("%s", &codigocarta2);

printf("Digite o nome da cidade2: \n");
scanf("%s", &nomecidade2);

printf("Digite sua população2: \n");
scanf("%d", &populacao2);

printf("Digite a área em km2: \n");
scanf(" %f", &areakm2);

printf("Digite seu pib2: \n");
scanf("%f", &pib2);

printf("Digite as áreas turisticas2: \n");
scanf("%d", &numerosturisticos2);

//Exibindo resultado carta 1

printf("Exibindo resultado carta 1: \n");
printf("Nome do estado: %c \n", estado1);
printf("Codigo da carta: %s \n", codigocarta1);
printf("Nome da cidade: %s \n", nomecidade1);
printf("População: %d \n", populacao1);
printf("area em km: %.3f \n", areakm1);
printf("pib: %.3f \n", pib1);
printf("numeros turisticos: %d \n", numerosturisticos1);
printf("Densidade Populacional1: %.3f \n",densidadepopulacional1);
printf("pib per capita1: %.3f \n", pibpercapita1);

//Exibindo Resultado carta 2

printf("Exibindo resultado carta 2: \n");
printf("Nome do estado: %c \n", estado2);
printf("Codigo da carta: %s \n", codigocarta2);
printf("Nome da cidade: %s \n", nomecidade2);
printf("População: %d \n", populacao2);
printf("area em km: %.3f \n", areakm2);
printf("pib: %.3f \n", pib2);
printf("numeros turisticos: %d \n", numerosturisticos2);
printf("Densidade Populacional2: %.3f \n",densidadepopulacional2);
printf("pib per capita2: %.3f \n", pibpercapita2);

//Calculando a carta vencedora pib per capita

if (pibpercapita1 > pibpercapita2)
{
    printf("pib per capita da carta 1 venceu");
}  else {
    printf("pib per capita da carta 2 venceu");

}







}