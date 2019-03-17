#include <stdio.h>

int main()
{
	const double PI=3.14159;
	double R,A;

	scanf("%lf" , &R);
	A = ((R*R)*PI);
	printf("A=%.4lf\n",A);
}
