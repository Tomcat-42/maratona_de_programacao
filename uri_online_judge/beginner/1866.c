#include <stdio.h>
#include <math.h>

int main()
{
	int test,tam,i;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
		scanf("%d",&tam);
		printf("%d\n",(tam%2)?(1):(0));
	}

}
