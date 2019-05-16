//Pablo A.S. Hugen
//Dados N pares de inteiros, esse algoritmo mostra a sequência do menor pro maior e a soma entre eles
#include <stdio.h>

//máximos e mínimos
#define min(a, b) (((a) < (b)) ? (a) : (b))
#define max(a, b) (((a) > (b)) ? (a) : (b))

int main(int argc,char **argv)
{
	int a,b,sum,i;

	while(scanf("%d %d",&a,&b) && (a>0 && b>0))
	{
		sum=0;
		for(i=min(a,b);i<=max(a,b);i++)
		{
			printf("%d ",i);
			sum+=i;
		}
		printf("Sum=%d\n",sum);
	}
	return 0;
}
