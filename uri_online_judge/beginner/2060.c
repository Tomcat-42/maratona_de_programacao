#include <stdio.h>
#include <stdlib.h>

//retorna quantos elementos de v são multiplos de n
int multiplo(int *v,int len,int n);

void arr_scan(int *v,int n);

int main()
{
	int n,*v;
	scanf("%d",&n);
	v = (int *)malloc(n*sizeof(int));
	arr_scan(v,n);
	
	printf("%d Multiplo(s) de 2\n",multiplo(v,n,2));
	printf("%d Multiplo(s) de 3\n",multiplo(v,n,3));
	printf("%d Multiplo(s) de 4\n",multiplo(v,n,4));
	printf("%d Multiplo(s) de 5\n",multiplo(v,n,5));

	free(v);
}

int multiplo(int *v,int len,int n)
{
	int count,i;
	for(i=0,count=0;i<len;i++)
		if(!((*(v+i))%n))
			count++;
	return count;
}

void arr_scan(int *v,int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",v+i);
}
