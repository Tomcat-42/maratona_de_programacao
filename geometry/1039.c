#include <stdio.h>
#include <math.h>

float d12(x1,y1,x2,y2)
{
	return sqrt((pow((x1 - x2),2.0) + pow((y1 - y2),2.0)));
}

int main()
{
	int r1=0,x1=0,y1=0;
	int r2=0,x2=0,y2=0;

	while(scanf("%d %d %d %d %d %d",&r1,&x1,&y1,&r2,&x2,&y2) != EOF)
	{
		if((d12(x1,y1,x2,y2) + r2) <= r1)
		{
			printf("RICO\n");
		}
		else
		{
			printf("MORTO\n");
		}
	}
			
}
