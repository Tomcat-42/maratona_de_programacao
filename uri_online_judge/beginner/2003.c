#include <stdio.h>
#define FEIRA 480
int main()
{
	int hr,min,time;
	while(scanf("%d:%d",&hr,&min)!=EOF)
	{
		time=60+(hr*60)+min;
			printf("Atraso maximo: %d\n",(time>=FEIRA)?(time-FEIRA):(0));
	}
}
