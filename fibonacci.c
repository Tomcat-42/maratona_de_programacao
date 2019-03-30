#include <stdio.h>

int main()
{
	int n,a=0,b=1,c=0;

	scanf("%d",&n);


	while(c<=n)
	{

		printf("%d",a);

		if(c<n)
			printf(" ");
		
		
		c = (a + b);
		a = b;
		b = c;
		
	}
	//printf("\n");	

}
