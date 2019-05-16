//Pablo AS Hugen
//Dado um valor n, esse algoritmo gera um vetor de 10 posições com a primeira posição sendo n e as conseguentes sendo a anterior*2
#include <stdio.h> 

//gera o vetor
void array_g(int *array,int n);
//printa o vetor
void array_p(int *array);

int main()
{
	int array[10],n;
	scanf("%d",&n);
	array_g(array,n);
	array_p(array);
}

void array_g(int *array,int n)
{
	int i;
	array[0]=n;
	for(i=1;i<10;i++)
		array[i]=array[i-1]*2;
}

void array_p(int *array)
{
	int i;
	for(i=0;i<10;i++)
		printf("N[%d] = %d\n",i,array[i]);
}
