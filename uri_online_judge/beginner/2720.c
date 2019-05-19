//Pablo AS Hugen
//Basicamente ordena structs
#include <stdio.h>

//define o 'tipo' presente
typedef struct
{
	int id,volume;
}presente;

//sort de structs
void structSort(presente *array,int n);

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
		for(i=0;i<n;i++)
		{
			scanf("%d %d %d %d",&presentes[i].id,&altura,&largura,&comprimento);
			presentes[i].volume = altura*largura*comprimento;
		}

		structSort(presentes,n);

		for(i=0;i<k;i++)
			printf("%d%s",presentes[i].id,(i<k-1)?(" "):(""));

	}
}

void structSort(presente *array,int n)
{
	int sorted,i;
	presente tmp;
	while(1)
	{
		sorted=0;
		for(i=0;i<n;i++)
		{
			if(array[i].volume<array[i+1].volume)
			{
				tmp = array[i];
				array[i] = array[i+1];
				array[i+1] = tmp;
				sorted = 1;
			}
			/*
			if(array[i].volume==array[i+1].volume)
			{
				array[i] = array[i+1];
			}
			*/
		}
		if(!sorted)
			break;
	}
}
