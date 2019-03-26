#include <stdio.h>
#include <math.h>

int div(int x,int y)
{
	return(x/y);
}

int mod(int x, int y)
{
	return(x%y);
}

float div_moeda(float x, float y)
{
	return(x/y);
}


int main()
{
	float N=0,resto=0;
	scanf("%f", &N);
	if ((N<=0) || (N>=1000000))
	{
		return 0;
	}
	
	
	printf("NOTAS:\n");

	
	printf("%.2f\n",N);	
	printf("%d nota(s) de R$ 100,00\n",div(N,100.00));
	if(mod(N,100.00) != 0)
	{
		resto = mod(N,100.00); 
	}

	printf("%d nota(s) de R$ 50,00\n",div(resto,50.00));
	if(mod(resto,50.00) != 0)
 	{
		resto = mod(resto,50.00);		
	}
	
	printf("%d nota(s) de R$ 20,00\n",div(resto,20.00));
	if(mod(resto,20.00) != 0)
 	{
		resto = mod(resto,20.00);		
	}
	
	printf("%d nota(s) de R$ 10,00\n",div(resto,10.00));
	if(mod(resto,10.00) != 0)
 	{
		resto = mod(resto,10.00);		
	}

	printf("%d nota(s) de R$ 5,00\n",div(resto,5.00));
	if(mod(resto,5.00) != 0)
 	{
		resto = mod(resto,5.00);		
	}

	
	printf("%d nota(s) de R$ 2,00\n",div_moeda(resto,2.00));
	if(fmod(resto,2.00) != 0)
 	{
		resto = fmod(resto,2.00);		
	}

	printf("%f",resto);	

	/*
	printf("MOEDAS:\n");
	
	
	printf("%d moeda(s) de R$ 1,00\n",div(resto,1.00));
	if(mod(resto,1.00) != 0)
 	{
		resto = fmod(resto,1.00);		
	}
	
	printf("\n\n\n %f",resto);
	
	
	printf("%f moeda(s) de R$ 0.50\n",div(resto,0.50));
	if(mod(resto,1.00) != 0)
 	{
		resto = fmod(resto,0.50);		
	}

	*/


	
}




