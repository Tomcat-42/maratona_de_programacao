#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ABS(a) (a) >= 0 ? (a) : -(a)

int possibilidades[91];

int bingo(int *arrayb, int lenb, int n);

int main()
{
	int arrayb[91], lenb, n;
	int i;

	while(scanf("%d %d", &n, &lenb) && (n && lenb))
	{
		for(i=0; i<lenb; i++)
			scanf("%d", &arrayb[i]);
		
		if(bingo(arrayb, lenb, n))
			printf("Y\n");
		else
			printf("N\n");
	}


}

int bingo(int *arrayb, int lenb, int n)
{
	int i,j;

	for(i=0; i<=n; i++)
		possibilidades[i]=0;

	for(i=0; i<lenb; i++)
		for(j=i; j<lenb; j++)
			possibilidades[ABS(arrayb[i]-arrayb[j])] = 1;
	
	for(i=0; i<=n; i++)
		if(!possibilidades[i]) return 0;

	return 1;
}
