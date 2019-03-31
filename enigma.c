#include <stdio.h>

int main()
{
	int resto=0,inv=0;
	unsigned long long num;
	
	scanf("%llu",&num);

	while(num)
	{
		resto = num%10;
		inv = inv * 10 + resto;
		num/=10;
			
	}
	printf("%d\n",inv);



}
