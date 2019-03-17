#include <stdio.h>

int main()
{
	int code1,code2,num1,num2;
	float price1,price2,total;

	//produto 1
	scanf("%d%d%f",&code1,&num1,&price1);
	//produto 2
	scanf("%d%d%f",&code2,&num2,&price2);
	
	total = ((num1*price1) + (num2*price2));

	printf("VALOR A PAGAR: R$ %.2f\n",total);
}
