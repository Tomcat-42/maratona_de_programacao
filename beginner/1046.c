//Pablo Alessandro Santos Hugen
//Dados o horário de início e de fim, esse programa calcula o tempo total

#include <stdio.h>

int main()
{
	int h0,hf;
	
	//lê o horário de início e de fim
	scanf("%d %d",&h0,&hf);
	//printa o tempo de jogo
	printf("O JOGO DUROU %d HORA(S)\n", (h0>=hf) ? ((24 -h0) + hf) : (hf-h0));
}
