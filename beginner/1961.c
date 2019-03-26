#include <stdio.h>
#include <stdlib.h>

int main()
{
	int pulo=0,n_canos=0,i,end=1,alt_canos[99];
	
	scanf("%d\n%d",&pulo,&n_canos);

	for(i=0 ; i<n_canos ; i++)
	{
		scanf("%d",&alt_canos[i]);
	}
	
	for(i=1 ; i<n_canos ; i++)
	{
		
		
		if(abs(alt_canos[i] - alt_canos[i - 1]) > pulo)
		{
			end = 0;	
		}
	}
	
	if(end)
	{
		printf("YOU WIN\n");
	}
	else
	{
		printf("GAME OVER\n");
	}
		
}
