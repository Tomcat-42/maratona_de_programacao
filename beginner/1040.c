#include <stdio.h>

int main()
{
	float n1=0,n2=0,n3=0,n4=0,media=0,nota_exame=0,media_exame=0;
	scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
	media = ((n1*2.0) + (n2 * 3.0) + (n3 * 4) + (n4 * 1)) / 10.0 ;
	printf("Media: %.1f\n",media);

	if(media > 7.0)
	{
		printf("Aluno aprovado.\n");
	}
	else if((media > 5.0) && (media < 6.9))
	{
		printf("Aluno em exame.\n");
		scanf("%f",&nota_exame);
		printf("Nota do exame: %.1f\n",nota_exame);
		media_exame = (media + media_exame)/2.0;
		printf("Media final: %.1f\n",media_exame);

	}
	else
	{
		printf("Aluno reprovado.\n");
	}
}
