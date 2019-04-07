#include <stdio.h>

int main()
{
	int n,x,i;

	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&n);
		printf("%s%s%s", ((n==0)?(printf("NULL\n") : (printf(""))))  ,((n%2==0)?(printf("EVEN\n"):(printf("ODD\n"))))                  );
	}
}
