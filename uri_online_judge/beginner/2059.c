#include <stdio.h>

int ipr(int p,int j1,int j2,int r,int a);

int main()
{
	int p,j1,j2,r,a;
	scanf("%d %d %d %d %d",&p,&j1,&j2,&r,&a);
	printf("Jogador %d ganha!\n",ipr(p,j1,j2,r,a));
}

int ipr(int p,int j1,int j2,int r,int a)
{
	int ret;

	if( (p && !((j1+j2)%2)) || (!p && ((j1+j2)%2)) )
		ret = 1;
	else
		ret = 2;

	if(r && a)
		ret = 2;
	else if( (r && !a) || (!r && a))
		ret = 1;

	return ret;
}
