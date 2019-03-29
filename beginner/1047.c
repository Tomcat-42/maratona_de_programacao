#include <stdio.h>

int main()
{
	int h0,m0,hf,mf,m0t,mft,tempo=0;
	scanf("%d %d %d %d",&h0,&m0,&hf,&mf);
	
	m0t = (h0*60)+ m0;	
	mft = (hf*60)+ mf;
	
	//printf("%d %d",m0t,mft);

	if(m0t>=mft)
	{
		tempo = (1440 - m0t);
		tempo = (tempo + mft);	
	}
	else
	{
		tempo = (mft - m0t);

	}
	//printf("%d",tempo);
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(tempo/60),(tempo%60));

}


