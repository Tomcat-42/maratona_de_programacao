# Máximo Divisor Comum (aka MDC):

Uma importante propiedade do MDC é que ao subtrair o menor número do maior , o MDC não muda.

**Exemplo**
>mdc(294,112) = 14 -> 294 - 112 = 182
>mdc(182,112) = 14 -> 182 - 112 = 70
>mdc(70,112)  = 14 -> 112 - 70  = 42
>mdc(42,70)   = 14 -> 70  - 42  = 28
>mdc(28,42)   = 14 -> 42  - 28  = 14
>mdc(28,14)   = 14 -> 28  - 14  = 14
>mdc(14,14)   = 14 -> 14  - 14  = 0
>mdc(14,0)    = **14**

O [Algoritmo de Euclides](https://pt.wikipedia.org/wiki/Algoritmo_de_Euclides) utiliza esse princípio como base para encontrar o MDC entre dois números dados,usando que **mdc(x,y) = mdc(y,(x%y))**.

# Código em C:
'''c
//versão recursiva
int mdc_rec(int x,int y)
{
	if(y==0) return x;
	return mdc_rec(y,x%y);
}

//versão iterativa
int mdc_ite(int x, int y)
{
	int tmp;
	while(y!=0)
	{
		tmp = x%y;
		x=y;
		y=tmp;
	}
	return x;
}
'''

