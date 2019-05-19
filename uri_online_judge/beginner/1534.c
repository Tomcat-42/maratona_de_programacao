//Pablo AS Hugen
//Printa uma matriz de acordo com(?)
#include <stdio.h>
#define ORDEM_MAX 100

//'tipo' matriz
typedef struct
{
	int mat[ORDEM_MAX][ORDEM_MAX];
	int n;
}matriz;

//constroi uma matriz quadrada de ordem n
void consMat(matriz *a);

//printa uma matriz quadrada de ordem n
void printMat(matriz a);

int main()
{
	matriz a;
	while(scanf("%d",&a.n)!=EOF)
	{
		consMat(&a);
		printMat(a);
	}
}

void consMat(matriz *a)
{
	int i,j;
	for(i=0;i<a->n;i++)
		for(j=0;j<a->n;j++)
		{
			if(i+j==a->n-1)
				a->mat[i][j]=2;
			else if(i==j)
				a->mat[i][j]=1;
			else
				a->mat[i][j]=3;
		}
}

void printMat(matriz a)
{
	int i,j;
	for(i=0;i<a.n;i++)
	{
		for(j=0;j<a.n;j++)
			printf("%d",a.mat[i][j]);	
		printf("\n");
	}
}
