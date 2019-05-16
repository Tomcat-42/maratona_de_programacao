#include <stdio.h>

void sum(int *array, int *soma,int n);
int interval(int s[],int i,int j);

int main()
{	
	//vetor
	int n,v[1000000],s[1000000];
	//querry
	int q;
	int i,j,k;	
	
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		scanf("%d",&v[k]);
	}
	sum(v,s,n);
	
		
	for(i=0;i<n;i++)
	{
		printf("%d ",v[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",s[i]);
	}
	
	
	/*	
	scanf("%d",&q);
	for(k=0;k<n;k++)
	{
		scanf("%d %d",&i,&j);
		printf("%d\n",interval(s,i,j));
	}
	*/
	
	return 0;	
}

void sum(int *array,int *soma,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		soma[i] = soma[i-1] + array[i];
	}
	
}
int interval(int s[],int i,int j)
{
	return (s[j+1] - s[i]);
}

