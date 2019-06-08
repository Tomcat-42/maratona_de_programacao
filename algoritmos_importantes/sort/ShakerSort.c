//Exemplo de implementação do ShakerSort em arrays de inteiros em C
#include <stdio.h>
#include <stdlib.h>

//função de comparação
int cmp(int a,int b);

//função de troca
void swp(int *a,int *b);

//implementação do ShakerSort
void sksort(int *arr,int n);

//printa um array de tamanho n
void arrayPrint(int *array,int n);

//lê um array de tamanho n
void arrayScan(int *array,int n);

int main()
{
	int *array,n;
	
	scanf("%d",&n);
	array = (int *)	malloc(n*sizeof(array));

	arrayScan(array,n);
	printf("\nNormal:\n");
	arrayPrint(array,n);
	
	sksort(array,n);
	printf("\nOrdenado:\n");
	arrayPrint(array,n);

}

void sksort(int *arr,int n)
{
	//flag 'booleana' para marcar se houve alguma troca em uma iteração
	int sort=1,i;
	//começo e fim das iterações
	int low=0,high=n-1;
	//caso sort continuar como zero o loop quebra, logo o array está ordenado
	while(sort)
	{
		sort=0;
		
		//primeira iteração, da esquerda para a direita
		for(i=low;i<high;i++)
			if(cmp(arr[i+1],arr[i]))	
			{
				swp(&arr[i],&arr[i+1]);
				sort=1;
			}

		//Caso não houve nenhuma troca na primeira iteração, o array está ordenado
		if(!sort) break;
		
		//depois de k iterações, os últimos k elementos do array estarão em sua posição correta
		high--;
		
		//segunda iteração, da direita para a esqueda
		for(i=high;i>low;i--)
			if(cmp(arr[i],arr[i-1]))		
			{
				swp(&arr[i],&arr[i-1]);
				sort=1;
			}
		
		//depois de k iterações, os primeiros k elementos do array estarão em sua posição correta
		low++;
	}
}

int cmp(int a,int b)
{
	//critério de comparação
	if(a<b)return 1;
	else return 0;
}

void swp(int *a,int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void arrayPrint(int *array,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%s%d%s",(i==0)?("["):(""),array[i],(i<n-1)?(","):("]\n"));
}

void arrayScan(int *array,int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
}
