#include <stdio.h>

int main()
{
	int i,par=0,num[6]={};;

	for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
		
		if(num[i]%2==0)
		{
			par++;
		}
		

	}
	printf("%d valores pares\n",par);
}

