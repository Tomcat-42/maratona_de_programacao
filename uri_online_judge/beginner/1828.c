//Pablo AS Hugen
//Pedra-papel-tesoura-lagarto-spock

#include <stdio.h>
#include <string.h>

#define PE "pedra"
#define PA "papel"
#define TE "tesoura"
#define LA "lagarto"
#define SP "Spock"

//retorna 1 se o sheldon ganhou e 2 se o haj ganhou e 0 se houve empate
char *pptls(char *sheldon,char *haj);

int main()
{
	int t,i;
	char sheldon[10],haj[10];
	scanf("%d",&t);;
	for(i=1;i<=t;i++)
	{
		scanf("%s %s",sheldon,haj);
		printf("Caso #%d: %s\n",i,pptls(sheldon,haj));
	}
}

char *pptls(char *sheldon,char *haj)
{
	static char resul[20];
	//caso de empate
	if(!strcmp(sheldon,haj))
		strcpy(resul,"De novo!");
	//casos que o sheldon ganha
	//pedra quebra tesoura e esmaga lagarto
	else if(!strcmp(sheldon,PE) && !strcmp(haj,TE))
		strcpy(resul,"Bazinga!");
	else if(!strcmp(sheldon,PE) && !strcmp(haj,LA))
		strcpy(resul,"Bazinga!");
	//papel embrulha pedra e refuta spock
	else if(!strcmp(sheldon,PA) && !strcmp(haj,PE))
		strcpy(resul,"Bazinga!");
	else if(!strcmp(sheldon,PA) && !strcmp(haj,SP))
		strcpy(resul,"Bazinga!");
	//tesoura corta o papel e decapita o lagarto
	else if(!strcmp(sheldon,TE) && !strcmp(haj,PA))
		strcpy(resul,"Bazinga!");
	else if(!strcmp(sheldon,TE) && !strcmp(haj,LA))
		strcpy(resul,"Bazinga!");
	//lagarto envenena spock e come o papel
	else if(!strcmp(sheldon,LA) && !strcmp(haj,SP))
		strcpy(resul,"Bazinga!");
	else if(!strcmp(sheldon,LA) && !strcmp(haj,PA))
		strcpy(resul,"Bazinga!");
	//spock vaporiza a pedra e quebra a tesoura
	else if(!strcmp(sheldon,SP) && !strcmp(haj,PE))
		strcpy(resul,"Bazinga!");
	else if(!strcmp(sheldon,SP) && !strcmp(haj,TE))
		strcpy(resul,"Bazinga!");
	//nos outros casos o haj trapaceou
	else
		strcpy(resul,"Raj trapaceou!");

	return resul;
}
