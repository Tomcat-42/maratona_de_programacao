#include <stdio.h>
#define MAX_INPUT 10001
int main()
{
	//contadores
	int k,i,j,l=0,m=0;
	//quantidade de bolinhas e quantidade de tentativas
	int n,q;
	//cada tentativa individual ,array dos números escritos nas bolinhas e array da posição da ocorrencia
	int querry,numbers[MAX_INPUT],ocorrencias[MAX_INPUT],found[MAX_INPUT];
	//array dos números não encontrados 
	int nofound[]={};

	for(k=1;k<=65;k++)
	{
		scanf("%d %d",&n,&q);
		if(!n && !q)
		{
			break;
		}

		l=0;
		m=0;

		for(i=0;i<n;i++)
		{
			scanf("%d",&numbers[i]);
		}
		//printf("aaaaaaaaaaaa\n");
		for(j=0;j<q;j++)
		{
			scanf("%d",&querry);
			for(i=0;i<n;i++)
			{

				//printf("NUMBER %d QUERRY %d\n",numbers[i],querry);
				
				if(querry == numbers[i])
				{
					//printf("%d == %d @ %d\n",querry,numbers[i],i+2);
						
					found[l] = numbers[i];
					ocorrencias[l++] = i+2;
					break;
					
				}
				else
				{
					//printf("%d != %d @ %d\n",querry,numbers[i],i+2);
					//nofound[m++] = numbers[i];
					//printf("%d %d\n",m++,numbers[i]);


				}

			}
		}
		printf("aaaaaaaaaaaaaaaa\n");
		//printf("%d %d\n",found[0],ocorrencias[0]);
		

		for(i=0;i<l-1;i++)
		{
			printf("%d found @ %d\n",found[i],ocorrencias[i]);
		}
		for(i=0;i<=m;i++)
		{
			printf("%d !found\n",nofound[i]);
		}
		
		
		
	}
}
