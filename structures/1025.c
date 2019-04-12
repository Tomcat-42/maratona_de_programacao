#include <stdio.h>

int main()
{
	//contadores
	int k,i,j,l=0;
	//quantidade de bolinhas e quantidade de tentativas
	int n,q;
	//cada tentativa individual ,array dos números escritos nas bolinhas e array da posição da ocorrencia
	int querry,numbers[]={},ocorrencias[]={},found[]={};
	//array dos números não encontrados 
	int nofound[]={};

	for(k=1;k<=65;k++)
	{
		scanf("%d %d",&n,&q);
		if(!n && !q)
		{
			break;
		}
		for(i=0;i<n-1;i++)
		{
			scanf("%d",&numbers[i]);
		}
		for(j=0;j<q;j++)
		{
			scanf("%d",&querry);
			for(i=0;i<n-1;i++)
			{
				if(querry == numbers[i])
				{	
					found[l++] = querry;
					ocorrencias[l++] = k;
				}
				else
				{
					nofound[i] = querry;

				}

			}
		}
		for()
		
	}
}
