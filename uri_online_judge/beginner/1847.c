//Pablo AS Hugen
#include <stdio.h>
#include <string.h>

//Retorna uma reação(':)' ou ':(') de acordo com as temperaturas de 3 dias consecutivos e as regras impostas
char *carinha(int t1,int t2,int t3);

int main()
{
	int t1,t2,t3;
	scanf("%d %d %d",&t1,&t2,&t3);
	printf("%s\n",carinha(t1,t2,t3));	
}

char *carinha(int t1,int t2,int t3)
{
	static char reac[3];
	if((t1>t2) && (t2<=t3))
		strcpy(reac,":)");
	else if((t1<t2) && (t2>=t3))
		strcpy(reac,":(");
	else if(((t1<t2) && (t2<t3)) && (t3-t2<t2-t1))
		strcpy(reac,":(");
	else if(((t1<t2) && (t2<t3)) && (t3-t2>=t2-t1))
		strcpy(reac,":)");
	else if(((t1>t2) && (t2>t3)) && (t2-t3<t1-t2))
		strcpy(reac,":)");
	else if(((t1>t2) && (t2>t3)) && (t2-t3>=t1-t2))
		strcpy(reac,":(");
	else if(t1==t2)
	{
		if(t3>t2)
			strcpy(reac,":)");
		else
			strcpy(reac,":(");

	}
	return reac;
}
