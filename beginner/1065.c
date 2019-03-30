#include <stdio.h>

int main()
{
	int i,pos=0,num[6]={};;

	for(i=0;i<6;i++)
	{
		scanf("%d",&num[i]);
		if(!num[i])
		{
			continue;
		}
		
		if(num[i]>0)
		{
			pos++;
		}
		

	}
	printf("%d valores positivos\n",pos);
}

