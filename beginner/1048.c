//Pablo Alessandro Santos Hugen
//Dado o salário de um funcionário , esse programa calcula o reajuste de acordo com a faixa
#include <stdio.h>

int main()
{
	float salario;
	scanf("%f",&salario);

	//Calcula o o novo salário e o valor do reajuste
	if(salario > 0.00 && salario <= 400.00 )
	{
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",(salario + (salario * 0.15)),(salario * 0.15));
	
	}
	else if(salario > 400.00 && salario <= 800.00 )
	{
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",(salario + (salario * 0.12)),(salario * 0.12));
	
	}
	else if(salario > 800.00 && salario <= 1200.00 )
	{
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",(salario + (salario * 0.10)),(salario * 0.10));
	
	}
	else if(salario > 1200.00 && salario <= 2000.00 )
	{
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",(salario + (salario * 0.07)),(salario * 0.07));
	
	}
	else
	{
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",(salario + (salario * 0.04)),(salario * 0.04));
	
	}
}
