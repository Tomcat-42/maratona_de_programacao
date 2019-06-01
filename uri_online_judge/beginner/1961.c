#include <stdio.h>
#include <stdlib.h>

int resul(int pulo,int *canos,int n_canos);

int main()
{
	int pulo,canos[100],n_canos,i;
	scanf("%d %d",&pulo,&n_canos);
	for(i=0;i<n_canos;i++)
		scanf("%d",&canos[i]);
	printf("%s\n",(resul(pulo,canos,n_canos))?("YOU WIN"):("GAME OVER"));
}

int resul(int pulo,int *canos,int n_canos)
{
	if(n_canos==1)
	{
		if(abs(canos[n_canos]-canos[n_canos-1])>pulo)
			return 0;
		else
			return 1;
	}
		
	if(abs(canos[n_canos-1]-canos[n_canos-2])>pulo)
		return 0;
	
	return(resul(pulo,canos,n_canos-1));
}
