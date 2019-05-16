//Pablo A.S. Hugen
//Dado um valor n, esse algoritmo printa 6 valores consecutivos a partir de n,inclusive
#include <stdio.h>

int main()
{
	int num,impar=0;
	
	scanf("%d",&num);

	while(impar<=5)
	{
		if(num%2!=0)
		{
			printf("%d\n",num);
			impar++;	
		}
		num++;
	}
}
