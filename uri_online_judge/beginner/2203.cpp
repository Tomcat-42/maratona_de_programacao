#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

#define TEMPO_CAST 1.5

using namespace std;

int main(int argc, char **argv) {
    pair<int, int> CoordFid, CoordInv;
    int Vel, RaioCast, RaioCorvos;
	double distancia;

	while(scanf("%d %d %d %d %d %d %d", &CoordFid.first, &CoordFid.second,
										&CoordInv.first, &CoordInv.second,
										&Vel, &RaioCast, &RaioCorvos) != EOF)
	{
		//distância inical entre eles
		distancia = sqrt( pow(CoordFid.first - CoordInv.first, 2.0) +
						  pow(CoordFid.second - CoordInv.second, 2.0)  );

		// enquanto ele casta o oponente está se movimentando
		distancia += Vel*TEMPO_CAST;

		/* se a distancia inicial entre eles for menor ou igual à soma dos
		 * dois raios o golpe foi acertado*/
		cout << (distancia <= RaioCast + RaioCorvos ? "Y":"N") << endl;
	}

    return 0;
}
