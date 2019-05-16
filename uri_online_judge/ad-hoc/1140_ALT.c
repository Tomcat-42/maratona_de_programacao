#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char frase[1100];
	int espacos[55];
	int i,j,taut;
	
	while(fgets(frase,1100,stdin) && frase[0] != '*')
	{
		taut=1;
		for(j=0,i=0;i < ((int)(strlen(frase)) -1) ; i++ )
		{
			if(frase[i] == ' ')
			{
				espacos[j] = i;
				j++;
			}
		}
		for(i=0;i<j;i++)
		{
			if(toupper(frase[0]) == toupper(frase[espacos[i]+1]) )
			{
				continue;
			}
			
			else
				taut=0;
				break;
		}
		taut ? printf("Y\n"):printf("N\n");
	}
}
