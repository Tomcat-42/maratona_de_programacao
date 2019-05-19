//Pablo Alessandro Santos Hugen
//Dado um número n, printa de ele é primo ou não usando o crivo do cara grego lá
#include <stdio.h>

//array 'booleano' dos números até n, com tamanho maximo de 2³¹-1 já inicializado com todas as posições 0
char nums[2222222222];

//retorna true se n for primo, senão false
char crivo(unsigned long int n);

int main()
{
	//casos de teste
	int t;
	//número a ser testado
	int n;
	
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);	
		printf("%sPrime\n",(crivo(n))?(""):("Not "));
	}
}

char crivo(unsigned long int n)
{
	//contadores
	int i,j;
	char nums[n+1];
	//0 e 1 não são primos(então são setados pra 1)
	nums[0]=nums[1]=1;
	
	//executa o crivo
	for(i=2;i*i<=n;i++)
		if(!nums[i])
			for(j=i*i;j<=n;j+=i)
				nums[j] = 1;
	/*
	for(k=0;k<=n;k++)
		printf("num[%d] = %d\n",k,nums[k]);
	
	printf("\n");
	*/

	return !nums[n];	
}
