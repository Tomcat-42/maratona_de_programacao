#include <stdio.h>
//#define MAX_H 10001
int main()
{
	
	int j,i,samples,h[10000],peaks;
	
	
	while(1)
	{
		scanf("%d",&samples);
		if(samples == 0)
		{
			break;
		}

		peaks=0;
		
		for(i=0;i<samples;i++)
		{
			scanf("%d",&h[i]);
		}
		//desgraça
		i--;
		
		
		if( ((h[i]>h[i-1]) && (h[i]>h[0])) || ((h[i]<h[i-1]) && (h[i]<h[0])))
			peaks++;
			
		if( (h[0]>h[1] && h[0]>h[i]) || (h[0]<h[1] && h[0]<h[i]))
			peaks++;
				
		for(j=1;j<i;j++)
		{
			if(((h[j]>h[j-1]) && (h[j]>h[j+1])) || ((h[j]<h[j-1]) && (h[j]<h[j+1])))
				peaks++;	
		}
	
		printf("%d\n",peaks);
	}
}
