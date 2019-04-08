#include <stdio.h>

int main()
{
	int n,i;
	float val1,val2,val3;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f %f %f",&val1,&val2,&val3);printf("%.1f\n",((val1 * 2.0 + val2 * 3.0 + val3 * 5.0)/10.0));
	}
}
