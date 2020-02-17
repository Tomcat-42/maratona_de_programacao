#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Limites */
#define MAX_LENGHT 101
#define MAX_BOOKS 21

/* Printa as iniciantes e depois as linhas de **palavras */
void nome_palavras(char palavras[MAX_LENGHT][MAX_BOOKS], int len);
/* Printa todas as estatísticas de letras */
void stats(char palavras[MAX_LENGHT][MAX_BOOKS], int len);
/* Testa de um char é uma vogal */
int is_vogal(char x);

/* Func de comparação*/
int cmp(const void *a, const void *b);
void swp(char *a,char *b);

void sksort_rec(char *arr,int low ,int high);

int main()
{
	int i,j,k, n_testes, n_livros;
	char livro[MAX_LENGHT], palavras[MAX_LENGHT][MAX_BOOKS];

	scanf("%d\n", &n_testes);
	for(i=0; i<n_testes; i++)
	{
		scanf("%d\n", &n_livros);
		k=0;
		for(j=0; j<n_livros; j++)
		{
			fgets(livro, 101, stdin);
			palavras[i][k++] = livro[0];
		}
		palavras[i][k] = '\0';
	}

	/* Saída do alg */
	nome_palavras(palavras, n_testes);
	stats(palavras, n_testes);
	return 0;
}

void nome_palavras(char palavras[MAX_LENGHT][MAX_BOOKS], int len)
{
	int i, j;
	printf("Nome da Linguagem: ");
	for(i=0; i<len; i++)
		putchar(toupper(palavras[i][0]));
	putchar('\n');

	printf("Lista de Palavras: \n");
	for(i=0; i<len; i++)
	{
		for(j=0; palavras[i][j]!='\0'; j++)
			putchar(tolower(palavras[i][j]));
		putchar('\n');
	}
}


void stats(char palavras[MAX_LENGHT][MAX_BOOKS], int len)
{
	char junto[MAX_BOOKS * MAX_LENGHT];
	int i, j, vogais=0, consoantes=0;
	/* junta todas as palavras e separa as vogais das consoantes */
	strcpy(junto, palavras[0]);
	for(i=1; i<len; i++)
		strcat(junto, palavras[i]);
	/* Ordena as letras por vogal/consoante e pela ordem entre elas */
	qsort(junto, strlen(junto), sizeof(char), cmp);
	// printf("Junto: %s\nTamanho: %lu\n", junto, strlen(junto));
	/* O array está ordenado, agora falta contar as ocorrências não repetidas*/
	for(i=0, j=(strlen(junto)-1);i<=j;)
	{
		if( !is_vogal(junto[i]) && (tolower(junto[i]) != tolower(junto[i+1])) )
		{
			//printf("%c ", junto[i]);
			consoantes++;
		}

		if( is_vogal(junto[j]) && (tolower(junto[j]) != tolower(junto[j-1])) )
		{
			//printf("%c ", junto[j]);
			vogais++;
		}

		if(!is_vogal(junto[i])) i++;
		if(is_vogal(junto[j])) j--;

		// printf("i: %d\nj: %d\n", i, j);
	}

	printf("Numero de Vogais: %d\n", vogais);
	printf("Numero de Consoantes: %d\n", consoantes);
	printf("Numero Total de Letras: %d\n", consoantes+vogais);
	if(consoantes)
		printf("Tempo para aprender: %.1f horas\n",
				((float)(consoantes+2*vogais))/(float)consoantes);
	else
		printf("Linguagem Ruim\n");
}

/* Compara por vogal e consoante e por ordem entre vogais e entre consoantes*/
int cmp(const void *a, const void *b)
{
	char val_a = *(char *)a;
	char val_b = *(char *)b;

	if(is_vogal(val_a) && !is_vogal(val_b))
		return 1;

	if(is_vogal(val_a) && is_vogal(val_b))
		return ( val_a - val_b);

	if(!is_vogal(val_a) && is_vogal(val_b))
		return -1;

	if(!is_vogal(val_a) && !is_vogal(val_b))
		return ( val_a - val_b);

	return 0;
}

int is_vogal(char x)
{
	switch(tolower(x))
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			return 1;
		default:
			return 0;
	}
}
