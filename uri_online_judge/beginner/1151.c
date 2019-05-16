//Pablo AS Hugen
//Dados um número n, esse algoritmo printa as n primeiras posições da série de fibonacci
#include <stdio.h>

//Gera um vetor contendo n termos da série de fibonacci
void fib_g(int *array,int n);
//printa os n primeiros n termos da série de fibonacci
void fib_p(int *array,int n);

int main()
{
	//vetor da série
	int fbnc[46],n;
	scanf("%d",&n);

	fib_g(fbnc,n);
	fib_p(fbnc,n);
}

void fib_g(int *array,int n)
{
	int i;
	array[0]=0;
	array[1]=1;
	for(i=2;i<n;i++)
	{
		array[i] = array[i-1]+array[i-2];
	}
}


void fib_p(int *array,int n)
{
	
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d%s",array[i],(i<n-1)?(" "):("\n"));
	}
}
