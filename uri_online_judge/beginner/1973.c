#include <stdio.h>

int main()
{
	long long int estrelas[1000000],n,sum=0;
	int i,count=0,passo=1;
	
	scanf("%lld",&n);
	for(i=0;i<n;i++)
		scanf("%lld",&estrelas[i]);

	for(i=0;;i+=passo)
	{

		if((estrelas[i])%2)
			passo=1;
		else
			passo=-1;	
		
		printf("%d\n",i);	
		
		if(estrelas[i])
			estrelas[i]--;
		
		if((estrelas[i])%2)
			count++;
		
		if(i<0 || n<=i)
			break;

	}
	
	for(i=0;i<n;i++)
		sum += estrelas[i];

	printf("%d %lld\n",count,sum);
}
