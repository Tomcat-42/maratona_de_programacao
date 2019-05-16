//Pablo A.S. Hugen
//Dado um número n, esse algoritmo printa os números ímpares entre 1 e n,inclusive.
#include <stdio.h>

int main()
{
	int num,i;
	scanf("%d",&num);
	
	for(i=1;i<=num;i+=2)
	{
		printf("%d\n",i);
	}
}
