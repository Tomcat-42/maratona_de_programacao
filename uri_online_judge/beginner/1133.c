//Pablo Alessandro Hugen
//Dados dois inteiros, esse algoritmo imprime quais inteiros entre eles divididos por 5 dão resto 3 ou 2
#include <stdio.h>
#include <stdlib.h>

//macros para max e min
#define max(a,b) ((a>b) ? (a) : (b))
#define min(a,b) ((a<b) ? (a) : (b))

int main()
{
	int a,b,i;
	scanf("%d %d",&a,&b);
	for(i=min(a,b)+1;i<max(a,b);i++)
		if((i%5==2 || i%5==3))printf("%d\n",i);
}
