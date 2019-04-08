#include <stdio.h>
#include <math.h>

int main()
{
	float i,j;
	int k;
	for(k=1,i=0,j=1;i<=2.2;k++,j++)
	{
		if(ceil(i)==i && ceil(j)==j)
			printf("I=%d J=%d\n",(int)trunc(i),(int)trunc(j));
		else
			printf("I=%.2f J=%.2f\n",i,j);
		if(k==3)
		{	
			k=0;
			i+=0.2;
			j=0;
			j+=i;

		}
	}

}
