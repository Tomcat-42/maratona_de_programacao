//Pablo A.S. Hugen
//Dado um valor N, esse algoritmo mostra os quadrados dos pares entre 1 e N,inclusive

#include <stdio.h>

int main()
{
	int n,i;

	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		if(i%2==0){printf("%d^2 = %d\n",i,i*i);}
	}
}
