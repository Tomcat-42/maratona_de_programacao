//Exemplo de implementação do SelectionSort em arrays de inteiros em C
#include <stdio.h>
#include <stdlib.h>

//função de comparação
int cmp(int a,int b);

//função de troca
void swp(int *a,int *b);

//implementação iterativa do Selection Sort
void selsort(int *arr,int n);

//implementação recurviva do SelectionSort
void selsort_rec(int *arr,int n);

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
	
	//selsort(array,n);
	selsort_rec(array,n);
	
	printf("\nOrdenado:\n");
	arrayPrint(array,n);

}

void selsort(int *arr,int n)
{
	//guarda o index do valor mínimo do subarray
	int min_index;
	
	//aumenta o limite do arrays dos elementos ainda não ordenados
	for(int i=0;i<n-1;i++)
	{
		//seta o mínimo como o primeiro elemento do subarray dos desordenados
		min_index = i;
		
		//procura pelo menor valor no subarray
		for(int j=i;j<n;j++)
			if(!cmp(arr[j],arr[min_index]))
				min_index = j;
		
		//troca o menor elemento com o primeiro elemento do subarray dos desordenados	
		swp(&arr[i],&arr[min_index]);
	}
}


void selsort_rec(int *arr,int n)
{

	//Caso base,o subarray dos elementos desordenados tem uma posição
	if(n==1) return;
	
	//guarda o index do valor mínimo do subarray
	int min_index = n-1;
	
	//procura pelo menor valor no subarray
	for(int j=n-1;j>=0;j--)
		if(cmp(arr[j],arr[min_index]))
			min_index = j;
		
	//troca o menor elemento com o primeiro elemento do subarray dos desordenados	
	swp(&arr[n-1],&arr[min_index]);
	
	//aumenta o limite do arrays dos elementos ainda não ordenados
	return(selsort_rec(arr,n-1));
	
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
