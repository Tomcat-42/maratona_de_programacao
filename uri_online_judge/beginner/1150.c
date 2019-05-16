//Pablo AS Hugen
//Dados dois inteiros x e z, esse algoritmo calcula o mínimo de n°s sequenciais de x que devem ser somados a ele a fim de ultrapassar z
#include <stdio.h>

int main()
{
	int x,z,i,j;
	
	//lê x
	scanf("%d",&x);
	//lê um z maior que x
	do
	{
		scanf("%d",&z);
	}while(z<=x);
	
	//Calcula o resultado
	for(i=x+1,j=1;x<=z;i++,j++)
	{
		x+=i;
	}
	//printa o resultado
	printf("%d\n",j);
}


