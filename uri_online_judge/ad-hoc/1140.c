#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char frase[1100];
	char *palavras;
	char palavras_array[51][22];
	int i,j,taut;


	while(fgets(frase,1100,stdin) && frase[0] != '*')
	{
		
		i=0;
		taut=1;
		
		palavras = strtok(frase," ");	
		while(palavras != NULL)
		{
			strcpy(palavras_array[i++], palavras);
			palavras = strtok(NULL, " ");
		}
		
		j=i;	
		for(i=0;i<j;i++)
		{
			if((toupper(palavras_array[0][0]) == toupper(palavras_array[i][0])))
				continue;
			else
				taut=0;
				break;

		}

		taut ? printf("Y\n"):printf("N\n");
	}
}
