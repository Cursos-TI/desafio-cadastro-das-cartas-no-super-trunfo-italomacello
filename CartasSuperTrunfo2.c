#include <stdio.h>
int main(){

int populacao;
int numeros;
int b = 0;
int i = 1;
double area;
double pib;
char codigo;
char estado[50];
char nome[50];

printf("Insira o Estado: \n");
scanf("%s", &estado);
printf("Insira o Código da cidade:\n");
scanf("%s", &codigo);
printf("Insira o Nome da cidade:\n"); 
scanf("%s", &nome);
printf("Insira a população: \n");
scanf("%d", &populacao);
printf("Insira a área: \n");
scanf("%lg", &area);
printf("Insira o PIB: \n");
scanf("%lg", &pib);
printf("Insira o Números de Pontos Turísticos: \n");
scanf("%d", &numeros);
printf("Estado : %s \n", estado);
printf("Código da Cidade: %c%d%d\n", codigo, b, i);
printf("Cidade: %s \n", nome);
printf("População: %d \n", populacao);
printf("Área: %lg KM \n", area);
printf("PIB: %lg bilhões de reais \n", pib);
printf("Numeros de pontos turísticos : %d \n", numeros);



return 0;
}