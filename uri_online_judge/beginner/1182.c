//Pablo AS Hugen
//Dada todos os elementos de uma matriz z ,12x12, uma coluna x, e um char c S(soma) ou M(media), esse algoritmo realiza a operação c na linha l da matriz z
#include <stdio.h>
#define ORDEM 12

//Retorna a soma da linha
float sum(float z[ORDEM][ORDEM],int coluna);

//Retorna a média aritmética da linha
float avg(float z[ORDEM][ORDEM],int coluna);

//le um array 2d de 12x12
void scn(float array[ORDEM][ORDEM]);

int main()
{
	float z[ORDEM][ORDEM];
	int x;
	char c;

	scanf("%d %c",&x,&c);
	scn(z);
	printf("%.1f\n",(c=='S')?(sum(z,x)):(avg(z,x)));
}

void scn(float array[ORDEM][ORDEM])
{
	int i,j;
	for(i=0;i<ORDEM;i++)
		for(j=0;j<ORDEM;j++)
			scanf("%f",&array[i][j]);
}

float avg(float z[ORDEM][ORDEM],int coluna)
{
	float sum=0;
	int i;
	for(i=0;i<ORDEM;i++)
		sum+=z[i][coluna];
	return sum/ORDEM;
}
float sum(float z[ORDEM][ORDEM],int coluna)
{
	int sum=0,i;
	for(i=0;i<ORDEM;i++)
		sum+=z[i][coluna];
	return sum;
}
