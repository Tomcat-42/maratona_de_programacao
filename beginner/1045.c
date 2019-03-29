#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c,maior,meio,menor;
	
	scanf("%f %f %f",&a,&b,&c);

	if(a > b && a > c)
	{
		maior = a;
		if(b > c)
		{
			meio = b;
			menor = c;
		}
		else
		{
			meio = c;
			menor = b;
		}
	}
	else if(b > a && b > c)
	{
		maior = b;
		if(a > c)
		{
			meio = a;
			menor = c;
		}
		else
		{
			meio = c;
			menor = a;
		}
	}
	else
	{
		maior = c;
		if(a > b)
		{
			meio = a;
			menor = b;
		}
		else
		{
			meio = b;
			menor = a;
		}
	}


	if(maior >= meio + menor)
	{
		printf("NAO FORMA TRIANGULO\n");
		return 0;
	}

	if(pow(maior,2.0) == pow(meio,2.0)  + pow(menor,2.0))
	{
		printf("TRIANGULO RETANGULO\n");
	}
	else if(pow(maior,2.0) > pow(meio,2.0)  + pow(menor,2.0))
	{
		printf("TRIANGULO OBTUSANGULO\n");
	}
	else if(pow(maior,2.0) < pow(meio,2.0)  + pow(menor,2.0))
	{
		printf("TRIANGULO ACUTANGULO\n");
	}

	if(maior == meio && meio == menor)
	{
		printf("TRIANGULO EQUILATERO\n");
	}
	else if ((maior == meio && meio != menor) || (maior != meio && meio == menor) ||(maior == menor && meio != menor)) 
	{
		printf("TRIANGULO ISOSCELES\n");
	}
	
}
