//Pablo AS Hugen
//Printa uma matriz A de acordo com: a[i][j]=2^i+j
#include <stdio.h>
#include <math.h>
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

//o número de dígitos de uma potencia do tipo 2^n é dado por n*log10(2)+1
int digits(int n);

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
	int i,j;
	for(i=0;i<a->n;i++)
		for(j=0;j<a->n;j++)
			a->mat[i][j]=(int)pow(2.0,i+j);
}

void printMat(matriz a)
{
	int i,j;
	for(i=0;i<a.n;i++)
	{
		for(j=0;j<a.n;j++)
			printf("%*.d%s",digits((a.n-1)*2),a.mat[i][j],(j<a.n-1)?(" "):(""));	
		printf("\n");
	}
	printf("\n");
}

int digits(int n)
{
	return n*log10(2)+1;
}
