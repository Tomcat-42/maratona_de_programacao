//Pablo AS Hugen
//Dado um inteiro n, esse algoritmo calcula a soma de 5 pares consecutivos a partir de n

#include <stdio.h>

int main()
{
	int n,i,j,sum;
	while(scanf("%d",&n) && n)
	{
		sum=0;
		for(i=0,j=!(n%2)?n:n+1;i<5;i++,j+=2)
		{
			sum+=j;
		}
		printf("%d\n",sum);
	}
}
