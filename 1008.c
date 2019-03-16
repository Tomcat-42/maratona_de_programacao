#include <stdio.h>

int main()
{
	int num,hours;
	float money_hour,salary;

	scanf("%d %d %f",&num,&hours,&money_hour);
	salary = (hours * money_hour);
	printf("NUMBER = %d\nSALARY = U$ %.2f\n",num,salary);
}
