#include <stdio.h>

int main()
{
	int x,y;

	scanf("%d %d",&x,&y);

	while(x && y)
	{
		if(x>0 && y>0)
		{
			printf("primeiro\n");
		}
		else if(x<0 && y>0)
		{
			printf("segundo\n");
		}
		else if(x<0 && y<0)
		{
			printf("terceiro\n");
		}
		else
		{
			printf("quarto\n");
		}
		scanf("%d %d",&x,&y);
	}
}
