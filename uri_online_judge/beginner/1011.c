#include <stdio.h>

int main()
{
	const double PI=3.14159;
	double R,V;

	scanf("%lf",&R);
	V = (R*R*R*PI*4.0/3.0);
	printf("VOLUME = %.3lf\n",V);
}
