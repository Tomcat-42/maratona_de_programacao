//Pablo A.S. Hugen
//Dados N pares de números, esse algoritmo mostra se foram digitados em ordem crescente ou decrescente
#include <stdio.h>

int main()
{
	int a,b;
	while(scanf("%d %d",&a,&b) && a!=b)
	{
		printf("%s\n",(a>b)?("Decrescente"):("Crescente"));
	}
}
