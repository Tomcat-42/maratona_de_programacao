//Exemplo de implementação do BubbleSort em arrays de inteiros em C
#include <stdio.h>
#include <stdlib.h>

//função de comparação
int cmp(int a,int b);

//função de troca
void swp(int *a,int *b);

//implementação do bubblesort
void bsort(int *arr,int n);

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
	
	bsort(array,n);
	printf("\nOrdenado:\n");
	arrayPrint(array,n);

}

void bsort(int *arr,int n)
{
	//flag 'booleana' para marcar se houve alguma troca em uma iteração
	int sort=1,i;
	//caso sort continuar como zero o loop quebra, logo o array está ordenado
	while(sort)
	{
		sort=0;
		//itera o array da 2° posição até a última, trocando elementos adjacentes se necessário
		for(i=1;i<n-1;i++)
			if(cmp(arr[i],arr[i-1]))
			{
				swp(&arr[i],&arr[i-1]);
				sort=1;
			}
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
