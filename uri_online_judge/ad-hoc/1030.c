#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX(a,b) ((a) > (b)) ? (a) : (b)
#define MIN(a,b) ((a) < (b)) ? (a) : (b)

/* Tipo de dado a ser armazenado na Lista */
typedef int Tipo;

/* Estruturas de nó e cabeçalho */
typedef struct Lnode
{
	struct Lnode *Next;
	Tipo Data;
	struct Lnode *Prev;
}Lnode;

typedef struct Lhead
{
	Lnode *First;
	int Lenght;
	Lnode *Last;
}Lhead;

void Linit(Lhead *l);
void Lfree(Lhead *l);

/* Retorna um ponteiro para o index-ésimo elemento sequencial da lista */
Lnode *LnodePtr(Lhead *l, int index);

/* Remoção */
int LpopLeft(Lhead *l);
int LpopRight(Lhead *l);
int Lremove(Lhead *l, int index);

/* Gera uma lista elementos sequenciais no intervalo [down,up] */
void Lsequen(Lhead *l, int begin, int end);

int joseph(Lhead *l, int n, int k);

/* inserção e substituição */
int LappendLeft(Lhead *l, Tipo Data);
int LappendRight(Lhead *l, Tipo Data);

void Lprint(Lhead l, int ordem);

int main()
{
	Lhead l1;
	Linit(&l1);
	int nc,n,k;
	scanf("%d",&nc);
	for(int i=1; i<=nc; i++)
	{
		Linit(&l1);
		scanf("%d %d", &n, &k);
		Lsequen(&l1, 1, n);
		printf("Case %d: %d\n", i, (joseph(&l1, n, k)+k)%n);
		Lfree(&l1);
	}
	Lfree(&l1);
	return 0;

}

void Lprint(Lhead l, int ordem)
{
	Lnode *aux;

	/* Ordem normal */
	if(ordem)
	{
		aux = l.First;
		while(aux)
		{
			printf("%s%d%s",(aux==l.First)?("["):(""),
					aux->Data,
					(aux->Next==NULL)?("]\n"):(", "));
			aux = aux->Next;
		}

	}
	/* Ordem inversa */
	else
	{
		aux = l.Last;
		while(aux)
		{
			printf("%s%d%s", (aux==l.Last)?("["):(""),
					 aux->Data,
					 (aux->Prev==NULL)?("]\n"):(", "));
			aux = aux->Prev;
		}
	}
}

int joseph(Lhead *l, int n, int k)
{
	int i;
	for(i=k-1; l->Lenght>=1; i+=k)
	{
		Lprint(*l, 1);
		Lremove(l, i%n);
		n--;
		
		if(l->Lenght==1)
			return(l->First->Data);
	}

	return 0;

}

int LappendLeft(Lhead *l, Tipo Data)
{
	Lnode *no = (Lnode *)malloc(sizeof(Lnode));

	/* Se a alocação Falhou */
	if(no == NULL)
		return 1;

	/* Faz o nó apontar para os vizinhos */
	no->Prev = NULL;
	no->Data = Data;
	no->Next = l->First;

	/* Faz os vizinhos apontarem para o nó,
	 * trata o caso da lista vazia */
	if(l->Last == NULL)
		l->Last = no;
	else
		l->First->Prev = no;

	l->First = no;
	l->Lenght++;

	return 0;
}

int LappendRight(Lhead *l, Tipo Data)
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

void Lsequen(Lhead *l, int begin, int end)
{
	int min = MIN(begin, end), max = MAX(begin, end);
	for(int i=min; i<=max; i++)
		(begin < end) ? (LappendRight(l, i)) : (LappendLeft(l, i));
}

Lnode *LnodePtr(Lhead *l, int index)
{
	Lnode *aux = l->First;
	for(int i=0; i<index && aux; i++, aux=aux->Next);
	return(aux);
}

void Linit(Lhead *l)
{
	l->First = l->Last = NULL;
	l->Lenght = 0;
}

void Lfree(Lhead *l)
{
	Lnode *aux = l->First;

	while(aux)
	{
		/* Desacopla o primeiro nó */
		l->First = l->First->Next;
		if(l->First)
			l->First->Prev = NULL;

		/* Desaloca o primeiro nó e vai para o próximo */
		free(aux);
		aux = l->First;
	}
	Linit(l);
}

int LpopLeft(Lhead *l)
{
	Lnode *aux = l->First;

	/* A lista tem só um elemento */
	if(l->First == l->Last)
		l->First=l->Last = NULL;
	else
	{
		l->First->Next->Prev = NULL;
		l->First = l->First->Next;
	}

	l->Lenght--;
	free(aux);

	return 0;

}
int LpopRight(Lhead *l)
{
	Lnode *aux = l->Last;

	/* A lista tem só um elemento */
	if(l->First == l->Last)
		l->First=l->Last = NULL;
	else
	{
		l->Last->Prev->Next = NULL;
		l->Last = l->Last->Prev;
	}

	l->Lenght--;
	free(aux);

	return 0;

}
int Lremove(Lhead *l, int index)
{
	/* Erros de limites */
	if(index<0 || index>=l->Lenght)
		return(1);

	Lnode *aux = LnodePtr(l, index);


	/* Casos de remoçãoo nas extremidades */
	if(index == 0)
	{
		LpopLeft(l);
		return(0);

	}
	else if(index == l->Lenght-1)
	{
		LpopRight(l);
		return(0);

	}
	
	// 'Desacopla' o nó
	aux->Prev->Next = aux->Next;
	aux->Next->Prev = aux->Prev;

	l->Lenght--;
	free(aux);

	return(0);
}
