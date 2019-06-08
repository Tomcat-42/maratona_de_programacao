#include <stdio.h>
#include <string.h>

char * alg_rom(int num);

int main()
{
	int num;
	scanf("%d",&num);
	printf("%s\n",alg_rom(num));
}

char * alg_rom(int num)
{
	//centena
	char c[11][5] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"}; 
	//dezena
	char d[11][5] = {"", "X", "XX", "XXX", "XL", "L","LX", "LXX", "LXXX", "XC"}; 
	//unidade
     	char u[11][5] = {"", "I", "II", "III", "IV", "V","VI", "VII", "VIII", "IX"}; 
	
	static char ret[20]; 

	//concatena a string em romano
	//centena
	strcat(ret,c[num/100]);
	//dezena
	strcat(ret,d[(num%100)/10]);
	//unidade
	strcat(ret,u[num%10]);

	return ret;	
}
