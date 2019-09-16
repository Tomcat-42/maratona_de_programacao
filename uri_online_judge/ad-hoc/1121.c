#include <stdio.h>



int main()
{
	int m, n, s;
	char arena[100][100], instruc;
	int i,j,k;
	int iBegin, jBegin, iAtual, jAtual;

	int somalinha, somacoluna;

	while(scanf("%d %d %d", &n, &m, &s) && (m && n && s))
	{
		for(i=0; i<n; i++)
			for(j=0; j<m; j++)
			{
				scanf("%c\n", &arena[i][j]);
				if(arena[i][j] == 'N')
				{
					somalinha = -1;
					somacoluna = 0;
					iBegin = iAtual =i;
					jBegin = jAtual = j;
				}
				else if (arena[i][j] == 'S')
				{
					somalinha = 1;
					somacoluna = 0;
					iBegin = iAtual =i;
					jBegin = jAtual = j;
				}
				else if (arena[i][j] == 'O')
				{
					somalinha = 0;
					somacoluna = -1;
					iBegin = iAtual =i;
					jBegin = jAtual = j;
				}
				else if (arena[i][j] == 'L')
				{
					somalinha = 0;
					somacoluna = 1;
					iBegin = iAtual =i;
					jBegin = jAtual = j;
				}
			}

		for(k=0; k<s; k++)
		{
			scanf("%c\n", &instruc);
			if(instruc == 'D' && arena[iBegin][])
		}
		
	}
}
