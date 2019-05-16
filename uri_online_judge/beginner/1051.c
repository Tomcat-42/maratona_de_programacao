//Pablo Alessandro Santos Hugen
//Dado o sálario de um habitante de Lisarb(kk?),esse algoritmo calcula o valor do imposto de acordo com a faixa de renda

#include <stdio.h>

int main()
{
	float salario,faixa0=0.0,faixa1=0.0,faixa2=0.0,faixa3=0.0;
	
	//lê o salário
	scanf("%f",&salario);

	//calcula o imposto
	if(salario > 0.0 && salario <= 2000.0)
	{
		printf("Isento\n");
	}
	else if(salario > 2000.0 && salario <= 3000.0)
	{
		faixa1 = (salario - 2000.0) ;
		faixa0 = (salario - faixa1);
		printf("R$ %.2f\n", (faixa1*0.08));
	}
	else if(salario > 3000.0 && salario <= 4500.0)
	{
		
		faixa2 = (salario - 3000.0);
		faixa1 = (salario - (faixa2 + 2000.0));
		faixa0 = (salario - (faixa2 + 1000));
		printf("R$ %.2f\n", ((faixa1 * 0.08) + (faixa2 * 0.18)));
	}
	else if(salario > 4500.00)
	{
		faixa3 = (salario - 4500.00);	
		faixa2 = (salario - (faixa3 + 3000.0));
		faixa1 = (salario - (faixa2 + faixa3 + 2000.0));
		faixa0 = (salario - (faixa2 + 1000));
		printf("R$ %.2f\n", ((faixa1 * 0.08) + (faixa2 * 0.18) + (faixa3 * 0.28)));
	}
}
