#include <stdio.h>

int main()
{
	
	const double PI=3.14159;
	double A,B,C,tri,cir,trap,squ,rect;

	scanf("%lf%lf%lf",&A,&B,&C);

	tri = (A*C/2);
	cir = (PI*C*C);
	trap = ((A+B)*C/2);
	squ = (B*B);
	rect = (A*B);

	printf("TRIANGULO: %.3f\n",tri);
	printf("CIRCULO: %.3f\n",cir);
	printf("TRAPEZIO: %.3f\n",trap);
	printf("QUADRADO: %.3f\n",squ);
	printf("RETANGULO: %.3f\n",rect);


}
