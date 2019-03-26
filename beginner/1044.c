#include <stdio.h>

int main()
{
	int a=0,b=0;
	scanf("%d%d",&a,&b);
	
	if((b%a == 0) || (a%b == 0))
		printf("Sao Multiplos\n");
	else
		printf("Nao sao Multiplos\n");
}
