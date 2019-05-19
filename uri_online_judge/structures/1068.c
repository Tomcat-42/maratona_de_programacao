//Pablo AS Hugen
//Dado uma string, esse algoritmo 3
#include <stdio.h>
#include <string.h>

//retorna 1 
int balance(char *exp);

int main()
{
	char exp[1001];
	while(scanf("%s",exp) != EOF)
	{
		printf("%s\n" ,!balance(exp)?("correct"):("incorrect"));
	}

}

int balance(char *exp)
{
	int lenght = strlen(exp); 
	int i,j;
	int abre=0,fecha=0;
	for(i=0;i<lenght;i++)
	{
		if(exp[i] == '(')
		{
			abre++;
			for(j=i;i<lenght;j++)
			{
				if(exp[j]==')')
				{
					fecha++;
					break;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	//return (abre==fecha) ? (1) : (0);
	return 1;
}
