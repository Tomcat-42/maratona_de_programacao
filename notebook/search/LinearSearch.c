// Exemplo de implementação de uma busca linear em arrays de inteiros em C
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// função de comparação
int cmp(int a,int b);

// implementação da busca linear para encontar a primeira e a última ocorrências da chave
int firstLinearSearch(int *arr, int n, int key);
int lastLinearSearch(int *arr, int n, int key);

// printa um array de tamanho n
void arrayPrint(int *array,int n);

// lê um array de tamanho n
void arrayScan(int *array,int n);

int main()
{
	int *array, n, key, fOcu, lOcu;
	
	scanf("%d",&n);
	array = (int *)	malloc(n*sizeof(array));
	arrayScan(array,n);

	scanf("%d", &key);

	printf("\nArray:\n");
	arrayPrint(array,n);
	
	fOcu = firstLinearSearch(array, n, key);
	lOcu = lastLinearSearch(array, n, key);
	
	if(fOcu >=0 && lOcu >=0)
		printf("\nFIRST: '%d' ocorre na posição '%d' do array\nLAST: '%d' ocorre na posição '%d' do array\n", key, fOcu, key, lOcu);
	else
		printf("\n'%d' não ocorre no array\n", key);

	free(array);
}

int firstLinearSearch(int *arr, int n, int key)
{
	for(int i=0; i<n; i++)
		if(arr[i] == key) return i;
	return -1;
}

int lastLinearSearch(int *arr, int n, int key)
{
	for(int i=n-1; i>=0; i--)
		if(arr[i] == key) return i;
	return -1;
}

int cmp(int a,int b)
{
	//critério de comparação
	if(a==b)return 1;
	else return 0;
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
