#include <stdio.h>

int main()
{
	int n,i,total=0,total_c=0,total_r=0,total_s=0,num;
	char cobaia;

	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d %c",&num,&cobaia);
		if(cobaia == 'C')
		{
			total+=num;
			total_c+=num;	
		}	
		else if(cobaia == 'S')
		{
			total+=num;
			total_s+=num;	
		}	
		else if(cobaia == 'R')
		{
			total+=num;
			total_r+=num;	
		}	
	}
	printf("Total: %d cobaias\n",total);
	printf("Total de coelhos: %d\n",total_c);
	printf("Total de ratos: %d\n",total_r);
	printf("Total de sapos: %d\n",total_s);
	printf("Percentual de coelhos: %.2f %%\n",((float)total_c/(float)total*100));
	printf("Percentual de ratos: %.2f %%\n",(float)((float)total_r/(float)total*100));
	printf("Percentual de sapos: %.2f %%\n",(float)((float)total_s/(float)total*100));
}
