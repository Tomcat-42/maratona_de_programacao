#include <stdio.h>
#define P1 1.50
#define P2 2.50
#define P3 3.50
#define P4 4.50
#define P5 5.50

int main()
{
	int n,id,qnt;
	float preco_total=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d",&id,&qnt);
		switch(id)
		{
			case 1001:
				preco_total+=P1*qnt;
				break;
			case 1002:
				preco_total+=P2*qnt;
				break;
			case 1003:
				preco_total+=P3*qnt;
				break;
			case 1004:
				preco_total+=P4*qnt;
				break;
			case 1005:
				preco_total+=P5*qnt;
				break;
		}
	}
	printf("%.2f\n",preco_total);
}
