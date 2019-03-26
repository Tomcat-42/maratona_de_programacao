#include <stdio.h>

int main()
{
	float num[5]={},media=0;
	int pos=0,i;
	for(i=0;i<6;i++)
	{
		scanf("%f",&num[i]);
		if(num[i]>0)
		{
			pos++;
			media+=num[i];
		}
	}
	media=(media/pos);

	printf("%d valores positivos\n%.1f\n",pos,media);


}
