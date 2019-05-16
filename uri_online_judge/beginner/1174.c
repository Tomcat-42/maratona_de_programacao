//Pablo AS Hugen
//Dado um vetor de 100 posições, esse algoritmo imprime e index e o valor das posições que contém valores <=10
#include <stdio.h>

int main()
{
	float A[100];
	int i;
	for(i=0;i<100;i++)
		scanf("%f",&A[i]);
	
	for(i=0;i<100;i++)
		if(A[i]<=10){printf("A[%d] = %.1f\n",i,A[i]);}
}
