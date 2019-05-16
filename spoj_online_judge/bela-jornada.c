#include <stdio.h>

/*
//constroi um array de soma acumulada de n posições
void csq(int *array,int *sum ,int n);

//lê um vetor de n posições
void scn(int *array,int n);
*/

int main()
{
	//número de checkpoints
	int n,i;
	int input;
	//valor maximo de beleza
	int max=0;

	/*
	//vetor de checkpoints
	int chk[100000];
	*/
	//vetor se somas
	int csq[1000000];
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&input);
		if(i==0){ csq[i] = input;}
		else
		{
			csq[i] = csq[i-1] + input;
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",csq[i]);
	}
	
	for(i=1;i<n;i++)
	{
		//if(csq[i]*csq[i-1]>max){max=csq[i]*csq[i-1];}
		printf("%d\n",(csq[i] * (csq[n] - csq[i+1])));
	}
	

		
}

/*
void csq(int *array,int *sum,int n)
{
	//contador
	int i;
	sum[0] = 0;
	for(i=1;i<=n;i++)
		sum[i] = sum[i-1] + array[i];
}

void scn(int *array,int n)
{
	//contador
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
}

*/
