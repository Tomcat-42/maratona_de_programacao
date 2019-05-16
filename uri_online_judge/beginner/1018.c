#include <stdio.h>

int div(int x,int y)
{
	return(x/y);
}

int mod(int x, int y)
{
	return(x%y);
}

int main()
{
	int N=0,notas=0,resto=0;
	scanf("%d", &N);
	if ((N<=0) || (N>=1000000))
	{
		return 0;
	}
	printf("%d\n",N);	
	printf("%d nota(s) de R$ 100,00\n",div(N,100));
	if(mod(N,100) != 0)
	{
		resto = mod(N,100); 
	}

	printf("%d nota(s) de R$ 50,00\n",div(resto,50));
	if(mod(resto,50) != 0)
 	{
		resto = mod(resto,50);		
	}
	
	printf("%d nota(s) de R$ 20,00\n",div(resto,20));
	if(mod(resto,20) != 0)
 	{
		resto = mod(resto,20);		
	}
	
	printf("%d nota(s) de R$ 10,00\n",div(resto,10));
	if(mod(resto,10) != 0)
 	{
		resto = mod(resto,10);		
	}

	printf("%d nota(s) de R$ 5,00\n",div(resto,5));
	if(mod(resto,5) != 0)
 	{
		resto = mod(resto,5);		
	}

	printf("%d nota(s) de R$ 2,00\n",div(resto,2));
	
 	resto = mod(resto,2);		
	printf("%d nota(s) de R$ 1,00\n",div(resto,1));
}




