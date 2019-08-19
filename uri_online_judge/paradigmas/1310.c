#include <stdio.h>
#define max(a,b) (a > b ? a : b)

int maior_soma_contigua(int *v, int n,int custo)
{
    int maior = 0, atual = 0, i;

    for(i = 0; i < n; i++)
    {
        atual += (v[i]-custo);

        atual = max(atual, 0);
        maior = max(maior, atual);
    }

    return maior;
}

int main()
{
	int dias[51],n=0,input=0,i,custo=0;

	while(scanf("%d\n%d", &n, &custo)!=EOF)
	{
		for(i=0; i<n; i++)
		{
			scanf("%d", &input);
			dias[i] = input;
		}

		printf("%d\n", maior_soma_contigua(dias, n, custo));
	}
}
