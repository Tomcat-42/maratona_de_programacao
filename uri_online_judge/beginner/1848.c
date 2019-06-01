//Pablo AS Hugen
#include <stdio.h>
#include <math.h>
#include <string.h>

//retorna o valor inteiro correspondente dos olhos do corvo 
int aposta(char *olho_corvo );

int main()
{
	int valor=0;
	int flag_grito=0;
	char input[20];
	
	while(fgets(input,10,stdin))
	{
		if(!strcmp(input,"caw caw\n"))
		{
			printf("%d\n",valor);
			valor=0;
			flag_grito++;
			if(flag_grito==3)
				break;
		}
		else
			valor +=aposta(input);
	}
}

int aposta(char *olho_corvo )
{
	int i,valor=0;
	for(i=0;i<3;i++)
		if(olho_corvo[i]=='*')
			valor += pow(2,2-i);	
	return valor;
}
