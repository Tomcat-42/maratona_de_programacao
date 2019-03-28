#include <stdio.h>
#include <math.h>

int main()
{
	float val,moedas;
	int val_s_moedas;
	
	scanf("%f",&val);

	if(val<0.0 || val>1000000.0)
	{
		return 1;
	}
	
	val_s_moedas = val;
	moedas = (val - val_s_moedas);
	
	printf("NOTAS:\n");

	printf("%d nota(s) de R$ 100.00\n",(val_s_moedas/100));
	val_s_moedas %= 100;

	printf("%d nota(s) de R$ 50.00\n",(val_s_moedas/50));
	val_s_moedas %= 50;
	
	printf("%d nota(s) de R$ 20.00\n",(val_s_moedas/20));
	val_s_moedas %= 20;

	printf("%d nota(s) de R$ 10.00\n",(val_s_moedas/10));
	val_s_moedas %= 10;

	printf("%d nota(s) de R$ 5.00\n",(val_s_moedas/5));
	val_s_moedas %= 5;

	printf("%d nota(s) de R$ 2.00\n",(val_s_moedas/2));
	val_s_moedas %= 2;

	
	printf("MOEDAS:\n");
	
	
	printf("%d moeda(s) de R$ 1.00\n",(val_s_moedas/1));

	printf("%d moeda(s) de R$ 0.50\n",fmod(moedas, 0.50));
	moedas = fmod(moedas,0.5);
}
