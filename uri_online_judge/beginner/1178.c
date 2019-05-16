//Pablo AS Hugen
//Dado um número n, esse algoritmo preenche a primeira posição de um vetor de 100 posições com n e as posições sequenciais com a metade da posição anterior
#include <stdio.h>

int main()
{
	int i;
	double n,array[100];
	scanf("%lf",&n);
	
	array[0]=n;
	printf("N[0] = %.4lf\n",array[0]);

	for(i=1;i<100;i++)
	{
		array[i] = (array[i-1])/(double)2;
		printf("N[%d] = %.4lf\n",i,array[i]);
	}
}
