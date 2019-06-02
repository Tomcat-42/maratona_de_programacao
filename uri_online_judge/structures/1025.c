#include <stdio.h>
#include <stdlib.h>

//busca binária(adaptada para retornar a 1° ocorrência do alvo no conjunto)
int busca(int *array, int low,int high, int alvo);
//função de comparação auxiliar para o qsort
int cmp(const void *a,const void *b);

int main()
{
	//array da bolinhas, número de bolinhas
	int marbles[10000],n_marbles;
	//número de buscas, valor da busca, e variável do resultado da busca
	int n_cons,cons,cons_atual;
	//contadores
	int i,j=0,k;
	
	//lê o n° de bolinhas e o número de consultas até ser diferente de 0
	while(scanf("%d %d",&n_marbles,&n_cons)&&(n_marbles||n_cons))
	{
		//contador do caso de teste atual
		j++;
		
		//lê cada bolinha
		for(i=0;i<n_marbles;i++)
			scanf("%d",&marbles[i]);
		
		//ordena as bolinhas
		qsort(marbles,n_marbles,sizeof(int),cmp);
	
		printf("CASE# %d:\n",j);
		for(k=0;k<n_cons;k++)
		{
			//lê a busca
			scanf("%d",&cons);
			//armazena o resultado
			cons_atual=busca(marbles,0,n_marbles,cons);
			
			//se foi encontrado a bolinha(!=-1)	
			if(cons_atual>=0)
				printf("%d found at %d\n",cons,cons_atual+1);
			//caso não foi encontrada
			else
				printf("%d not found\n",cons);
		}
	}
}

int busca(int *array, int low,int high, int alvo)
{
	if(high>=low)
	{
		int mid=low+(high-low)/2;
		//se mid==0 o array tem uma só posição
		//retorna a busca somente se não tiver um resultado igual no array[mid-1]	
		if((mid==0 || alvo > array[mid-1]) && array[mid]==alvo) return mid;
		else if(alvo>array[mid]) return busca(array,mid+1,high,alvo);
		else return busca(array,low,mid-1,alvo);
	}
	return -1;
}

/*
int busca(int *array, int low,int high, int alvo)
{
	if(high>=low)
	{
		int i,mid =(high+low)/2;
		if((mid==0||alvo>array[mid-1])&&array[mid]==alvo) //return mid;
		{
			while(array[mid]==alvo)
				mid--;
			return mid;
		}
		else if(alvo>array[mid])
			return(busca(array,mid+1,high,alvo));
		else
			return(busca(array,low,mid-1,alvo));

	}
	return -1;
}
*/
int cmp(const void *a,const void *b)
{
	return(*(int *)a - *(int *)b);
}
