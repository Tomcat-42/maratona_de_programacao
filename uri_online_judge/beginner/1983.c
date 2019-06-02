#include <stdio.h>

int main()
{
	float nota,maior_nota=0.0;
	int i,n,maior_mat,mat;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %f",&mat,&nota);
		if(nota>maior_nota)
		{
			maior_nota=nota;
			maior_mat=mat;
		}
	}
	if(maior_nota>=8.0)
		printf("%d\n",maior_mat);
	else
		printf("Minimum note not reached\n");
}


