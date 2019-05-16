#include <stdio.h>

int main()
{
	//casos de teste
	int t;
	//populações
	int pa,pb;
	//taxas de crescimento
	double ga,gb;
	//tempo
	int anos=0;

	scanf("%d",&t);
	while(t--)
	{
		anos=0;
		scanf("%d %d %lf %lf",&pa,&pb,&ga,&gb);
		while(pa<=pb)
		{
			pa+=(int)(pa*(ga/100.0));
			pb+=(int)(pb*(gb/100.0));
			anos++;
			if(anos>100)break;
		}
		(anos>100)?(printf("Mais de 1 seculo.\n")):(printf("%d anos.\n",anos));
	}


}
