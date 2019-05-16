//Pablo AS Hugen
//Dadas N notas,esse algoritmo calcula a média daquelas no intervalo [0,10]
#include <stdio.h>

int main()
{
	float nota,sum=0;
	int i=0;

	for(i=0;i<2;)
	{
		scanf("%f",&nota);
		if(nota>=0 && nota<=10)
		{
			sum+=nota;
			i++;
		}
		else
		{
			printf("nota invalida\n");
		}
	}
	printf("media = %.2f\n",sum/2.0);
	 
}
