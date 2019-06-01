#include <stdio.h>
#define ATUAL 2015
#define anos(tempo) ((tempo)>=(ATUAL))?((tempo)-(ATUAL)+1):((ATUAL - (tempo)))

int main()
{
	int qt,tempo;
	scanf("%d",&qt);
	while(qt--)
	{
		scanf("%d",&tempo);
		printf("%d %s\n",anos(tempo),(tempo>=ATUAL)?("A.C."):("D.C."));
	}
}
