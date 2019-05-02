//Pablo Alessandro Santos Hugen
//Dado três lados de um trângulo, esse programa os ordena e diz o tipo do triângulo formado

#include <stdio.h>
#include <math.h>

//ordena o array de forma decrescente usando a técnica de bubble sort	
void bsort(float *array);

int main()
{
	float lados[3];

	//lê e ordena	
	scanf("%f %f %f",&lados[0],&lados[1],&lados[2]);
	bsort(lados);

	//testa os tipos de triângulos	
	if(lados[0] >= lados[1] + lados[2])
	{
		printf("NAO FORMA TRIANGULO\n");
		return 0;
	}

	if(pow(lados[0],2.0) == pow(lados[1],2.0)  + pow(lados[2],2.0))
	{
		printf("TRIANGULO RETANGULO\n");
	}
	else if(pow(lados[0],2.0) > pow(lados[1],2.0)  + pow(lados[2],2.0))
	{
		printf("TRIANGULO OBTUSANGULO\n");
	}
	else if(pow(lados[0],2.0) < pow(lados[1],2.0)  + pow(lados[2],2.0))
	{
		printf("TRIANGULO ACUTANGULO\n");
	}

	if(lados[0] == lados[1] && lados[1] == lados[2])
	{
		printf("TRIANGULO EQUILATERO\n");
	}
	else if ((lados[0] == lados[1] && lados[1] != lados[2]) || (lados[0] != lados[1] && lados[1] == lados[2]) ||(lados[0] == lados[2] && lados[1] != lados[2])) 
	{
		printf("TRIANGULO ISOSCELES\n");
	}
	
	
}
void bsort(float *array)
{
	//contador
	int i;
	//flag que determina se precisou ser ordenado
	int flag_sort=1;
	//variavel temporaia
	float temp;

	while(flag_sort)	
	{	
		flag_sort = 0;
		
		//loop que ordena
		for(i=1;i<=2;i++)
		{
			if(array[i] > array[i-1])
			{
				temp = array[i];
				array[i] = array[i-1];
				array[i-1] = temp;
				flag_sort=1;
			}
		}
	}
}
