#include <stdio.h>

int main()
{
	int x,i;
	while(scanf("%d",&x) && x)
		for(i=1;i<=x;i++)
			printf("%d%s",i,(i<x)?(" "):("\n"));	
}
