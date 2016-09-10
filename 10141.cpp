#include "stdio.h"
#include "string.h"


int main(int argc, char const *argv[])
{
	int count = 0;
	int r,p;
	int b;
	float a, com, pre;
	char basura[100];
	char name_p[100];
	char name_f[100];

	while(scanf("%d %d", &r, &p), (r || p)){
		getchar();
		for (int i = 0; i < r; i++){
			gets(basura);
		}

		com = 0;
		pre = 99999;

		while(p--){
			gets(name_p);
			scanf("%f %d", &a, &b);
			getchar();
			for (int i = 0; i < b; i++){
				gets(basura);
			}
			if(b > com){
				strcpy(name_f, name_p);
				com = b;
				pre = a;

			}
			else if(com == b){
				if(pre > a){
					pre = a;
					strcpy(name_f, name_p);
					com = b;

				}
			}
		}
		if(count){
			printf("\n");
		}
		printf("RFP #%d\n", count+1);
		printf("%s\n", name_f);
		count++;

	}
	return 0;
}