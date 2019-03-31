#include <stdio.h>

int main()
{
	int cha,resps[6],acertos=0,i;

	scanf("%d\n",&cha);

	for(i=0;i<5;i++)
	{
		scanf("%d",&resps[i]);
		if(resps[i]==cha)
		{
			acertos++;
		}
	}
	printf("%d\n",acertos);
}
