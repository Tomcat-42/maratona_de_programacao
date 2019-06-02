#include <stdio.h>

int main()
{	
	unsigned long long num;	
	
	scanf("%llu",&num);
	while(num)
	{
		printf("%llu",(num%10));
		num/=10;		
	}
	printf("\n");
}
