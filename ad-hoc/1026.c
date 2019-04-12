#include <stdio.h>

int main()
{
	unsigned long in0,in1;
	
	while(scanf("%lu %lu",&in0,&in1) != EOF)
	{
		printf("%lu\n",(in0^in1));
	}
}
