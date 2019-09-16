#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NUM1_LEN 12 //número maximo de digitos que o 10^32 terá
#define MAX_NUM2_LEN 33 //número maximo de digitos que o 10^32 terá

int main()
{
	int i=1, subs=0, last=0;
	char numero1[MAX_NUM1_LEN];
	char numero2[MAX_NUM2_LEN];
	char *aux;

	while(scanf("%s\n%s", numero1, numero2)!=EOF)
	{
		subs = last = 0;
		aux = numero2;
		printf("Caso #%d:\n", i++);
		while(1)
		{
			aux = strstr(aux, numero1);
			
			if(aux)
			{
				last = aux - numero2;
				subs++;

			}
			else
				break;
			aux++;
		}
		if(subs)
			printf("Qtd.Subsequencias: %d\nPos: %d\n\n", subs, last+1);
		else
			printf("Nao existe subsequencia\n\n");
	}
}
