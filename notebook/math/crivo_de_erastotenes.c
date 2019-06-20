//Exemplo do crivo de erastotenes
#include <stdio.h>
#include <string.h>

//retorna true se n for primo, senão 0
int crivo(int n)
{
	//contadores
	int i,j,k;
	
	//como o array vai guardar um valor booleano, seria necessário somente um bit, mas char(1 byte) já e melhor que int(8 bytes)
	char nums[30];
	
	//temporariamente todos os números são considerados primos(setados como 1)
	memset(nums,1,sizeof(char)*(30));
	
	//0 e 1 não são primos, então são setados para 0
	nums[0]=nums[1]=0;
	
	//começando em 2(primeiro primo) , todos os números multiplos dele até n são lógicamente compostos e setados como zero.O teste se extende a todos os valores setados como 1 até sqrt(n)
	
	for(i=2;i*i<=n;i++)
		if(nums[i])
 			for(j=i*i;j<=n;j+=i)
			       nums[j] = 0;
	
	return nums[n+1];
}

//piloto para testar a função crivo()
int main()
{
	//número a ser testado
	int n;

	while(scanf("%d",&n)!=EOF) printf("\n%d%s é primo",n,(crivo(n))?(""):(" não"));
}
