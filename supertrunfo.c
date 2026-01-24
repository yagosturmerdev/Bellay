#include <stdio.h>

int main () {

char Estado, Estado2;
char Código [04], Código2 [04];
char Cidade [20], Cidade2 [20];
int População, População2;
float Área, Área2;
float PIB, PIB2;
int Turismo, Turismo2;

printf("Bem vindo ao SuperTrunfo, para começar faça duas cartas \n");

printf("Digite uma letra de A a H para representar um Estado: ");
scanf("%c", &Estado);

printf("Digite o código do Estado de 01 à 04: ");
scanf("%s", Código);

printf("Digite o nome da cidade: ");
scanf("%s[^\n]", Cidade);

printf("Digite a população da cidade: ");
scanf("%d", &População);

printf("Digite a área em km² : ");
scanf("%f", &Área);

printf("Digite o PIB da cidade: ");
scanf("%f", &PIB);

printf("Digite a quantidade de pontos turísticos: ");
scanf("%d", &Turismo);

printf("\nCarta criada com sucesso!\n");

printf("\nCarta 1:\n");
printf("Estado: %c\n", Estado);
printf("Código: %s\n", Código);
printf("Cidade: %s\n", Cidade);
printf("População: %d\n", População);
printf("Área: %.2f km²\n", Área);
printf("PIB: %.2f bilhões de reais\n", PIB);
printf("Pontos Turísticos: %d\n", Turismo);

printf("\nAgora faça a segunda carta! \n");

printf("\nDigite uma letra de A a H para representar um Estado: ");
scanf(" %c", &Estado2);

printf("Digite o código do Estado de 01 à 04: ");
scanf("%s", Código2);

printf("Digite o nome da cidade: ");
scanf("%s[^\n]", Cidade2);

printf("Digite a população da cidade: ");
scanf("%d", &População2);

printf("Digite a área em km² : ");
scanf("%f", &Área2);

printf("Digite o PIB da cidade: ");
scanf("%f", &PIB2);

printf("Digite a quantidade de pontos turísticos: ");
scanf("%d", &Turismo2);

printf("\nCarta criada com sucesso!\n");

printf("\nCarta 2:\n");
printf("Estado: %c\n", Estado);
printf("Código: %s\n", Código2);
printf("Cidade: %s\n", Cidade2);
printf("População: %d\n", População2);
printf("Área: %.2f km²\n", Área2);
printf("PIB: %.2f bilhões de reais\n", PIB2);
printf("Pontos Turísticos: %d\n", Turismo);

return 0;

}