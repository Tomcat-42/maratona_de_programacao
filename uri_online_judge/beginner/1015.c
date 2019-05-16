#include <stdio.h>
#include <math.h>

int main()
{
	double xa,ya,xb,yb,dab;
	scanf("%lf%lf%lf%lf",&xa,&ya,&xb,&yb);
	dab = sqrt((pow((xa-xb),2) + pow((ya-yb),2)));
	printf("%.4lf\n",dab);

}
