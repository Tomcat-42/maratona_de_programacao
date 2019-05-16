//Pablo Alessandro Santos Hugen
//Dado um número N,esse algoritmo mostra a tabuada de N.
#include <stdio.h>

int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d x %d = %d\n",i,n,(i*n));
	}
}	
