//Pablo A.S. Hugen
//Dado 5 inteiros, esse algoritmo printa quantos deles são pares
#include <stdio.h>

int main()
{
	int i,par=0,num[5];

	for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
		
		if(num[i]%2==0)
		{
			par++;
		}
		

	}
	printf("%d valores pares\n",par);
}

