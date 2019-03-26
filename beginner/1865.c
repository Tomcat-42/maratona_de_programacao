#include <stdio.h>
#include <string.h>

int main()
{
	char nome[256],trigger[5]="Thor";
	int c=0,n=0,i;
	scanf("%d",&c);

	for(i=0;i<c;i++)
	{
		scanf("%s %d",nome,&n);
		if(!strcmp(nome,trigger))
		{
			printf("Y\n");
		}
		else
		{
			printf("N\n");
		}
	}

}
