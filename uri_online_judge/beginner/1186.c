//Pablo AS Hugen
//Dada uma matriz 12x12, esse algoritmo retorna a soma ou a média dos elementos pertencentes a uma condição
#include <stdio.h>
#define I 12 
#define J 12
#define COND ((i+j)>I-1)

typedef struct
{
	float mat[I][J];
}matriz;

//retorna a soma ou a média dos elementos acima da diagonal principal
float sum_avg(matriz A,char op);

//le um array 2d de IxJ
void scn(matriz *A);

int main()
{
	//matriz
	matriz A;
	char op;
	
	//lê a operação
	op = getchar();
	//lê o array 2d
	scn(&A);
	//printa o resultado
	printf("%.1f\n",sum_avg(A,op));


}

void scn(matriz *A)
{
	int i,j;
	for(i=0;i<I;i++)
		for(j=0;j<J;j++)
			scanf("%f",&A->mat[i][j]);
}

float sum_avg(matriz A,char op)
{
	float sum=0;
	int i,j,m=0;
	for(i=0;i<I;i++)
		for(j=0;j<J;j++)
			if(COND)
			{
				sum+=A.mat[i][j];
				m++;
			}
	return (op=='S')?(sum):(sum/m);
}

