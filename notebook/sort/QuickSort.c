// Exemplo de implementação do Quick Sort em arrays de inteiros em C
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// função a ser usada para partição
#define HOARE 1

// função de comparação
int cmp(int a,int b);

// função de troca
void swp(int *a,int *b);

// Escolhe um pivô no subarray e o coloca na posição correta
int HoarePartition(int *arr, int low, int high);
int LomutoPartition(int *arr, int low, int high);

/* implementação recursiva do Quick Sort, usando diferentes
 * Algoritmos de partição */
void quickSort(int *arr,int low, int high);

// printa um array de tamanho n
void arrayPrint(int *array,int n);

// lê um array de tamanho n
void arrayScan(int *array,int n);

int main()
{
	int *array,n;
	
	scanf("%d",&n);
	array = (int *)	malloc(n*sizeof(array));

	arrayScan(array,n);
	printf("\nNormal:\n");
	arrayPrint(array,n);
	
	quickSort(array,0, n-1);
	
	printf("\nOrdenado:\n");
	arrayPrint(array,n);

}

int HoarePartition(int *arr, int low, int high)
{
	// Pivô como primeiro elemento
	int pivot = arr[low];
	int i=low-1, j=high+1;

	while(1)
	{
		do
		{
			i++;
		} while(!cmp(arr[i], pivot));
		
		do
		{
			j--;
		} while(cmp(arr[j], pivot));

		if(i>=j) return j;

		swp(&arr[i], &arr[j]);
	}
}

int LomutoPartition(int *arr, int low, int high)
{
	// Pivô como último elemento
	int pivot = arr[high];
	// index do menor elemento
	int i=low-1, j;
		
	for(j=low; j<high; j++)
	{
		if(!cmp(arr[j], pivot))
		{
			i++;
			swp(&arr[i], &arr[j]);
		}
	}
	swp(&arr[i+1], &arr[high]);

	return(i+1);

}

void quickSort(int *arr,int low, int high)
{
	if(low < high)
	{
#if HOARE	
		// pivô como primeiro elementos(partição de Hoare)
		int pi = HoarePartition(arr, low, high);
		quickSort(arr, low, pi);
		quickSort(arr, pi+1, high);
#else
		// pivô como último elementos(partição de Lomuto)
		int pi = LomutoPartition(arr, low, high);
		quickSort(arr, low, pi-1);
		quickSort(arr, pi+1, high);
#endif
	}
}

int cmp(int a,int b)
{
	//critério de comparação
	if(a>=b)return 1;
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
