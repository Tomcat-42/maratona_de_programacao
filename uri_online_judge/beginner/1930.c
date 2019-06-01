#include <stdio.h>
#define N 4

//retorna o número de tomadas da 'associação' de réguas
int tomada(int *tomadas_reguas,int tam_reguas);

int main()
{
	int tomadas_reguas[4],i;
	for(i=0;i<N;i++)
		scanf("%d",&tomadas_reguas[i]);

	printf("%d\n",tomada(tomadas_reguas,N));
}

int tomada(int *tomadas_reguas,int tam_reguas)
{
	if(tam_reguas==1) return tomadas_reguas[0];
	return(tomadas_reguas[tam_reguas-1] + (tomada(tomadas_reguas,tam_reguas-1)-1));
}
