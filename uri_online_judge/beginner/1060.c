//Pablo A.S Hugen
//Dado 6 valores, esse algoritmo printa quanos deles são positivos
#include <stdio.h>

int main()
{
	int i,pos=0;
	float num[6];

	for(i=0;i<6;i++)
	{
		scanf("%f",&num[i]);
		if(!num[i])
		{
			continue;
		}
		
		if(num[i]>0)
		{
			pos++;
		}
		

	}
	printf("%d valores positivos\n",pos);
}
