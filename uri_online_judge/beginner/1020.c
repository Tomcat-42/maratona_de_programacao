#include <stdio.h>

int day2year(x)
{
	return(x/365);
}
int mod_day2year(x)
{
	return(x%365);
}

int day2month(x)
{
	return(x/30);
}

int mod_day2month(x)
{
	return(x%30);
}



int main()
{
	int dias_total=0,dia=0,mes=0,ano=0;
	scanf("%d",&dias_total);
	
	ano = day2year(dias_total);
	mes = day2month(mod_day2year(dias_total));
	dia = mod_day2month(mod_day2year(dias_total));

	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ano,mes,dia);

}
