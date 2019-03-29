#include <stdio.h>

int main()
{
	int h0,hf,i,tempo=0;
	scanf("%d %d",&h0,&hf);
	
	if(h0>=hf)
	{
		for(i=h0;i<24;i++)
		{
			tempo++;
		}
		
		for(i=0;i<hf;i++)
		{
			tempo++;
		}
		
	}
	else
	{
		for(i=h0;i<hf;i++)
		{
			tempo++;
		}

	}
	printf("O JOGO DUROU %d HORA(S)\n",tempo);
}
