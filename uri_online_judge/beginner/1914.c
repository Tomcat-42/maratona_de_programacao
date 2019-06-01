#include <stdio.h>
#include <string.h>

typedef struct
{
	char nome[101];
	char escolha[6];
	int num;
}jogador;

char * winner(jogador j1,jogador j2);

int main()
{
	int t,i;
	jogador j1,j2;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%s %s %s %s %d %d",j1.nome,j1.escolha,j2.nome,j2.escolha,&j1.num,&j2.num);
		printf("%s\n",winner(j1,j2));
	}
}

char * winner(jogador j1,jogador j2)
{
	static char winner[101];
	if((j1.num+j2.num)%2)
	{
		if(!strcmp(j1.escolha,"IMPAR"))
			strcpy(winner,j1.nome);
		else
			strcpy(winner,j2.nome);
	}
	else
	{
		if(!strcmp(j1.escolha,"PAR"))
			strcpy(winner,j1.nome);
		else
			strcpy(winner,j2.nome);
	}
	return winner;
}
