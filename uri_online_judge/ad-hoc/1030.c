#include <stdio.h>

int circulo[10001];

int morte(int n,int k);
int main()
{
	printf("%d\n",morte(5,2));
}

int morte(int n,int k)
{
	int i,j,mortes=0;
	
	for(i=k;mortes<=n-1;i+=k)
	{
		circulo[i]=1;
		mortes++;
		if(n-i<k)
		{
			i = n - i;
			circulo[i]=1;
			mortes++;
		}
		for(j=0;j<n;j++)
			printf("%d ",circulo[j]);
		printf("\n");
	}

	return i;

}
