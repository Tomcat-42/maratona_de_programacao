#include <stdio.h>
#include <stdlib.h>

//int busca_bin(int *array,int n,int x);
int busca(int *array, int low,int high, int alvo);

int main()
{
	int array[10];
	int n;
	int alvo;
	
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&array[i]);
	
	while(scanf("%d",&alvo)!=EOF)
		printf("posição = %d\n",busca(array,0,n-1,alvo));
}	

/*
int busca_bin(int *array,int n,int x)
{
	
}
*/

int busca(int *array, int low,int high, int alvo)
{
	int mid = (low+high)/2;
	if(low>high) return -1;
	if(alvo==array[mid]) return mid;
	else if(alvo<array[mid]) return busca(array,low,mid-1,alvo);
	else return busca(array,mid+1,high,alvo);
}


