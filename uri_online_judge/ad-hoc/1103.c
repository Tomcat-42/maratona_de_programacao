#include <stdio.h>

int main()
{
	int h1, m1, h2, m2;
	int min0, minf,mint;

	while(scanf("%d %d %d %d", &h1, &m1, &h2, &m2) && (h1 || m1 || h2 || m2))
	{
		min0 = h1*60 + m1;
		minf = h2*60 + m2;
		
		mint = (min0>=minf) ? ((1440 - min0) + minf) : (minf -min0);
		printf("%d\n",mint);
	}
}
