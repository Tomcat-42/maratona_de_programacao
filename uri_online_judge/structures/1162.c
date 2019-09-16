#include <stdio.h>
#include <stdlib.h>

// Abstração para os vagões da locomotiva
typedef struct Lnode
{
	int Data;
	struct Lnode *Next, *Prev;
}Lnode;

typedef struct
{
	Lnode *First, *Last;
	int Lenght;
}Lhead;

int LappendRight(Lhead *l, int Data);
int Bsort(Lhead *l);

int main()
{
	Lhead list;
	int n, l, i, input;

	scanf("%d", &n);
	while(n--)
	{
		list.First = list.Last = NULL;
		list.Lenght = 0;	
		scanf("%d", &l);
		for(i=0; i<l; i++)
		{
			scanf("%d", &input);
			LappendRight(&list, input);
		}


		printf("Optimal train swapping takes %d swaps.\n", Bsort(&list));
	}
}

int LappendRight(Lhead *l, int Data)
{
	Lnode *no = (Lnode *)malloc(sizeof(Lnode));

	/* Se a alocação Falhou */
	if(no == NULL)
		return 1;


	// Faz o nó apontar para seus vizinhos
	no->Prev = l->Last;
	no->Data = Data;
	no->Next = NULL;

	/* Faz os vizinhos apontarem para o nó,
	 * trata o caso da lista vazia */
	if(l->First == NULL)
		l->First = no;
	else
		l->Last->Next = no;

	l->Last = no;
	l->Lenght++;

	return 0;
}


// Ordena a lista se e retorna o número de trocas necessárias
int Bsort(Lhead *l)
{
	int i,j;
	int swaps=0, tmp;
	Lnode *aux;
	
	for(i=0; i<l->Lenght-1; i++)
	{
		aux = l->First;
		for(j=0; aux->Next && j<l->Lenght-i-1; j++)
		{
			if(aux->Data > aux->Next->Data)
			{
				swaps++;
				tmp = aux->Data;
				aux->Data = aux->Next->Data;
				aux->Next->Data = tmp;
			}
			aux = aux->Next;
		}
	}

	return swaps;
}
