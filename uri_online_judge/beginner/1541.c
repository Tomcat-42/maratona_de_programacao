//Pablo AS Hugen
#include <stdio.h>
#include <math.h>

int lado(int a,int b,int per100);

int main()
{
	int a,b,per100;
	while(scanf("%d %d %d",&a,&b,&per100) && (a && b && per100))
		printf("%d\n",lado(a,b,per100));
}

int lado(int a,int b,int per100)
{
	return((int)(sqrt((a*b)*(100.0/(float) per100))));
}
