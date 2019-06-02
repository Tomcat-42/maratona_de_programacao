#include <stdio.h>
#include <string.h>

#define PE "pedra"
#define PA "papel"
#define AA "ataque"

#define J1W "Jogador 1 venceu"
#define J2W "Jogador 2 venceu"
#define AW "Ambos venceram"
#define DW "Sem ganhador"
#define AM "Aniquilacao mutua"

char *ppaa(char *j1,char *j2);

int main()
{
	int n;
	char j1[7],j2[7];
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s %s",j1,j2);
		//printf("%s %s\n",j1,j2);
		printf("%s\n",ppaa(j1,j2));
	}
}

char *ppaa(char *j1,char *j2)
{
	static char ret[30];

	if(!strcmp(j1,AA)&&!strcmp(j2,PE))
		strcpy(ret,J1W);
	else if(!strcmp(j1,PE)&&!strcmp(j2,PA))
		strcpy(ret,J1W);
	else if(!strcmp(j1,AA)&&!strcmp(j2,PA))
		strcpy(ret,J1W);
	else if(!strcmp(j1,PA)&&!strcmp(j2,PA))
		strcpy(ret,AW);
	else if(!strcmp(j1,PE)&&!strcmp(j2,PE))
		strcpy(ret,DW);
	else if(!strcmp(j1,AA)&&!strcmp(j2,AA))
		strcpy(ret,AM);
	else
		strcpy(ret,J2W);


	return ret;
}
