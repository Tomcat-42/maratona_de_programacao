#include <stdio.h>

int main()
{
	int i,a,n,sum=0;
	scanf("%d",&a);
	do
	{
		scanf("%d",&n);
	}while(n<=0);
	
	for(i=0;i<n;i++)
		sum+=i+a;
	
	printf("%d\n",sum);

}
