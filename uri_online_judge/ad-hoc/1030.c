#include <stdio.h>
#include <stdlib.h>

typedef struct Lnode
{
	int Data;
	struct Lnode *Next;
}Lnode;

typedef struct
{
	int Lenght;
	Lnode *First, *Last;
}Lhead;

int LappendRight(Lhead *l, int Data)
{
	Lnode *no = (Lnode *)malloc(sizeof(Lnode));

	/* Se a alocação Falhou */
	if(no == NULL)
		return 1;

	//Insere o nó a direita
	no->Data = Data; 
	no->Next = NULL;
	
	//Se a lista estava vazia
	if(l->Last == NULL) l->First = l->Last = no;
	else
	{
		l->Last->Next = no;
		l->Last = no;
	}

	l->Lenght++;

	return 0;
}

void Lsequen(Lhead *l, int begin, int end)
{
	int i;
	for(i=begin; i<=end; i++)
		LappendRight(l, i);
	// Faz a lista ficar circular
	l->Last->Next = l->First;
}

int josephus(int n, int k)
{
	int i;
	Lhead l;
	Lnode *aux1, *aux2;
	
	// inicia a lista
	l.First = l.Last = NULL;
	l.Lenght =0;
	//gera uma lista com as posições dos soldados
	Lsequen(&l, 1, n);

	aux1 = aux2 = l.First;
	
	while(aux1->Next != aux1)
	{
		//acha e remove na posição
		i=1;
		while(i!=k)
		{
			aux2 = aux1;
			aux1 = aux1->Next;
			i++;
		}
		aux2->Next = aux1->Next;
		aux1 = aux2->Next;
	}
	
	return(aux1->Data);
}

int main()
{
	int nc, n, k;
	int i=1;

	scanf("%d", &nc);

	while(i<=nc)
	{
		scanf("%d %d", &n, &k);
		printf("Case %d: %d\n", i++, josephus(n, k));
	}
}
