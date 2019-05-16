//n sei como fiz isso,mas fiz
#include <stdio.h>

int main()
{
	int n,i,j,matriz[101][101];

	while(scanf("%d",&n) != EOF)
	{
		if(n%2==0 || (n<5 || n>101))
		{
			continue;
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				
				//regra normal do centro da matriz quadrada impar, (i e j = (n-1)/2)
				if((i==((n-1)/2)) && (j==((n-1)/2)))
				{
					matriz[i][j] = 4;
				}
				
				//o exercício diz que o quadrado começa com (i e j = n/3 ), até ai blz, o  difícil é descobrir a regra que ele termina.Olhando pra matrizes de diferentes ordens descobri que a regra é (i e j = (n-1) - (n-1)/3 )
				else if (((i >= ((n)/3) ) && i <= ((n-1) - ((n)/3))) && ((j >= ((n)/3) ) && j <= ((n-1) - ((n)/3))))
 
				{
					matriz[i][j] = 1;
				}
				//regra fácil da diag. principal (i=j)
				else if(i==j)
				{
					matriz[i][j] = 2;
				}
				//regra fácil da diag. secundaria (i+j=n)
				else if((i+j)==(n-1))
				{
					matriz[i][j] = 3;
				}
				
				//o resto das posições é zero
				else
				{
					matriz[i][j] = 0;
				}
			}
		}


		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d",matriz[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
