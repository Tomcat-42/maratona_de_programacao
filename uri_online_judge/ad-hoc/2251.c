#include <stdio.h>
#include <math.h>

int main()
{
	int i=0,n;

	while(1)
	{
		scanf("%d",&n);

		if(!n)
		{
			break;
		}
		i++;
		printf("Teste %d\n%d\n\n",i,((int)pow(2.0,n) - 1));
	}
}
