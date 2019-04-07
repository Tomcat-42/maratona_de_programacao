#include <stdio.h>

int main()
{
	int num,i;
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		(i%2==0) ? printf("") : printf("%d\n",i);
	}
}
