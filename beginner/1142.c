#include <stdio.h>

int main()
{
	int n,j,k,l;
	scanf("%d",&n);
	for(j=1,k=2,l=3;n>0;n--,j+=4,k+=4,l+=4)
		printf("%d %d %d PUM\n",j,k,l);
	
}
