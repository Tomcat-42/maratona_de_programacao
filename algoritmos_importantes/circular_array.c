//Exemplo simples de um array circular
#include <stdio.h>

//imprime m vezes os valores  de um array de n posições
void printCirc(int *array,int n,int m);

int main ()
{
	//array dos valores
	int array[100];
	//tamanho do array
	int n;
	//n° de elementos impressos
	int m;
	//contador
	int i;

	//lê o array
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	
	//printa m vezes
	scanf("%d",&m);
	printCirc(array,n,m);
}

void printCirc(int *array,int n,int m)
{
	int i;
	for(i=0;i<m;i++)
		//o módulo não deixa o valor passar do limite do array
		printf("%d ",array[i%n]);
}
