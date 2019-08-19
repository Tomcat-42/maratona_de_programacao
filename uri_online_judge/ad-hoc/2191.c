#include <stdio.h>
typedef struct
{
	int inip, fimp;
}intervalo;

void intervalo_maior_soma_contigua(int *v, int n, intervalo *a)
{
    int maior = 0, atual = 0, i, ini_atual = 0;
    int ini =-1, fim=-1;
    a->inip = 0;
    a->fimp = 0;

    for(i = 0; i < n; i++)
    {
        atual += v[i];

        if(atual < 0)
        {
            atual = 0;
            ini_atual = i+1;
        }
        if(atual > maior)
        {
            maior = atual;
            ini = ini_atual;
            fim = i;
        }
    }
    a->inip = ini +1;
    a->fimp = fim +1;
}

int main()
{
	int n_partidas =0,saldo[10001],feitos=0, levados=0i, teste=0;
	intervalo b;
	while(scanf("%d", &n_partidas) && n_partidas)
	{
		teste++;
		for(int i =0;i<n_partidas;i++)
		{
			scanf("%d %d",&feitos, &levados);
			saldo[i] = feitos - levados;
		}
		
		intervalo_maior_soma_contigua(saldo, n_partidas, &b);
		printf("Teste %d\n%d %d\n",teste, b.inip, b.fimp);

	}
}
