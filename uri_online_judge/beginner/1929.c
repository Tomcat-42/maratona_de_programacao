#include <stdio.h>

//checa por todas as possibilidades(4) da combinação dos 4 palitos um grupos de 3
int tri(int a,int b,int c,int d);

int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	printf("%s\n",(tri(a,b,c,d))?("S"):("N"));
}

int tri(int a,int b,int c,int d)
{
	int ret=0;
	
	// a,b,c
	if((a<b+c) && (b<a+c) && (c<b+a))
		ret = 1;
	// b,c,d
	else if((b<c+d) && (c<b+d) && (d<c+b))
		ret = 1;
	// c,d,a
	else if((c<d+a) && (d<a+c) && (a<c+d))
		ret = 1;
	// d ,a,b
	else if((d<a+b) && (a<d+b) && (b<d+a))
		ret = 1;
	else
		ret =0;

	return ret;
}




