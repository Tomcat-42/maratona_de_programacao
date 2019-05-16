//Pablo A.S. Hugen
//Dado um número N,esse algoritmo mostra todos os números entre 1 e 10000 que divididos por N dão módulo 2.

#include <stdio.h>

int main()
{
	int n,i;
	scanf("%d",&n);

	for(i=1;i<=10000;i++)
	{
		(i%n==2)?(printf("%d\n",i)): printf("");
	}
}
