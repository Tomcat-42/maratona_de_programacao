#include <stdio.h>

//retorna o número de diagonais de um polígono convexo
long long int polig_diag(long long int lados);

int main()
{
	long long int lados;
	scanf("%lld",&lados);
	printf("%lld\n",polig_diag(lados));
}

long long int polig_diag(long long int lados) 
{ 
	return((lados*(lados -3))/2);
}
