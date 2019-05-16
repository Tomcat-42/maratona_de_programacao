//pablo as hugen
//dado um número n, esse algoritmo printa o n-ésimo termo da série de fibonacci
#include <stdio.h>

//preenche um vetor com os n-ésimos termos da série de fibonacci 
void fib(unsigned long long int *array,int n);

int main()
{
	int n,t;
	unsigned long long int fibo[60];
	fib(fibo,60);

	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		printf("Fib(%d) = %llu\n",n,fibo[n]);	
	}
}


//loop
void fib(unsigned long long int *array,int n)
{
	int i;
	
	array[0]=0;
	array[1]=1;
	
	for(i=2;i<=n;i++)
	{
		array[i] = array[i-1] + array[i-2];	
	}
}

/*
//recursão(n! ,estoura o tempo)
unsigned long long int fib(int n)
{
	if(n<2){return n;}
	return (fib(n-1) + fib(n-2));
}
*/



