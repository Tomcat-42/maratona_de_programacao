#include <stdio.h>
#include <string.h>

//bitmask para conjuntos
typedef struct
{
	unsigned long int bitmask:60;
	//numero de termos
	int n;
}set;

//lê um conjunto A de m termos
void scan_set(set *a);

//retorn o n de lementos da uniao
int uni(set a,set b);

//retorn o n de lementos da intersecção
int intersec(set a,set b);

int main()
{
	//casos de teste
	int qt;
	//conjuntos
	set sets[10000];
	//numero de conjuntos
	int n;
	//numero de operacoes
	int operacoes;
	//operação nos conjuntos k,l
	int op,k,l;
	//contadores
	int i,j;
	
	//scan_set(&sets[0]);
	//printf("%lu",sets[0].bitmask);

	
	scanf("%d",&qt);
	
	for(i=0;i<qt;i++)
	{
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			//limpar o n
			sets[j].bitmask |= ~0xFF;
			scan_set(&sets[j]);
		}
		
		scanf("%d",&operacoes);
		for(j=0;j<operacoes;j++)
		{
			scanf("%d %d %d",&op,&k,&l);
			printf("%d\n",(op==1)?(intersec(sets[k-1],sets[l-1])):(uni(sets[k-1],sets[l-1])));
		}
	}
}

//lê um conjunto A de m termos
void scan_set(set *a)
{
	int i,valor;
	scanf("%d",&a->n);
	for(i=0;i<a->n;i++)
	{
		scanf("%d",&valor);
		a->bitmask |= (1<<valor);
	}

}

int uni(set a,set b)
{
	return __builtin_popcount(a.bitmask | b.bitmask);
}

int intersec(set a,set b)
{
	return __builtin_popcount(a.bitmask & b.bitmask);
}
