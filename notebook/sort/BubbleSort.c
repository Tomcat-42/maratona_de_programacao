//Exemplo de implementação do BubbleSort em arrays de inteiros em C
#include <stdio.h>
#include <stdlib.h>

//função de comparação
int cmp(int a,int b);

//função de troca
void swp(int *a,int *b);

//implementação iterativa do bubblesort
void bsort(int *arr,int n);

//implementação recurviva do bubblesort
void bsort_rec(int *arr,int n);

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
	//bsort_rec(array,n);
	
	printf("\nOrdenado:\n");
	arrayPrint(array,n);

}

void bsort(int *arr,int n)
{
	//flag 'booleana' para marcar se houve alguma troca em uma iteração
	int sort=1;

	//caso sort continuar como zero o loop quebra, logo o array está ordenado
	for(int i=0;(i<n-1 && sort);i++)
	{
		sort=0;
		//itera o array da 1° posição até a penúltima, trocando elementos adjacentes se necessário,os últimos 'i' elementos já estão ordenados
		for(int j=0;j<n-1-i;j++)
			if(cmp(arr[j],arr[j+1]))
			{
				swp(&arr[j],&arr[j+1]);
				sort=1;
			}
	}
}

void bsort_rec(int *arr,int n)
{

	//Caso base,os últimos n-1 elementos já estão ordenados
	if(n==1) return;
	
	//flag 'booleana' para marcar se houve alguma troca em uma iteração
	int sort=0;

	//itera o array da 1° posição até a penúltima, trocando elementos adjacentes
	for(int i=0;i<n-1;i++)
		if(cmp(arr[i],arr[i+1]))
		{
			swp(&arr[i],&arr[i+1]);
			sort=1;
		}
	
	//Não houve nenhuma troca na iteração,logo o array está ordenado
	if(!sort) return;
	
	//O último elemento está no local  correto
	return (bsort_rec(arr,n-1));
}

int cmp(int a,int b)
{
	//critério de comparação
	if(a>b)return 1;
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
	for(int i=0;i<n;i++)
		printf("%s%d%s",(i==0)?("["):(""),array[i],(i<n-1)?(","):("]\n"));
}

void arrayScan(int *array,int n)
{
	for(int i=0;i<n;i++)
		scanf("%d",&array[i]);
}
