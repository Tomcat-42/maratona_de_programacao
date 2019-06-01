//Pablo AS Hugen
#include <stdio.h>

int algoz(int n);

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",algoz(n));
}

int algoz(int n)
{
	int i,val,menor = 21,pos_menor=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&val);
		if(val<menor)
		{
			menor=val;
			pos_menor=i;
		}
	}
	return pos_menor+1;
}
