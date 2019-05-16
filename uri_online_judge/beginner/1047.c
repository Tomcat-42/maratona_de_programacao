//Pablo Alessandro Santos Hugen
//Dado o tempo inicial com minutos, esse programa calcula o tempo total de jogo
#include <stdio.h>

int main()
{
	int h0,m0,hf,mf,m0t,mft,tempo=0;
	scanf("%d %d %d %d",&h0,&m0,&hf,&mf);
	
	//Conversão para segundos para simplificar
	m0t = (h0*60)+ m0;	
	mft = (hf*60)+ mf;
	
	//calculo do tempo total
	tempo = (m0t>=mft) ? ((1440 - m0t) + mft) : (mft -m0t);
	
	//printa o tempo total em horas e minutos
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(tempo/60),(tempo%60));
}


