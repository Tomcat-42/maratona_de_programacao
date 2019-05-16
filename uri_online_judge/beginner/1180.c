//Pablo AS Hugen
//Dado um array de n posições, esse algoritmo imprime o seu menor valor e index
#include <stdio.h>

//função que retorna um ponteiro para um array de duas posições, a primeira é o menor elemento do array parâmetro e a segunda é seu index
int * low(int *array,int n);

int main()
{
	//Array e tamanho
	int i,array[1000],n;
	//ponteiro para o retorno de low()
	int *pLow;

	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	
	//ponteiro para a primeira posição do array de retorno de low()
	pLow = low(array,n);

	//printa o resultado
	printf("Menor valor: %d\nPosicao: %d\n",*(pLow+0),*(pLow+1));
}
int * low(int *array,int n)
{
	//a var de retorno precisa ser estatica, caso contrário será destruida quando a função terminar
	static int resul[2];
	int i;
	
	resul[0]=array[0],resul[1]=0;
	for(i=1;i<n;i++)
	{
		if(array[i]<resul[0])
		{
			resul[0]=array[i];
			resul[1] = i;
		}	
	}
	return resul;
}
