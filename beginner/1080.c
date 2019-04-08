#include <stdio.h>

int main()
{
	int n,maior=0,pos_maior,i;

	for(i=1;i<=100;i++)
	{
		scanf("%d",&n);
		if(n>maior)
		{
			maior = n;
			pos_maior = i;
		}
	}
	printf("%d\n%d\n",maior,pos_maior);
}
