#include <stdio.h>

int main(int argc, char **argv) {
    int n,m;
    char alf[27];
   
	while (scanf("%s", alf)!=EOF) {
		
		scanf("%d", &n);
		getchar();
		while(n--){
			scanf("%d", &m);
			getchar();
			putchar(alf[m-1]);
		}
		putchar('\n');	
	}
	return 0;
}
