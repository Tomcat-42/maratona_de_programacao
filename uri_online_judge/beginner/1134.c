#include <stdio.h>

int main()
{
	int alc=0,gas=0,die=0;
	//input
	int x;

	do
	{
		scanf("%d",&x);
		switch(x)
		{
			case 1:alc++;break;
			case 2:gas++;break;
			case 3:die++;break;

		}
	}while(x!=4);
	
	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",alc,gas,die);
}
