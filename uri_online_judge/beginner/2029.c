#include <stdio.h>
#include <math.h>
#define PI 3.14

int main()
{
	double vol,diam,area;
	while(scanf("%lf %lf",&vol,&diam)!=EOF)
	{
		area =(PI*((diam/2)*(diam/2))); 
		printf("ALTURA = %.2lf\nAREA = %.2lf\n",(vol/area),area);
	}
}
