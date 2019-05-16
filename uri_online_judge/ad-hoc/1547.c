//Pablo A.S. Hugen
//Dado um valor secreto e um conjunto de adivinhações, o algoritmo mostra a posição da adivinhação correta, e caso não exista mostra resposta mais próxima
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int adiv(int *respostas,int valor,int alunos);

int main()
{
	//número de testes
	int testes;
	//número de alunos da sala e o número secreto
	int alunos,valor;
	//respostas individuais de cada aluno
	int respostas[10];
	//contadores
	int i,j;

	//realiza testes segundo o input
	scanf("%d",&testes);
	for(i=0;i<testes;i++)
	{
		//lê o número de alunos e o valor secreto
		scanf("%d %d",&alunos,&valor);

		//lê as respostas dos alunos
		for(j=0;j<alunos;j++)
		{
			scanf("%d",&respostas[j]);
		}
		
		//retorna o valor esperado
		printf("%d\n" ,adiv(respostas,valor,alunos));
	}
}

//recebe um vetor de inteiros e retorna a posição da resposta que é igual ao valor secreto, e caso não haja nenhuma, retorna a posição do valor mais próximo
int adiv(int *respostas,int valor,int alunos)
{
	//contador
	int i;
	//armazena a posição do acerto
	int igual=0;
	//armazena a posição do menor módulo
	int mmod=0;
	//se armazena o valor do menor módulo
	int menor_modulo=INT_MAX;

	for(i=0;i<alunos;i++)
	{
		if(*(respostas+i) == valor)
		{
			igual=++i;
			break;
		}
		else
		{
			if((abs(valor - *(respostas+i) ) < menor_modulo))
			{
				menor_modulo = abs(valor - *(respostas+i));
				mmod=++i;
			}	
		}
	}
	return igual ? igual : mmod;
}

