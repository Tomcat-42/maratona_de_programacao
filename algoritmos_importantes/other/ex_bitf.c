#include <stdio.h>

typedef struct
{
	unsigned int b0:1;
	unsigned int b1:1;
	unsigned int b2:1;
	unsigned int b3:1;
	unsigned int b4:1;
	unsigned int b5:1;
	unsigned int b6:1;
	unsigned int b7:1;
}bitfield;

typedef union
{
	unsigned char valor;
	bitfield bits;
}numero;

int main()
{
	numero x;
	x.valor=255;
	
	printf("%d", x.bits.b7? 1: 0);
	printf("%d", x.bits.b6? 1: 0);
	printf("%d", x.bits.b5? 1: 0);
	printf("%d", x.bits.b4? 1: 0);
	printf("%d", x.bits.b3? 1: 0);
	printf("%d", x.bits.b2? 1: 0);
	printf("%d", x.bits.b1? 1: 0);
	printf("%d\n\n", x.bits.b0? 1: 0);
}
