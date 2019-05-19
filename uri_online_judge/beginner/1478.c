//Pablo AS Hugen
//Printa uma matriz de acordo com(?)
//esse tmb n sei como fiz
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
	while(scanf("%d",&a.n) && a.n)
	{
		consMat(&a);
		printMat(a);
	}
}

void consMat(matriz *a)
{
	int i,j,k;
	for(k=0;k<a->n;k++)
		for(i=0;i<a->n;i++)
			for(j=0;j<a->n;j++)
				if(i==j+k || i==j-k)
					a->mat[i][j]=k+1;
}

void printMat(matriz a)
{
	int i,j;
	for(i=0;i<a.n;i++)
	{
		for(j=0;j<a.n;j++)
			printf("%3d%s",a.mat[i][j],(j<a.n-1)?(" "):(""));	
		printf("\n");
	}
	printf("\n");
}
