#include <stdio.h>

int main()
{
	int num,impar=0;
	
	scanf("%d",&num);

	while(impar<=5)
	{
		if(num%2!=0)
		{
			printf("%d\n",num);
			impar++;	
		}
		num++;
	}
}
