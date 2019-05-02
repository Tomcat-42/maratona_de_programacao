//Pablo Alessandro Hugen
//Dado a posição do mês no ano, esse algoritmo printa seu nome utilizando enum.

#include <stdio.h>

//meses do ano e suas respectivas posições,começando com 0
enum meses_ano{January=1,February,March,April,May,June,July,August,September,October,November,December}mes;

//printa o nomedo mês de acordo com a sua posição
const char* print_mes(enum meses_ano mes);

int main()
{
	scanf("%d",&mes);
	printf("%s",print_mes(mes));
}

const char* print_mes(enum meses_ano mes)
{
	switch(mes)
	{
		case January:return("January\n");
		case February:return("February\n");
		case March:return("March\n");
		case April:return("April\n");
		case May:return("May\n");
		case June:return("June\n");	
		case July:return("July\n");
		case August:return("August\n");
		case September:return("September\n");
		case October:return("October\n");
		case November:return("November\n");
		case December:return("December\n");
		default:return("");	
	}	
}
