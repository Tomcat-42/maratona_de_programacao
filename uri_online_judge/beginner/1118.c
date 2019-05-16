//Pablo AS Hugen
//Dadas N notas,esse algoritmo calcula a média daquelas no intervalo [0,10], e repete o algoritmo se solicitado
#include <stdio.h>

int main()
{
	float nota,sum=0;
	int i=0;
	int x;
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
	while(printf("novo calculo (1-sim 2-nao)\n") && scanf("%d",&x))
	{
		if(x==1 || x==2)
		{
			break;
		}
	}
	
	if(x==1)
		main();
	else
		return 0;
}
