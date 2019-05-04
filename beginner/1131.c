//Pablo Alessandro Santos Hugen
//Dados N 'grenais', esse algoritmo calcula printa as estatísticas
#include <stdio.h>

int main()
{
	//estatísticas
	int gol_g,gol_i,n_grenais=0,gre_win=0,nal_win=0,draw=0;
	//demarca se vai ter outra iteração
	int x;

	do
	{
		scanf("%d %d",&gol_i,&gol_g);
		n_grenais++;
		
		if(gol_g==gol_i)
			draw++;
		else if(gol_g>gol_i)
			gre_win++;
		else
			nal_win++;

		
	}while(printf("Novo grenal (1-sim 2-nao)\n") && scanf("%d",&x) && x==1);

	printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",n_grenais,nal_win,gre_win,draw);
	if(gre_win>nal_win)
		printf("Gremio venceu mais\n");
	else if(nal_win>gre_win)
		printf("Inter venceu mais\n");
	else
		printf("Nao houve vencedor\n");

	
}
