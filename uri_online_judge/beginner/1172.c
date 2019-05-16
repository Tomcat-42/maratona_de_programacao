//Pablo AS Hugen
//Dado um array com 10 posições, esse algoritmo substitui os valores menores ou iguais a zero por 1  então imprime o vetor

#include <stdio.h>

//substitui todos os valores <=0 de um vetor por 1
void array_sub(int *array);

int main()
{
	int i,array[10];
	
	
	for(i=0;i<10;i++)
		scanf("%d",&array[i]);
	
	array_sub(array);
	
	for(i=0;i<10;i++)
		printf("X[%d] = %d\n",i,array[i]);

}

void array_sub(int array[])
{
	//contador
	int i;

	for(i=0;i<10;i++)
	{
		if(array[i] <= 0)
		{
			array[i] = 1;
		}
	}
}
