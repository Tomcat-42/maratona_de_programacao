//Exemplo de implementação do ShakerSort em arrays de inteiros em C
#include <stdio.h>
#include <stdlib.h>

//função de comparação
int cmp(int a,int b);

//função de troca
void swp(int *a,int *b);

//implementação iterativa do ShakerSort
void sksort(int *arr,int n);

//implementação recursiva do ShakerSort
void sksort_rec(int *arr,int low ,int high);

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
	
	//sksort(array,n);
	sksort_rec(array,0,n-1);
	printf("\nOrdenado:\n");
	arrayPrint(array,n);

}

void sksort(int *arr,int n)
{
	//flag 'booleana' para marcar se houve alguma troca em uma iteração
	int sort=1;
	
	//caso sort continuar como zero o loop quebra, logo o array está ordenado
	for(int i=0;(i<n-1 && sort);i++)
	{
		sort=0;
		
		//primeira iteração, da esquerda para a direita,os primeiros e últimos 'i' elementos já estão ordenados
		for(int j=(0+i);j<(n-1-i);j++)
			if(cmp(arr[j+1],arr[j]))	
			{
				swp(&arr[j],&arr[j+1]);
				sort=1;
			}

		//Caso não houve nenhuma troca na primeira iteração, o array está ordenado
		if(!sort) break;
		
		
		//segunda iteração, da direita para a esqueda,os primeiros e últimos 'i' elementos já estão ordenadosa
		for(int k=(n-1-i);k>(0+i);k--)
			if(cmp(arr[k],arr[k-1]))		
			{
				swp(&arr[k],&arr[k-1]);
				sort=1;
			}
	}
}
void sksort_rec(int *arr,int low,int high)
{
	//Caso base , o array está ordenado
	if(high<low) return;

	//flag 'booleana' para marcar se houve alguma troca em uma iteração
	int sort=0;
		
	//primeira iteração, da esquerda para a direita
	for(int i=low;i<=high-1;i++)
		if(cmp(arr[i+1],arr[i]))	
		{
			swp(&arr[i],&arr[i+1]);
			sort=1;
		}

	//Caso não houve nenhuma troca na primeira iteração, o array está ordenado
	if(!sort) return;
		
	//segunda iteração, da direita para a esqueda
	for(int j=high;j>=low+1;j--)
		if(cmp(arr[j],arr[j-1]))		
		{
			swp(&arr[j],&arr[j-1]);
			sort=1;
		}

	//o último e primeiro elemento estão nos locais corretos
	return(sksort_rec(arr,low+1,high-1));
	
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
	for(int i=0;i<n;i++)
		printf("%s%d%s",(i==0)?("["):(""),array[i],(i<n-1)?(","):("]\n"));
}

void arrayScan(int *array,int n)
{
	for(int i=0;i<n;i++)
		scanf("%d",&array[i]);
}
