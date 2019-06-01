#include <stdio.h>
#define max(a,b) ((a)>(b)) ? (a) : (b)
int carta(int a,int b);

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",max(a,b));
}
