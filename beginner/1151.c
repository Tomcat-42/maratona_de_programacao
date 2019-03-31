#include <stdio.h>

int main()
{
	int n,a=0,b=1,som=0,aux=0,i;

	scanf("%d",&n);
	if(n==0 || n==1)
	{
		printf("%d",n);
		return 0;
	}	

	for(i=0;i<n;i++)
	{
		
			printf("%d",a);
			if(i<n-1)
			{
				printf(" ");

			}
	
			som = (a + b);
			aux = a;
			a = b;
			b = som;
		
	}
}
