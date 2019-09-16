#include <stdio.h>

unsigned long long int fatoriais[20];

unsigned long long int fat(int n);

int main()
{
	int m,n;
	while(scanf("%d %d", &m, &n)!=EOF)
	{
		printf("%llu\n", (fat(m) + fat(n)));
	}
}

unsigned long long int fat(int n)
{
	if(n == 0) return 1;

	if(fatoriais[n-1])
	{
		fatoriais[n] = n * fatoriais[n-1];
		return n * fatoriais[n-1];
	}
	else
	{
		fatoriais[n-1] = fat(n-1);
		return n* fatoriais[n-1];
	}

}
