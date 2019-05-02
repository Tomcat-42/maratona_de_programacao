//Pablo Alessandro Santos Hugen
//Printa a sequência especificada
#include <stdio.h>
#include <math.h>

int main()
{
	int i,j;
	int k;
	for(k=10,i=0,j=100;i<=200;k+=10,j+=100)
	{
		if((i%100==0) && (j%100==0))
		{
			printf("I=%.0f J=%.0f\n",(float)((float)i/100.00),(float)((float)j/100.00));
		}
		else
		{
			printf("I=%.1f J=%.1f\n",(float)((float)i/100.00),(float)((float)j/100.00));
			//printf("I=%d J=%d\n",i,j);
		}
		if(k==30)
		{	
			k=0;
			i+=20;
			j=0;
			j+=i;

		}
	}

}

