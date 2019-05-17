//Exemplo de problema utilizando o array de soma acumulada
#include <stdio.h>

//Constrói um Vetor de soma acumulada
void csCons(int *array,int *csArray ,int n);
//Retorna a soma do intervalo [i,j]
int csQuery(int *csArray,int i,int j);
//lê um array
void scanArray(int *csArray,int n);

int main()
{
	//Arrays
	int array[100000],csArray[100000];
	//N de elementos do array e N de consultas
	int n,q;
	//intervalos
	int i,j;
	//contador
	int k;

	scanf("%d",&n);
	scanArray(array,n);
	csCons(array,csArray,n);
	
	for(k=0;k<n;k++)
		printf("%d ",array[k]);
	printf("\n");
	for(k=0;k<n;k++)
		printf("%d ",csArray[k]);
	printf("\n");

	scanf("%d",&q);
	for(k=0;k<q;k++)
	{
		scanf("%d %d",&i,&j);
		printf("%d\n",csQuery(csArray,i,j));
	}

}

void scanArray(int *array,int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
}

void csCons(int *array,int *csArray,int n)
{
	int i;
	csArray[0] = array[0];
	for(i=1;i<n;i++)
		csArray[i] = array[i] + csArray[i-1];

}

int csQuery(int *csArray,int i ,int j)
{
	return (csArray[j] - csArray[i-1]);
}
