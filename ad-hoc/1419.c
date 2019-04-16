#include <stdio.h>

/* 
 * checa se 3 monstros consecutivos são iguais.Caso sim, modifica o vetor Xbns passado por referência da seguinte forma:
 * Muda a 1° posição para um (indica bônus True)
 * Muda a 2° posição para a rodada que o bônus ocorreu
 */
void bonus(int *bak,int *bns,int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(bak[i]==bak[i-1] && bak[i-1]==bak[i-2])
		{
			bns[0]=1;
			bns[1]=i;
			break;
		}
	}

}
int main()
{
	//monstros jogados em cada rodada
	int m[10],l[10];
	
	//quantidade de pontos
	int Mpts=0,Lpts=0;

	//Vetores de Mark e Leti para ser usado na função 'bonus' (leia a desc.)
	int Mbns[2]={0,0},Lbns[2]={0,0};
	
	//número de rodadas
	int n;
	
	//contador
	int i;

	while(1)
	{
		//leitura do número de rodadas,0 marca o fim do input
		scanf("%d",&n);
		if(!n)
			break;
		
		//leitura dos monstros do Mark
		for(i=0;i<n;i++)
		{
			scanf("%d",&m[i]);
			Mpts+=m[i];
		}

		//leitura dos monstros da Leti
		for(i=0;i<n;i++)
		{
			scanf("%d",&l[i]);
			Lpts+=l[i];
		}
		
		//processa os vetores na função 'bonus'
		bonus(m,Mbns,n);	
		bonus(l,Lbns,n);
		
		//testa se ocorreu os bônus simultâneos
		if(Mbns[0] && Lbns[0])
		{
			//se mark gahou bonus ,e se a rodada do for menor ele ganha +30 pts, e Leti não
			if(Mbns[1]<Lbns[1])
			{
				Mpts+=30;
			}
			//O mesmo acontece com Leti
			else if(Lbns[1]<Mbns[1])
			{
				Lpts+=30;
			}
			//A ultima alternativa é se as rodadas do bônus forem iguais, e nesse caso ninguém ganha nada
		}
		//testa bônus individuais
		else if(Mbns[0])
		{
			Mpts+=30;
		}
		else if(Lbns[0])
		{
			Lpts+=30;
		}
		
		//printa finalmente o resultado		
		if(Mpts > Lpts)
			printf("M\n");
		else if(Mpts == Lpts)
			printf("T\n");
		else
			printf("L\n");
	
	
		/*	
		printf("Mark:\nbonus = %d ; rodada = %d\n\n",Mbns[0],Mbns[1]);	
		printf("Leti:\nbonus = %d ; rodada = %d\n\n",Lbns[0],Lbns[1]);	

		printf("Mark: %d pts\n\n",Mpts);	
		printf("Leti: %d pts\n\n",Lpts);	
		*/

		//zera os valores para o novo loop
		Mpts = 0;
		Lpts = 0;
		Mbns[0] = 0 ; Mbns[1] = 0;
		Lbns[0] = 0 ; Lbns[1] = 0;


	}
}
