#include <stdio.h>

typedef struct
{
	char elem[2000][2000];
	int i,j;
}Matriz;

void matScn(Matriz *a);

void FloodFill(Matriz *a);

void matScn(Matriz *a)
{
	for(int m =0;m<a->i;m++)
		for(int n = 0 ;n<a->j;n++ )
			scanf("%c",&a->elem[m][n]);
}

void FloodFill(Matriz *a)
{
	
}
