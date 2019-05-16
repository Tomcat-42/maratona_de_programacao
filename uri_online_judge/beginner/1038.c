#include <stdio.h>


int main()
{
	int code,qnt;
	float price;
	scanf("%d %d",&code,&qnt);

	switch(code)
	{
		case 1:
		price = (qnt * 4.00);
		break;
		
		case 2:
		price = (qnt * 4.50);
		break;
		
		case 3:
		price = (qnt * 5.00);
		break;
		
		case 4:
		price = (qnt * 2.00);
		break;
		
		case 5:
		price = (qnt * 1.50);
		break;
		
		default:
		printf("Digite um valor entre 1 e 5.\n");			
	}
	printf("Total: R$ %.2f\n",price);
}
