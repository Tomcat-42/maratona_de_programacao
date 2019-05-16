//Pablo AS Hugen
//Dado um número n, esse algoritmo calcula e printa seus divisores
#include <stdio.h>

int main()
{
	int n,i;
	scanf("%d",&n);
	
	printf("1\n");
	for(i=2;i<n;i++)
	{
		if(!(n%i)) printf("%d\n",i);
	}
	printf("%d\n",n);
}
