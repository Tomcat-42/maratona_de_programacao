//Pablo Alessandro Santos Hugen
//Dado dois números, esse algoritmo mostra a soma dos números ímpares entre eles.
#include <stdio.h>

//ordena a entrada para simplificar a soma
void sort(int *array);

int main()
{
	//número de casos de teste
	int n;
	//intervalo (x,y)
	int inter[2];
	//contadores
	int i,j;
	//soma de ímpares
	int sum=0;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=0;
		scanf("%d %d",&inter[0],&inter[1]);
		//ordena a entrada para simplificar
		if(inter[0]>inter[1]){sort(inter);}
		for(j=inter[0]+1;j<inter[1];j++)
		{
			(j%2) ? (sum+=j) : (sum+=0);
		}
		printf("%d\n",sum);
	}
}

void sort(int *array)
{
	int tmp;
	tmp = *array;
	*array = *(array + 1);
	*(array+1) = tmp;
}
