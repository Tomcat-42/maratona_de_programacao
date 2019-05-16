//Pablo AS Hugen
//Dado dois inteiros, esse algoritmo imprime o resultado da divisõo entre eles -se possível- em ponto flutuante
#include <stdio.h>

int main()
{
	int a,b,n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		(!b) ? printf("divisao impossivel\n") : printf("%.1f\n",(float)a/(float)b);
	}

}


