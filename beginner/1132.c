//Pablo Alessandro Hugen
//Dados dois inteiros, esse algoritmo imprime a soma dos inteiros múltiplos de 13 entre eles,inclusive
#include <stdio.h>
#include <stdlib.h>

//macros para max e min
#define max(a,b) ((a>b) ? (a) : (b))
#define min(a,b) ((a<b) ? (a) : (b))

int main()
{
	int a,b,i,sum=0;
	scanf("%d %d",&a,&b);
	for(i=min(a,b);i<=max(a,b);i++)
		if((i%13))sum+=i;
	printf("%d\n",sum);
}
