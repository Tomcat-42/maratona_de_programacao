//Pablo A.S. Hugen
//Dado dois valores, esse algoritmo mostra a soma dos números ímpares entre eles

#include <stdio.h>

int main()
{
	int x,y,s=0,i;
	
	scanf("%d %d",&x,&y);	
	
	for(((x<=y)? (i=x+1) : (i=y+1)) ; ((x<=y) ? (i<y) : (i<x)) ; i++)
	{
		(i%2!=0) ? (s+=i) : (s+=0);
	}

	printf("%d\n",s);
}
