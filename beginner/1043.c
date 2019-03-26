#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c,trap,tri;
	scanf("%f %f %f",&a,&b,&c);
	if (((a + b) > c ) && ((b +c)>a) && ((a +c)>b))
	{
		trap = ((a + b) * c) / 2.0 ;
		printf("Area = %.1f\n",trap);	
	}
	else
	{
		tri = (a + b + c );
		printf("Perimetro = %.1f\n",tri);	
	}
}
