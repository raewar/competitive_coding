#include "stdio.h"

int main(int argc, char const *argv[])
{
	int t,a,b,c;
	int i = 1;
	scanf("%d", &t);

	while(i <= t){
		scanf("%d %d %d", &a, &b, &c);

		if((a>b && a<c) ||(a>c && a<b)){
			printf("Case %d: %d\n", i, a);
		}
		else if ((b>a && b<c) ||(b>c && b<a)){
			printf("Case %d: %d\n", i, b);
		}
		else if((c>a && c<b) ||(c>b && c<a)){
			printf("Case %d: %d\n",i , c);
		}
		else{
			if(a==c){
				printf("Case %d: %d\n", i, a);
			}
			else{
				printf("Case %d: %d\n",i , b);
			}
		}

		i++;

	}

	return 0;
}