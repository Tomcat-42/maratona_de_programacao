//Pablo AS Hugen
//Dado um número n, esse algoritmo preenche um vetor de 1000 posições com repetidas sequencias de 0 até n-1
#include <stdio.h>

int main()
{
	int n,i,j=0;
	scanf("%d",&n);
	for(i=0;i<1000;)
	{
		printf("N[%d] = %d\n",i++,j++);
		if(j==n)j=0;
	}
}
