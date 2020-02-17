#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char **argv)
{
	int n,m, troco, resto;
	int notas[] = {100, 50, 20, 10, 5, 2};
	
	break_flag:
	while( scanf("%d %d", &n, &m) && n)
	{
		troco = m-n;
		for(int i=0; i<6; i++)
			for(int j=i; j<6; j++)
			{
				resto = troco -(notas[i]+notas[j]);
				if(resto > 0){
					cout << "impossible" << endl;
					goto break_flag;
				}else if(resto == 0){
					cout << "possible" << endl;
					goto break_flag;
				}
			}
		cout << "impossible" << endl;

	}
	return 0;
}
