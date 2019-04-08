#include <stdio.h>

int main()
{
	int i,j,k;

	for(k=1,i=1,j=7;i<=9;k++,j--)
	{
		printf("I=%d J=%d\n",i,j);
		if(k==3)
		{
			k=0;
			i+=2;
			j+=5;
		}
	}

}
