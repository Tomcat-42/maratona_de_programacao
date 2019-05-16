//Pablo AS Hugen
//Dado um número x, esse algoritmo checa se n é primo
//obs: a checagem dos divisores é feita até raiz de n, pois provavelmente alguma entrada pode 'estourar' o tempo limite

#include <stdio.h>
#include <math.h>

//checaa se x é primo
int prime(int x);

int main()
{
	int n,x;
	
	//checa por n numeros x
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&x);
		printf("%d%s eh primo\n",x,(prime(x))?(""):(" nao"));
	}

}

int prime(int x)
{
	//Caso para 1
	if(x==1) return 0;

	int i,flag_p = 1;
	for(i=2;i<=floor(sqrt(x));i++)
	{
		if(x%i==0)
		{
			flag_p=0;
			break;
		}	
	}
	return flag_p;
}


