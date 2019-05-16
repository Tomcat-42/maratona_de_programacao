#include <stdio.h>

int main()
{
	int a=0,b=0,c=0,menor=0,medio=0,maior=0;
	
	scanf("%d %d %d",&a,&b,&c);

	if((a >= b) && (a >= c))
	{
		maior = a;
		if(b >= c)
		{
			medio = b;
			menor = c;
		}
		else 
		{
			medio = c;
			menor = b;
		}
	}

	else if((b >= a) && (b >= c))
	{
		maior = b;
		if(a >= c)
		{
			medio = a;
			menor = c;
		}
		else 
		{
			medio = c;
			menor = a;
		}
	}
	else if((c >= a) && (c >= b))
	{
		maior = c;
		if(a >= b)
		{
			medio = a;
			menor = b;
		}
		else 
		{
			medio = b;
			menor = a;
		}
	}
	printf("%d\n%d\n%d\n\n",menor,medio,maior);
	printf("%d\n%d\n%d\n",a,b,c);
	
	
}
