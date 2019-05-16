//Pablo AS Hugen
//Dada uma matriz 12x12, esse algoritmo retorna a soma ou a média dos elementos acima da diagonal principal 
#include <stdio.h>
#define I 12 
#define J 12

//retorna a soma ou a média dos elementos acima da diagonal principal
float sum_avg(char op);

//le um array 2d de IxJ
void scn(float array[I][J]);

int main()
{
	//matriz
	float z[I][J];
	char op;
	
	//lê a operação
	op = getchar();
	//lê o array 2d
	scn(z);


}

void scn(float array[J][J])
{
	int i,j;
	for(i=0;i<I;i++)
		for(j=0;j<J;j++)
			scanf("%f",&array[i][j]);
}

float sum_(float array[I][J])
{
	float sum=0;
	int i,j;
	for(i=0;i<I;i++)
		for(j=0;j<J;j++)
			if(i>j){sum+=array[i][j];}
	return sum;
}

