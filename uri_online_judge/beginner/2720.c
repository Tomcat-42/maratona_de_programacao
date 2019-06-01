//Pablo AS Hugen
//Basicamente ordena structs
#include <stdio.h>
#include <stdlib.h>

//define o 'tipo' presente
typedef struct
{
	int id,volume;
}presente;

//função de comparação auxiliar para o qsort,usada na ordenação dos presentes pelo volume(crescente)
int cmp_vol(const void *a,const void *b);
//função de comparação auxiliar para o qsort,usada na ordenação dos presentes pela id(decrescente)
int cmp_id(const void *a,const void *b);

int main()
{
	//casos de teste
	int c;
	//número de presentes totais e escolhidos
	int n,k;
	//contadores
	int i;
	//array do tipo presente
	presente presentes[100000];
	//dimensões temporárias para o volume
	int altura, largura, comprimento;

	scanf("%d",&c);
	while(c--)
	{
		scanf("%d %d",&n,&k);
		
		//lê os volumes
		for(i=0;i<n;i++)
		{
			scanf("%d %d %d %d",&presentes[i].id,&altura,&largura,&comprimento);
			presentes[i].volume = altura*largura*comprimento;
		}
		
		//ordena os presentes pelo volume
		qsort(presentes,n,sizeof(presente),cmp_vol);
		
		//ordena os ids
		qsort(presentes,k,sizeof(presente),cmp_id);
			
		//printa os maiores ids
		for(i=0;i<k;i++)
			printf("%d%s",presentes[i].id,(i<k-1)?(" "):("\n"));
		
	}
}

int cmp_vol(const void *a, const void *b)
{
	const presente *p1 = (presente *)a;
	const presente *p2 = (presente *)b;
	
	if(p1->volume>p2->volume)
		return -1;
	
	else if(p1->volume==p2->volume)
	{
		if(p1->id<p2->id)
			return -1;
		else if(p1->id>p2->id)
			return 1;
		else
			return 0;
	}
	else
		return 1;
}

int cmp_id(const void *a, const void *b)
{
	const presente *p1 = (presente *)a;
	const presente *p2 = (presente *)b;
	
	return p1->id-p2->id;
	/*
	if(p1->id<p2->id)
		return -1;
	else if(p1->id==p2->id)
		return 0;
	else
		return 1;
	*/
}
