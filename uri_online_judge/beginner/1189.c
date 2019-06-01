//Pablo AS Hugen
//Dada uma matriz 12x12, esse algoritmo retorna a soma ou a média dos elementos pertencentes a uma condição
#include <stdio.h>
#include <math.h>
#define I 12 
#define J 12
#define COND ((j<i)&&((i+j)<I-1))

typedef struct
{
	double mat[I][J];
}matriz;

//retorna a soma ou a média dos elementos acima da diagonal principal
double sum_avg(matriz A,char op);

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
	//printa o resultado(truncado a partir da 1° casa decimal)
	//printf("%.1lf\n",((float)((int)(sum_avg(A,op)*100)/10)/10));
	printf("%.1lf\n",sum_avg(A,op));


}

void scn(matriz *A)
{
	int i,j;
	for(i=0;i<I;i++)
		for(j=0;j<J;j++)
			scanf("%lf",&A->mat[i][j]);
}

double sum_avg(matriz A,char op)
{
	double sum=0,m=0;
	int i,j;
	for(i=0;i<I;i++)
		for(j=0;j<J;j++)
			if(COND)
			{
				sum+=A.mat[i][j];
				m++;
			}
	return (op=='S')?(sum):((sum/m));
	//return sum;
}

