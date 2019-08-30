#include <stdio.h>

int count_setbits(unsigned long int n);
int min(int a, int b);

int main()
{
	unsigned long int Bcarta, Acarta;
	int intersec;
	int Bn,An;
	int input;
	int i;

	while(scanf("%d %d", &An, &Bn) && (An && Bn))
	{
		Bcarta = Acarta = intersec = 0;
		for(i=0; i<An; i++)
		{
			scanf("%d", &input);
			Acarta |= 1 << input;
		}
		for(i=0; i<Bn; i++)
		{
			scanf("%d", &input);
			Bcarta |= 1 << input;
		}

		intersec = count_setbits(Acarta & Bcarta);	
		
		//printf("%d\n",count_setbits(intersec));
		//printf("%lu %lu\n",Acarta, Bcarta);
		//printf("%d %d\n",count_setbits(Acarta), count_setbits(Bcarta));
		
		printf("%d\n",min(count_setbits(Acarta)-intersec, count_setbits(Bcarta) - intersec));
	}
}

int min(int a, int b)
{
	//if(a==b) return 0;
	return(a <= b ? a : b);
}

int count_setbits(unsigned long int n)
{
	int cnt=0;

	while(n>0)
	{
		cnt+=(n&1);
		n=n>>1;
	}
	return cnt;
}
