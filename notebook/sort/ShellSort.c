//Exemplo de implementação do Shell Sort em arrays de inteiros em C
#include <stdio.h>
#include <stdlib.h>

//função de comparação
int cmp(int a,int b);

//função de troca
void swp(int *a,int *b);

//implementação iterativa do Insertion Sort
void shellsort(int *arr,int n);

//implementação recursiva do Insertion Sort
// void insertsort_rec(int *arr,int n);

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
	
	shellsort(array,n);
	//insertsort_rec(array,n);
	
	printf("\nOrdenado:\n");
	arrayPrint(array,n);

}

void shellsort(int *arr,int n)
{
	//auxiliar para guardar o elemento a ser inserido
	int aux;
	int i, j, gap;

	//itera pelos elementos do array
	for(i=1;i<n;i++)
	{
		aux = arr[i];
		
		//move os elementos menores (ou maiores) que aux para frente
		for(j=i-1;(j>=0)&&(!cmp(aux,arr[j]));j--)
			arr[j+1] = arr[j];
		
		//insere o elemento na posição correta
		arr[j+1] = aux;
	}
}

/*
void insertsort_rec(int *arr,int n)
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
*/

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
