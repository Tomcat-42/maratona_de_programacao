//Pablo Alessandro Santos Hugen
//Dados três atributos, esse programa printa o tipo de animal
#include <stdio.h>
#include <string.h>

int main()
{
	char coluna[20],classe[20],alimen[20];
	scanf("%s %s %s",coluna,classe,alimen);

	
	if(!strcmp(coluna,"vertebrado"))
	{
		if(!strcmp(classe,"ave"))
		{
			if(!strcmp(alimen,"carnivoro"))
			{
				printf("aguia\n");
			}
			if(!strcmp(alimen,"onivoro"))
			{
				printf("pomba\n");
			}
		}
		else if(!strcmp(classe,"mamifero"))
		{
			if(!strcmp(alimen,"onivoro"))
			{
				printf("homem\n");
			}
			if(!strcmp(alimen,"herbivoro"))
			{
				printf("vaca\n");
			}
		}
	}
	else if(!strcmp(coluna,"invertebrado"))
	{
		if(!strcmp(classe,"inseto"))
		{
			if(!strcmp(alimen,"hematofago"))
			{
				printf("pulga\n");
			}
			if(!strcmp(alimen,"herbivoro"))
			{
				printf("lagarta\n");
			}
		}
		else if(!strcmp(classe,"anelideo"))
		{
			if(!strcmp(alimen,"hematofago"))
			{
				printf("sanguessuga\n");
			}
			if(!strcmp(alimen,"onivoro"))
			{
				printf("minhoca\n");
			}
		}
	}
}
