#include <stdio.h>

int main()
{
	int par[5],impar[5],input;
	int i,j=0,k=0,l;
	for(i=0;i<15;i++)
	{
		scanf("%d",&input);
	
		if(input%2)
			impar[j++] = input;
		else
			par[k++] = input;
		
		if(k==5)
		{
			k=0;
			for(l=0;l<5;l++)
				printf("par[%d] = %d\n",l,par[l]);
		}
		if(j==5)
		{
			j=0;
			for(l=0;l<5;l++)
				printf("impar[%d] = %d\n",l,impar[l]);
		}
		
	}
		for(l=0;l<j;l++)
			printf("impar[%d] = %d\n",l,impar[l]);
		for(l=0;l<k;l++)
			printf("par[%d] = %d\n",l,par[l]);
}
