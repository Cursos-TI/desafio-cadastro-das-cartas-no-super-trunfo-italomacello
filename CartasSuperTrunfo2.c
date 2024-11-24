#include <stdio.h>
int main(){

int populacao1, populacao2, populacao3, populacao4;
int numeros1, numeros2, numeros3, numeros4;
int b = 0;
int i = 1;
int y = 2;
int x = 3;
int c = 4;
double capita1, capita2, capita3, capita4;
double desindade1, desindade2, desindade3, densidade4;
double area1, area2, area3, area4;
double pib1, pib2, pib3, pib4;
double super1, super2, super3, super4;
char pais[50];
char codigo1, codigo2, codigo3, codigo4; 
char estado[50];
char nome1[50], nome2[50], nome3[50], nome4[50];

printf("Insira o nome do PAÍS: \n");
scanf("%s", &pais);
printf("Insira o Estado: \n");
scanf("%s", &estado);
printf("Insira o Código da cidade 1:\n");
scanf("%s", &codigo1, &b, &i);
printf("Insira o Nome da cidade 1:\n"); 
scanf("%s", &nome1);
printf("Insira a população: \n");
scanf("%d", &populacao1);
printf("Insira a área: \n");
scanf("%lg", &area1);
printf("Insira o PIB: \n");
scanf("%lg", &pib1);
printf("Insira o Números de Pontos Turísticos: \n");
scanf("%d", &numeros1);

printf("País: %s \n", pais);
printf("Estado : %s \n", estado);
printf("Código da Cidade: %c%d%d \n", codigo1, b, i);
printf("Cidade 1: %s \n", nome1);
printf("População: %d \n", populacao1);
printf("Área: %lg KM \n", area1);
desindade1 = populacao1 / area1;
printf("Densidade populacional : %lg pessoas/km² \n", desindade1);
printf("PIB: %lg bilhões de reais \n", pib1);
capita1 = populacao1 / pib1;
printf("PIB per Capita : %lg reais \n", capita1);
printf("Numeros de pontos turísticos : %d \n", numeros1);
super1 = populacao1 + area1 + desindade1 + capita1 + numeros1;


printf("Insira o Código da cidade 2:\n");
scanf("%s", &codigo2, &b, &i);
printf("Insira o Nome da cidade 2:\n"); 
scanf("%s", &nome2);
printf("Insira a população: \n");
scanf("%d", &populacao2);
printf("Insira a área: \n");
scanf("%lg", &area2);
printf("Insira o PIB: \n");
scanf("%lg", &pib2);
printf("Insira o Números de Pontos Turísticos: \n");
scanf("%d", &numeros2);

printf("País: %s \n", pais);
printf("Estado : %s \n", estado);
printf("Código da Cidade: %c%d%d \n", codigo2, b, y);
printf("Cidade 2: %s \n", nome2);
printf("População: %d \n", populacao2);
printf("Área: %lg KM \n", area2);
desindade1 = populacao2 / area2;
printf("Densidade populacional : %lg pessoas/km² \n", desindade1);
printf("PIB: %lg bilhões de reais \n", pib2);
capita2 = populacao2 / pib2;
printf("PIB per Capita : %lg reais \n", capita2);
printf("Numeros de pontos turísticos : %d \n", numeros2);
super2 = populacao2 + area2 + desindade2 + capita2 + numeros2;

printf("Insira o Código da cidade 3:\n");
scanf("%s", &codigo3, &b, &x);
printf("Insira o Nome da cidade 3:\n"); 
scanf("%s", &nome3);
printf("Insira a população: \n");
scanf("%d", &populacao3);
printf("Insira a área: \n");
scanf("%lg", &area3);
printf("Insira o PIB: \n");
scanf("%lg", &pib3);
printf("Insira o Números de Pontos Turísticos: \n");
scanf("%d", &numeros3);

printf("País: %s \n", pais);
printf("Estado : %s \n", estado);
printf("Código da Cidade: %c%d%d \n", codigo3, b, x);
printf("Cidade 3: %s \n", nome3);
printf("População: %d \n", populacao3);
printf("Área: %lg KM \n", area3);
desindade3 = populacao3 / area3;
printf("Densidade populacional : %lg pessoas/km² \n", desindade3);
printf("PIB: %lg bilhões de reais \n", pib3);
capita3 = populacao3 / pib3;
printf("PIB per Capita : %lg reais \n", capita3);
printf("Numeros de pontos turísticos : %d \n", numeros3);
super3 = populacao3 + area3 + desindade3 + capita3 + numeros3;

printf("Insira o Código da cidade 4:\n");
scanf("%s", &codigo4, &b, &c);
printf("Insira o Nome da cidade 4:\n"); 
scanf("%s", &nome4);
printf("Insira a população: \n");
scanf("%d", &populacao4);
printf("Insira a área: \n");
scanf("%lg", &area4);
printf("Insira o PIB: \n");
scanf("%lg", &pib4);
printf("Insira o Números de Pontos Turísticos: \n");
scanf("%d", &numeros4);

printf("País: %s \n", pais);
printf("Estado : %s \n", estado);
printf("Código da Cidade: %c%d%d \n", codigo4, b, c);
printf("Cidade 3: %s \n", nome4);
printf("População: %d \n", populacao4);
printf("Área: %lg KM \n", area4);
densidade4 = populacao4 / area4;
printf("Densidade populacional : %lg pessoas/km² \n", densidade4);
printf("PIB: %lg bilhões de reais \n", pib4);
capita4 = populacao4 / pib4;
printf("PIB per Capita : %lg reais \n", capita4);
printf("Numeros de pontos turísticos : %d \n", numeros4);
super4 = populacao4 + area4 + densidade4 + capita4 + numeros4;

printf(" VAMOS JOGAR AS CARTAS DO SUPER TRUNFO\n");
printf(" JOGADOR 1- Digite o codigo da Cidade1: \n");
scanf("%s", &codigo1, b, i);
printf(" JOGADOR 2- Digite o codigo da Cidade4: \n");
scanf("%s", &codigo4, b, c);

printf("Comparando os Super Poder das cartas\n");
printf(" Carta vencedora: %d\n", super1 >= super4);


return 0;
}