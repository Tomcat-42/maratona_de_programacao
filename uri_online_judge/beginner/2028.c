#include <stdio.h>

//qnt de termos da serie
int qnt(int n);

int main()
{	
	//contadores
	int k=0,i,j;
	//maior n da sequencia
	int n;

	while(scanf("%d",&n)!=EOF)
	{
		printf("Caso %d: %d numero%s\n",++k, qnt(n),(n)?("s"):(""));
		printf("0");
		for(i=0;i<=n;i++)
		{
			for(j=0;j<i;j++)
				printf("%d%s",i,(j<i-1)?(" "):(""));
			
			printf("%s",(i<n)?(" "):("\n\n"));	
		}
	}
}

int qnt(int n)
{
	int i;
	int sum=1;
	for(i=0;i<=n;i++)
		sum+=i;
	return sum;
}

