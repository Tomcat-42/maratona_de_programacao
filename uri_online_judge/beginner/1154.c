//Pablo AS Hugen
//Calcula a média de n valores

#include <stdio.h>

int main()
{
	int idade,sum=0,n=0;
	//lê valores até um ser negativo
	while(scanf("%d",&idade) && idade>=0)
	{
		sum+=idade;
		n++;
	}

	printf("%.2f\n",(float)sum/(float)n);
}


