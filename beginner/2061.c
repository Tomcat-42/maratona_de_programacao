#include <stdio.h>
#include <string.h>

int main()
{
	int abas,n_acao,i;
	char acao[7];

	scanf("%d %d",&abas,&n_acao);

	for(i=0;i<n_acao;i++)
	{
		scanf("%s",acao);
		if(!strcmp(acao,"fechou"))
		{
			abas++;
		}
		else if(!strcmp(acao,"clicou"))
		{
			abas--;
		}
	}
	printf("%d\n",abas);

}
