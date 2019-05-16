//Pablo AS Hugen
//Dada todos os elementos de uma matriz z ,12x12, uma linha l, e um char c S(soma) ou M(media), esse algoritmo realiza a operação c na linha l da matriz z
#include <stdio.h>
#define ORDEM 12

//Retorna a soma da linha
float sum(float *line);

//Retorna a média aritmética da linha
float avg(float *line);

//le um array 2d de 12x12
void scn(float array[ORDEM][ORDEM]);

int main()
{
	float z[ORDEM][ORDEM];
	int l;
	char c;

	scanf("%d %c",&l,&c);
	scn(z);
	printf("%.1f\n",(c=='S')?(sum(z[l])):(avg(z[l])));
}

void scn(float array[ORDEM][ORDEM])
{
	int i,j;
	for(i=0;i<ORDEM;i++)
		for(j=0;j<ORDEM;j++)
			scanf("%f",&array[i][j]);
}

float avg(float *line)
{
	int sum=0,i;
	for(i=0;i<ORDEM;i++)
		sum+=*(line + i);
	return sum/ORDEM;
}

float sum(float *line)
{
	int sum=0,i;
	for(i=0;i<ORDEM;i++)
		sum+=*(line + i);
	return sum;
}
