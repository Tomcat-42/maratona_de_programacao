//Pablo Alessandro Santos Hugen
#include <stdio.h>
#include <stdlib.h>

char nums[1000000];

int twinPrime(int l,int m);

int main()
{
	//casos de teste
	int q;
	int l,m;
	
	scanf("%d",&q);
	while(q--)
	{
		scanf("%d %d",&l,&m);
		printf("%d\n",twinPrime(l,m));
	}
	//printf("%d",twinPrime(1,7));
	twinPrime(8,12);
	/*	
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);	
		printf("%sPrime\n",(crivo(n))?(""):("Not "));
	}
	*/
}

int twinPrime(int l,int m)
{
	//contadores
	int i,j,k,c;
	//vetor de primos
	int primos[1000000],p=0;
	//qnt de primos gemeos
	int twinP=0;
	
	//0 e 1 não são primos(então são setados pra 1)
	nums[0]=nums[1]=1;
	
	//executa o crivo
	for(i=2;i*i<=m;i++)
		if(!nums[i])
		{
			/*
			if(>=i)
				primos[p++]=l;
			*/

			for(j=i*i;j<=m;j+=i)
				nums[j] = 1;
		}
	
	for(k=l;k<=m;k++)
	{
		if(((!nums[k]&&!nums[k-2]) || (!nums[k]&&!nums[k+2])))
			twinP++;
		/*
		if(!nums[k])
		{
			printf("%d %d %d\n",k+2,k,k-2);
		}
		*/
	}


	/*
	for(k=l;k<=m;k++)
		if(!nums[k])
			primos[p++] = k;
	
	for(k=0;k<p;k++)
		printf("%d\n",primos[k]);
	for(k=0;k<p;k++)
		for(c=0;c<p;c++)
			if(abs(primos[k]-primos[c])==2)
				twinP++;
	*/
	//printf("%d\n",twinP);
	
	return twinP;	
}
