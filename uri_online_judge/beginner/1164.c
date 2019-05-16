#include <stdio.h>

int pft(int n);

int main()
{
	int n,x;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&x);
		printf("%d%s eh perfeito\n",x,(pft(x))?(""):(" nao"));
	}
}

int pft(int n)
{
	int i,sum=0;
	for(i=1;i<n;i++)
		if(!(n%i))
			sum+=i;
	return (sum==n)? 1 : 0;
}
