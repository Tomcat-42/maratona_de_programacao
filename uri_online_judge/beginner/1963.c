#include <stdio.h>
#define PERCENT(antigo,novo) ((((novo)-(antigo))/(antigo))*100.00)

int main()
{
	double antigo,novo;
	scanf("%lf %lf",&antigo,&novo);
	printf("%.2f%%\n",PERCENT(antigo,novo));
}

