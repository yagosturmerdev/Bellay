#include <stdio.h>

int main () {

char Estado, Estado2;
char Código [05], Código2 [05];
char Cidade [20], Cidade2 [20];
unsigned long População, População2;
float Área, Área2;
float PIB, PIB2;
int Turismo, Turismo2;

printf("Bem vindo ao SuperTrunfo, para começar faça duas cartas \n");

printf("Digite uma letra de A a H para representar um Estado: ");
scanf(" %c", &Estado);

printf("Digite o código do Estado de 01 à 04: ");
scanf("%s", Código);

printf("Digite o nome da cidade único: ");
scanf("%s", Cidade);

printf("Digite a população da cidade: ");
scanf("%lu", &População);

printf("Digite a área em km² : ");
scanf("%f", &Área);

printf("Digite o PIB da cidade: ");
scanf("%f", &PIB);

printf("Digite a quantidade de pontos turísticos: ");
scanf("%d", &Turismo);

float Densidade = (float)População / Área;
float PibPerCapita = PIB / (float)População;
float InversoDensidade = 1 / Densidade;

float SuperPoder = (float)(População + Área + PIB + Turismo + PibPerCapita + InversoDensidade);


printf("\nCarta criada com sucesso!\n");

printf("\nCarta 1:\n");
printf("Estado: %c\n", Estado);
printf("Código: %s\n", Código);
printf("Cidade: %s\n", Cidade);
printf("População: %lu\n", População);
printf("Área: %.2f km²\n", Área);
printf("PIB: %.2f bilhões de reais\n", PIB);
printf("Pontos Turísticos: %d\n", Turismo);
printf("Densidade Populacional: %.2f hab/km²\n", Densidade);
printf("PIB per Capita: %f mil reais\n", PibPerCapita);

printf("\nAgora faça a segunda carta! \n");

printf("\nDigite uma letra de A a H para representar um Estado: ");
scanf(" %c", &Estado2);

printf("Digite o código do Estado de 01 à 04: ");
scanf("%s", Código2);

printf("Digite o nome da cidade único: ");
scanf("%s", Cidade2);

printf("Digite a população da cidade: ");
scanf("%lu", &População2);

printf("Digite a área em km²: ");
scanf("%f", &Área2);

printf("Digite o PIB da cidade: ");
scanf("%f", &PIB2);

printf("Digite a quantidade de pontos turísticos: ");
scanf("%d", &Turismo2);

float Densidade2 = (float)População2 / Área2;
float PibPerCapita2 = PIB2 / (float)População2;
float InversoDensidade2 = 1 / Densidade2;

float SuperPoder2 = (float)(População2 + Área2 + PIB2 + Turismo2 + PibPerCapita2 + InversoDensidade2);


printf("\nCarta criada com sucesso!\n");

printf("\nCarta 2:\n");
printf("Estado: %c\n", Estado2);
printf("Código: %s\n", Código2);
printf("Cidade: %s\n", Cidade2);
printf("População: %lu\n", População2);
printf("Área: %.2f km²\n", Área2);
printf("PIB: %.2f bilhões de reais\n", PIB2);
printf("Pontos Turísticos: %d\n", Turismo2);
printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
printf("PIB per Capita: %f mil reais\n", PibPerCapita2);

int PopVence = População > População2;
int ÁreaVence = Área > Área2;
int PIBVence = PIB > PIB2;
int TurismoVence = Turismo > Turismo2;
int PibPerCapitaVence = PibPerCapita > PibPerCapita2;
int SuperPoderVence = SuperPoder > SuperPoder2;

//Densidade menor vence 

int VenceDensidade = Densidade < Densidade2;


printf("\nResultados da comparação entre as cartas:\n");
printf("População: %s\n", PopVence ? "Carta 1 vence" : "Carta 2 vence");
printf("Área: %s\n", ÁreaVence ? "Carta 1 vence" : "Carta 2 vence");
printf("PIB: %s\n", PIBVence ? "Carta 1 vence" : "Carta 2 vence");
printf("Pontos Turísticos: %s\n", TurismoVence ? "Carta 1 vence" : "Carta 2 vence");
printf("PIB per Capita: %s\n", PibPerCapitaVence ? "Carta 1 vence" : "Carta 2 vence");
printf("Densidade Populacional: %s\n", VenceDensidade ? "Carta 1 vence" : "Carta 2 vence");
printf("Super Poder: %s\n", SuperPoderVence ? "Carta 1 vence" : "Carta 2 vence");

return 0;

}
