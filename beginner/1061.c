#include <stdio.h>
#define MAX_INPUT_NUM 512

int main()
{	
	char input[MAX_INPUT_NUM];
	int inicio[5],fim[5] , tempo_total[4]; //a 1° posição é data, a 2° é as horas, a 3° os minutos e a 4° os segundos
	
	//le o dia do inicio
	sscanf(fgets(input,MAX_INPUT_NUM ,stdin),"Dia %d ",&inicio[0]);
	//le o horario do inicio
	sscanf(fgets(input,MAX_INPUT_NUM,stdin),"%d : %d : %d ",&inicio[1],&inicio[2],&inicio[3]);

	//le o dia do fim
	sscanf(fgets(input,MAX_INPUT_NUM,stdin),"Dia %d ",&fim[0]);
	//le o horario do fim
	sscanf(fgets(input,MAX_INPUT_NUM,stdin),"%d : %d : %d ",&fim[1],&fim[2],&fim[3]);


	//dia
	tempo_total[0] = fim[0] - inicio[0];

	//horas
	if(inicio[1] < fim[1])
	{
		tempo_total[1] = fim[1] - inicio[1];

	}	
	else
	{
		tempo_total[1] = (24 - inicio[1]) + fim[1];
		tempo_total[0]--;
	}


	printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",tempo_total[0],tempo_total[1],tempo_total[2],tempo_total[3]);
	

		
}

