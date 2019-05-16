#include <stdio.h>

int sec2hr(x)
{
	return(x/3600);
}
int mod_sec2hr(x)
{
	return(x%3600);
}

int sec2min(x)
{
	return(x/60);
}

int mod_sec2min(x)
{
	return(x%60);
}

int main()
{
	int sec_total,min,hr,sec;
	scanf("%d",&sec_total);

	hr = sec2hr(sec_total);
	min = sec2min(mod_sec2hr(sec_total));
	sec = mod_sec2min(mod_sec2hr(sec_total));

	printf("%d:%d:%d\n",hr,min,sec);	

		
}
