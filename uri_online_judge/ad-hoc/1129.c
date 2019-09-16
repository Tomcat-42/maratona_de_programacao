#include <stdio.h>

int main()
{
	int n, alternativas[5];
	int i,j, preto, index;;
	while(scanf("%d", &n) && n)
	{
		for(j=0; j<n; j++)
		{
			preto = 0;
	
			for(i=0; i<5; i++)
			{
				scanf("%d", &alternativas[i]);
				if(alternativas[i]<=127)
				{
					preto++;
					index = i;
				}
			}
			if(preto == 1)
				printf("%c\n", (65+index));
			else
				printf("*\n");
		}
	}
}
