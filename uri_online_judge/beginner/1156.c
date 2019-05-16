//Pablo AS Hugen
//Calcula a sequencia especificada

#include <stdio.h>

int main()
{
	int i,j;
	float s=0;
	for(i=1,j=1;i<=39;i+=2,j*=2)
	{
		s+=((float)i/(float)j);
	}
	printf("%.2f\n",s);
}


