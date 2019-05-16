//Pablo AS Hugen
//Dado um número n, esse algoritmo printa seu fatorial
#include <stdio.h>

//retorna o fatorial do parâmetro usando recursão
unsigned int fat(unsigned int n);

int main()
{
	int n;
	//lê o número
	scanf("%d",&n);
	//printa o fatorial
	printf("%d\n",fat(n));
}

unsigned int fat(unsigned int n)
{
	return n==1 ? 1 : n*fat(n-1);
}
