#include <stdio.h>
#include <math.h>

int main()
{
	float A,B,C,delta,r1,r2;
	scanf("%f%f%f",&A,&B,&C);
	delta = pow(B,2.0) - 4 * A * C;
	if((delta < 0) || (A==0))
	{
		printf("Impossivel calcular\n");
		return 0;
	}

	r1 = (-B + (sqrt(delta)))/(2.0*A);
	r2 = (-B - (sqrt(delta)))/(2.0*A);

	printf("R1 = %.5f\nR2 = %.5f\n",r1,r2);

	//printf("%f",delta);	

}
