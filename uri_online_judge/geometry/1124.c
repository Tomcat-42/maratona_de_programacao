#include <stdio.h>
#include <math.h>

// Retorna a distância entre dois pontos no plano
int dist(int x1,int y1, int x2,int y2);

int main()
{
	int l, c, r1, r2;

	while(scanf("%d %d %d %d", &l, &c, &r1, &r2) && (l && c && r1 && r2))
	{
		// Os diâmetros dos cilindros não podem ser maiores que nenhuma dimensão
		if((2*r1>l) || (2*r1>c) || (2*r2>l) || (2*r2>c))
			printf("N\n");
		// Faz uma abstração com um plano coordenado
		else if(dist(r1,r1, c-r2, l-r2)>= ((r1+r2) * (r1+r2)))
			printf("S\n");
		else
			printf("N\n");
	}
}

int dist(int x1,int y1, int x2,int y2)
{
	return(int)pow((x2-x1), 2.0) + pow((y2-y1), 2.0);
}
