#include <stdio.h>

int main()
{
	double money;
	int money_int;

	scanf("%lf",&money);
	
	if(money<0.0 || money>1000000.0)
	{
		return 1;
	}

	money_int = (money * 1000.0);
	
	printf("NOTAS:\n");

	printf("%d nota(s) de R$ 100.00\n",(money_int/100000));
	money_int %= 100000;

	printf("%d nota(s) de R$ 50.00\n",(money_int/50000));
	money_int %= 50000;
	
	printf("%d nota(s) de R$ 20.00\n",(money_int/20000));
	money_int %= 20000;

	printf("%d nota(s) de R$ 10.00\n",(money_int/10000));
	money_int %= 10000;

	printf("%d nota(s) de R$ 5.00\n",(money_int/5000));
	money_int %= 5000;

	printf("%d nota(s) de R$ 2.00\n",(money_int/2000));
	money_int %= 2000;

	printf("MOEDAS:\n");
		
	printf("%d moeda(s) de R$ 1.00\n",(money_int/1000));
	money_int %= 1000;

	printf("%d moeda(s) de R$ 0.50\n",(money_int/500));
	money_int %= 500;

	printf("%d moeda(s) de R$ 0.25\n",(money_int/250));
	money_int %= 250;

	printf("%d moeda(s) de R$ 0.10\n",(money_int/100));
	money_int %= 100;

	printf("%d moeda(s) de R$ 0.05\n",(money_int/50));
	money_int %= 50;

	printf("%d moeda(s) de R$ 0.01\n",(money_int/10));
}
