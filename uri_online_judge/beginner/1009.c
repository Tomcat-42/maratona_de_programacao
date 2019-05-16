#include <stdio.h>

int main()
{
	char name[60];
	double salary_0,sold,salary_end;

	scanf("%s %lf %lf",&name,&salary_0,&sold);
	salary_end = (salary_0 + (sold * 0.15));
	printf("TOTAL = R$ %.2lf\n",salary_end);
}
