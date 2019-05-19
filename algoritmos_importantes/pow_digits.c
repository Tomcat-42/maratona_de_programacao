//Função que retorna o número de dígitos de uma potência do tipo a^b;
#include <stdio.h>
#include <math.h>

//retorna o número de dígitos de base^power
int digits(int base,int power);

//testa a função
int main()
{
	int a,b;
	while(scanf("%d^%d",&a,&b)!=EOF)
		printf("digits(%d^%d) = %d\n",a,b,digits(a,b));
}

int digits(int base,int power)
{
	return (int)(power * log10(base) + 1);
}
