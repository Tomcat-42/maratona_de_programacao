#include <stdio.h>

int hora(int s,int t,int f);

int main()
{
	int s,t,f;
	scanf("%d %d %d",&s,&t,&f);
	printf("%d\n",hora(s,t,f));
}

int hora(int s,int t,int f)
{
	int ret;

	ret = s +t;
	if(ret>23) ret -=24;
	ret+=f;
	if(ret>23) ret -=24;
	if(ret<0) ret =24 +ret;

	return ret;
}
