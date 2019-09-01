#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a,const void *b);

int main()
{
	int *array,n;
	scanf("%d",&n);
	array = (int *)malloc(n*sizeof(int));

	for(int i=0;i<n;i++)
		scanf("%d",&array[i]);
	
	printf("\nAntes de ordenar:\n");
	
	for(int i=0;i<n;i++)
		printf("%d ",array[i]);
	
	qsort(array,n,sizeof(int),cmp);	
	printf("\nDepois de ordenar:\n");
	
	for(int i=0;i<n;i++)
		printf("%d ",array[i]);
}

int cmp(const void *a,const void *b)
{
	return(*(int *)a - *(int *)b);
}
