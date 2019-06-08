#include <stdio.h>

typedef struct
{
	long long int flag_visitado,carneiros;
}estrela;

estrela estrelas[1000001];

int main()
{
	long long int n,sum=0,i,count=0;
	
	scanf("%llu",&n);
	for(i=0;i<n;i++)
	{
		scanf("%llu",&estrelas[i].carneiros);
		estrelas[i].flag_visitado = 0;

	}

	for(i=0;;)
	{

		if((estrelas[i].carneiros)%2)
		{
			estrelas[i].flag_visitado=1;
			if(estrelas[i].carneiros)
				estrelas[i].carneiros--;
			i++;
			if(n==i) break;
		}
		else
		{
			estrelas[i].flag_visitado=1;
			if(estrelas[i].carneiros)
				estrelas[i].carneiros--;
			i--;
			if(i<0) break;
		}
			

	}
	
	/*		
	for(i=0;i<n;i++)
	{
		printf("%lld ",estrelas[i].carneiros);

	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%llu ",estrelas[i].flag_visitado);

	}
	printf("\n");
	*/

	for(i=0;i<n;i++)
	{
		sum += estrelas[i].carneiros;
		count+=estrelas[i].flag_visitado;
	}
	printf("%llu %llu\n",count,sum);
}
