//Pablo Alessandro Santos Hugen
//Dado um vetor de 20 posições, para todo n, esse algoritmo troca a posição n com a posição 20-n
#include <stdio.h>

//troca as posições de um array de n posições
void array_swp(int *array,int n);
//printa um array de n posições
void array_pnt(int *array,int n);
//lê um array de n posições
void array_scn(int *array,int n);

int main()
{
	int array[20];
	
	array_scn(array,20);
	array_swp(array,20);
	array_pnt(array,20);

}

void array_scn(int *array,int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
}

void array_pnt(int *array,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("N[%d] = %d\n",i,array[i]);
}

void array_swp(int *array,int n)
{
	int i,tmp;
	for(i=0;i<(int)(n/2);i++)
	{
		tmp = array[i];
		array[i] = array[(n-1)-i];
		array[(n-1)-i] = tmp;
	}
}
