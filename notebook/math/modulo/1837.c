//Pablo AS Hugen
//Dado o teorema da divisão-resto Euclidiana (para todo a,beI, existe q,r tal que a = bq + r, com 0<=r<|b|),esse algoritmo retorna o quociente e resto da divisão euclidiana de a/b
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int euc_mod(int a, int b)
{
   int mod;
   //se b for negativo retorna o módulo de a e |b|
   if(b<0) return euc_mod(a, -b);   
   
   mod = a % b;
   
   if(mod < 0) mod+=b;
   
   return mod;
}
int main()
{
	int a,b,q,r;
	scanf("%d %d",&a,&b);
	printf("%d\n",euc_mod(a,b));
}
