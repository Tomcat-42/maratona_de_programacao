#include <stdio.h>

int main()
{
	int time,speed,dist;
	float fuel;
	scanf("%d%d",&time,&speed);
	dist = (speed*time);
	fuel = (dist/12.0);
	printf("%.3f\n",fuel);
}
