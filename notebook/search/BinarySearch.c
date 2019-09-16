// Exemplo de implementação de uma busca binária em arrays de inteiros em C
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// função de comparação
int cmp(const void *a, const void *b);

/* implementação da busca binária para encontar a primeira e a 
 * última ocorrências da chave no intervalo [low, high] */
int firstBinarySearch(int *arr, int low, int high, int key);
int lastBinarySearch(int *arr, int low, int high, int key, int n);

// printa um array de tamanho n
void arrayPrint(int *array,int n);

// lê um array de tamanho n
void arrayScan(int *array,int n);

int main()
{
	int *array, n, key, fOcu, lOcu=1;
	
	scanf("%d",&n);
	array = (int *)	malloc(n*sizeof(array));
	arrayScan(array,n);

	scanf("%d", &key);
	
	qsort(array, n, sizeof(int), cmp);

	printf("\nArray:\n");
	arrayPrint(array,n);
	
	fOcu = firstBinarySearch(array, 0, n-1, key);
	lOcu = lastBinarySearch(array, 0, n-1, key, n);

	if(fOcu >=0 && lOcu >=0)
		printf("\nFIRST: '%d' ocorre na posição '%d' do array\nLAST: '%d' ocorre na posição '%d' do array\n", key, fOcu, key, lOcu);
	else
		printf("\n'%d' não ocorre no array\n", key);
	free(array);
}

int firstBinarySearch(int *arr, int low, int high, int key)
{
	// caso base, o elemeno não foi encontrado
	//if(low>high) return -1;
	if(high>=low)
	{
		//calcula a metade do array
		int mid = low + (high-low)/2;
	
		//encontra o elemento somente se for a primeira ocorrência
		if((mid == 0 || key > arr[mid-1]) && arr[mid] == key) 
			return mid;
		//busca no subarray dos menores
		else if(key > arr[mid]) 
			return firstBinarySearch(arr, mid+1, high, key);
		//busca no subarray dos maiores
		else
			return firstBinarySearch(arr, low, mid-1, key);
	}
	return -1;
}

// o tamanho nesse caso é necessário para encontrar a última ocorrência
int lastBinarySearch(int *arr, int low, int high, int key, int n)
{
	if(high>=low)
	{
		//calcula a metade do array
		int mid = low + (high - low)/2;
		
		//encontra o elemento somente se for a última ocorrência
		if((mid == n-1 || key < arr[mid+1]) && arr[mid] == key) 
			return mid;
		//busca no subarray dos menores
		else if(key < arr[mid]) 
			return lastBinarySearch(arr, low, mid-1, key, n);
		//busca no subarray dos maiores
		else
			return lastBinarySearch(arr, mid+1, high, key, n);
	}
	return -1;
}



int cmp(const void *a, const void *b)
{
	if(*(int*)a < *(int*)b) return -1;
	else if(*(int*)a == *(int*)b) return 0;
	else return 1;
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
