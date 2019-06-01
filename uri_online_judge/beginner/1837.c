//Pablo AS Hugen
//Dado o teorema da divisão-resto Euclidiana (para todo a,beI, existe q,r tal que a = bq + r, com 0<=r<|b|),esse algoritmo retorna o quociente e resto da divisão euclidiana de a/b
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Resto re[0,|b|)
int euc_mod(int a, int b);

//Dado o resto r, o quociente q é igual a (a-r)/b
int euc_div(int a, int b,int r);

int main()
{
	int a,b,r;
	scanf("%d %d",&a,&b);
	//armazena o módulo para não precisar chamar a função 2x
	r = euc_mod(a,b);
	printf("%d %d\n",euc_div(a,b,r),r);
}

int euc_mod(int a, int b)
{
   int mod;
   //se b for negativo retorna o módulo de a e |b|
   if(b<0) return euc_mod(a, -b);
   //Resto comum(%)
   mod = a % b;
   
   //Se o múdulo for negativo, adiciona b para pertencer ao intervalo [0,|b|)
   if(mod < 0) mod+=b;
   return mod;
}

int euc_div(int a, int b,int r)
{
	return((a-r)/b);
}
