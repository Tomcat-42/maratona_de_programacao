//Exemplo do Algoritmo de Euclides usado para encontrar o Máximo Divisor Comum entre dois números
//https://pt.wikipedia.org/wiki/Algoritmo_de_Euclides

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
