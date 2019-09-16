// Calcula a distância percorrida por um projétil
#include <stdio.h>
#include <math.h>
#define G 9.80665
#define PI 3.14159

float grad2rad(float grad);

float dist(float h, float v, float ang);

int main()
{
	float h, v, ang, d;
	int begin, end, numTent;
	int i;

	while(scanf("%f %d %d %d",&h, &begin, &end, &numTent ) != EOF)
	{
		for(i=0; i<numTent; i++)
		{
			scanf("%f %f", &ang, &v);
			d = dist(h, v, ang);
			printf("%.5f -> %s\n",d, (d>=begin && d<=end)?("DUCK"):("NUCK"));
		}
	}
}

float grad2rad(float grad)
{
	return (grad * PI) / 180.0;
}

float dist(float h, float v, float ang)
{
	float rad = grad2rad(ang);
	float sinRad = sin(rad), cosRad = cos(rad);
	return (pow(v, 2.0)*sin(2*rad))/G + h/tan(rad);
}
