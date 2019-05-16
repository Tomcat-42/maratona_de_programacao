//Pablo Alessandro Santos Hugen
//Dado a data de início e fim de um evento(no formato DD/HH/MM/SS),esse programa calcula a duração total de um evento
#include <stdio.h>
#define MAX_INPUT_NUM 512

int main()
{	
	char input[MAX_INPUT_NUM];
	int inicio[5],fim[5] ,tts,tempo_total[4]; //a 1° posição é data, a 2° é as horas, a 3° os minutos e a 4° os segundos
	
	//le o dia do inicio
	sscanf(fgets(input,MAX_INPUT_NUM ,stdin),"Dia %d ",&inicio[0]);
	//le o horario do inicio
	sscanf(fgets(input,MAX_INPUT_NUM,stdin),"%d : %d : %d ",&inicio[1],&inicio[2],&inicio[3]);

	//le o dia do fim
	sscanf(fgets(input,MAX_INPUT_NUM,stdin),"Dia %d ",&fim[0]);
	//le o horario do fim
	sscanf(fgets(input,MAX_INPUT_NUM,stdin),"%d : %d : %d ",&fim[1],&fim[2],&fim[3]);
	

	//converte a diferença de tempo para segundos para simplificar
	tts = ((fim[0]*86400) + (fim[1]*3600) + (fim[2]*60) + fim[3]) - ((inicio[0]*86400) + (inicio[1]*3600) + (inicio[2]*60) + inicio[3]) ; 
		
	//organiza no formato DD/HH/MM/SS	
	tempo_total[0] = tts/86400;
	tts %= 86400;
	tempo_total[1] = tts/3600;
	tts %= 3600;
	tempo_total[2] = tts/60;
	tts %= 60;
	tempo_total[3] = tts;

	printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",tempo_total[0],tempo_total[1],tempo_total[2],tempo_total[3]);
	

		
}

