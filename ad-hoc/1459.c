//dps eu termino essa desgraça
#include <stdio.h>
#define MAX_OBJS 1000000


//realiza um bubblesort nas colunas da matriz parâmetro
void interval_sort(int n_objetos,int interval[n_objetos][2]);
//retorna um matriz com as intersecções na matriz dos intervalos
void intersections(int n_objetos,int interval[n_objetos][2]);

int main()
{
	//matriz dos intervalos de foco
	int interval[MAX_OBJS][2];
	//matriz das intersecções dos intervalos
	int intersec[MAX_OBJS][2];
	//número de objetos e fotos necessárias
	int n_objetos,n_fotos;
	//contador
	int i,j;
	
	while((scanf("%d",&n_objetos) != EOF))
	{
		for(i=0;i<n_objetos;i++)
		{
			for(j=0;j<2;j++)
			{
				scanf("%d",&interval[i][j]);
			}
		}
	

		
		printf("INTERVALOS DE FOCO:\n");
		for(i=0;i<n_objetos;i++)
		{
			printf("[");
			for(j=0;j<2;j++)
			{
				printf("%d",interval[i][j]);
				if(j==0)
					printf(", ");
			}
			printf("]\n");
		}
		interval_sort(n_objetos,interval);
		
		printf("SORTED:\n");
		for(i=0;i<n_objetos;i++)
		{
			printf("[");
			for(j=0;j<2;j++)
			{
				printf("%d",interval[i][j]);
				if(j==0)
					printf(", ");
			}
			printf("]\n");
		}
		

	}

}

void interval_sort(int n_objetos,int interval[n_objetos][2])
{
	int sorted,i,tmp[2];
	
	while(1)
	{
		sorted = 0;
		for(i=1;i<n_objetos;i++)
		{
			if(interval[i][0]<interval[i-1][0])
			{
				tmp[0] = interval[i][0];
				tmp[1] = interval[i][1];
				interval[i][0] = interval[i-1][0];
				interval[i][1] = interval[i-1][1];
				interval[i-1][0] = tmp[0];
				interval[i-1][1] = tmp[1];

				sorted = 1;
			}
		}
		if(!sorted)
			break;
	}
}

/*
void intersections(int n_objetos,int interval[n_objetos][2])
{
	int i;
	for(i=n_objetos;i>0;i++)
	{

	}
}

