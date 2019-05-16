#include <stdio.h>

int main()
{
	int n_comandos,i;
	char posicao,comando;


	
	scanf("%d",&n_comandos);
	while(n_comandos!=0)
	{
		posicao='N';
		for(i=0;i<n_comandos;i++)
		{
			scanf(" %c",&comando);
			
			if((posicao == 'N') &&  (comando == 'D'))
			{
				posicao = 'L';
			}
			else if((posicao == 'N') &&  (comando == 'E'))
			{
				posicao = 'O';
			}
			else if((posicao == 'O') &&  (comando == 'D'))
			{
				posicao = 'N';
			}
			else if((posicao == 'O') &&  (comando == 'E'))
			{
				posicao = 'S';
			}
			else if((posicao == 'S') &&  (comando == 'D'))
			{
				posicao = 'O';
			}
			else if((posicao == 'S') &&  (comando == 'E'))
			{
				posicao = 'L';
			}
			else if((posicao == 'L') &&  (comando == 'D'))
			{
				posicao = 'S';
			}
			else if((posicao == 'L') &&  (comando == 'E'))
			{
				posicao = 'N';
			}
		}

		printf("%c\n",posicao);
		scanf("%d",&n_comandos);
	}




}
