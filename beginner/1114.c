//Pablo A.S. Hugen
//Dados uma string x, esse algoritmo a lê enquanto for diferente de 2002
#include <stdio.h>
#include <string.h>

int main()
{
	char senha[5];
	while(scanf("%s",senha) && strcmp(senha,"2002"))
	{
		printf("Senha Invalida\n");
	}
	printf("Acesso Permitido\n");
	return 0;
}
