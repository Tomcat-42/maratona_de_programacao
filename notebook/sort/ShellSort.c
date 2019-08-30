//Exemplo de implementação do Shell Sort em arrays de inteiros em C
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Número máximo de proporções 
#define MAX_GAP 100

//funções de incremento
#define SHELL(n, k) (n)/(int)pow(2.0, (k))
#define HIBBARD(k) (int)pow(2.0, (k)) - 1
#define KNUTH(k) ((int)pow(3.0, (k)) - 1)/2

//função de comparação
int cmp(int a,int b);

//função de troca
void swp(int *a,int *b);

//função de incremento
void gap(int n,int k);

//implementação iterativa do Insertion Sort
void shellsort(int *arr,int n);

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
	
	printf("\nOrdenado:\n");
	arrayPrint(array,n);

}

void shellsort(int *arr,int n)
{
	//auxiliar para guardar o elemento a ser inserido
	int aux;
	int i, j, k, gaps[MAX_GAP];
	
	// Gera a sequência de incrementos
	for(i=0; HIBBARD(i+1)<=n; i++)
		gaps[i] = HIBBARD(i+1);
	
	// mostra os incrementos usados
	printf("Incrementos: ");
	for(j=i-1;j>=0;j--)
		printf("%d ", gaps[j]);
	printf("\n");
	
	// h-ordena o array
	for(i-=1; i>=0; i--)
	{
		for(j=gaps[i]; j<n; j++)
		{
			aux = arr[j];
			for(k=j; (k>=gaps[i])&&(!cmp(aux, arr[k-gaps[i]])); k-=gaps[i])
				arr[k] = arr[k-gaps[i]];

			arr[k] = aux;

		}
		arrayPrint(arr,n);
	}
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
