#include <stdio.h>

int main()
{
	int maior,n,l;
	
	while(scanf("%d",&n)!=EOF)
	{
		maior=0;
		while(n--)
		{
			scanf("%d",&l);
			if(l>maior)
				maior=l;
		}
	
		if(maior<10)
			printf("1\n");
		else if(maior<20)
			printf("2\n");
		else
			printf("3\n");
	}
}
