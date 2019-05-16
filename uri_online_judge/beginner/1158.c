//Pablo AS Hugen
//Dados dois inteiros ,x e y, esse algoritmo calcula a soma dos y inteiros ímpares consecutivos a partir de x
#include <stdio.h>

int main()
{
	int j,i,n,x,y,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=0;
		scanf("%d %d",&x,&y);
		for(j=x%2?x:x+1;y>0;j+=2)
		{
			sum+=j;
			y--;
		}
		printf("%d\n",sum);
	}
}
