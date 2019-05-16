//Pablo A.S. Hugen
//Dado 5 número, esse algoritmo mostra quantos são pares,impares,positivos e negativos
#include <stdio.h>

int main()
{
	int num[5],par=0,impar=0,pos=0,neg=0,i;

	for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
		if(num[i]>0)
		{
			pos++;
		}
		if(num[i]<0)
		{
			neg++;
		}
		
		if(num[i]%2==0)
		{
			par++;
		}
		else
		{
			impar++;
		}

	}
	printf("%d valor(es) par(es)\n",par);
	printf("%d valor(es) impar(es)\n",impar);
	printf("%d valor(es) positivo(s)\n",pos);
	printf("%d valor(es) negativo(s)\n",neg);
}
