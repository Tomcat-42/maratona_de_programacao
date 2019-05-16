#include <stdio.h>

int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1,j=1,k=1;i<=n;)
	{
		printf("%d %d %d\n",i,j,k);
		printf("%d %d %d\n",i++,++j,++k);
		j=i*i;
		k=i*i*i;

	}
}
