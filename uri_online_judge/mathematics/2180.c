//Pablo Alessandro Santos Hugen
//Retorna a soma de 10 números primos consecutivos a partir de n utilizando o Crivo de Erastótenes
#include <stdio.h>
#include <string.h>
#define MARS_DIST 60000000

//Array 'booleano' dos primos até n
char nums[100000];


int crivo(int n);
int primeSum(int n,int x);

int main()
{
	int peso,vel;
	scanf("%d",&peso);
	vel = primeSum(peso,10);
	printf("%d km/h\n%d h / %d d\n",vel,MARS_DIST/vel,(MARS_DIST/vel)/24);
}

int crivo(int n)
{
	int i,j;

	//zero e um não são primos
	nums[0]=nums[1]=1;
	for(i=2;i*i<=n;i++)
		if(!nums[i])
			for(j=i*i;j<=n;j+=i)
				nums[j]=1;
	return !nums[n];
}

int primeSum(int n,int x)
{
	int i,j,sum=0;
	for(j=0,i=(n%2)?(n):(n+1);j<x;i+=2)
	{
		if(crivo(i))
		{
			sum+=i;
			j++;
		}
	}
	return sum;
}
