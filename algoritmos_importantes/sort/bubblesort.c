//Exemplo simples do algoritmo bubblesort
#include <stdio.h>

//macro para troca de valores usando o bitwise xor,uma versão mais segura pois checa se os endereços de a e b são diferentes
#define XORSWAP(a, b) ((&(a) == &(b)) ? (a) : ((a)^=(b),(b)^=(a),(a)^=(b)))

//implementação do bubblesort
void bsort(int *arra,int n);

//printa um array de tamanho n
void arrayPrint(int *array,int n);

//lê um array de tamanho n
void arrayScan(int *array,int n);

int main()
{
	int array[100],n;
	
	scanf("%d",&n);
	
	arrayScan(array,n);
	printf("Normal:\n");
	arrayPrint(array,n);
	
	bsort(array,n);
	printf("Ordenado:\n");
	arrayPrint(array,n);

}

void bsort(int *array,int n)
{
	int sort=1,i;
	while(sort)
	{
		sort=0;
		for(i=0;i<n-1;i++)
			if(array[i]>array[i+1])
			{
				XORSWAP(array[i],array[i+1]);
				sort=1;
			}
	}
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
