#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		printf("Ho%s",(n>0)?(" "):("!\n"));
	}
}
