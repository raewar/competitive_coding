#include "stdio.h"

int main(int argc, char const *argv[])
{
	int k,n,m,x,y;
	
	while(scanf("%d", &k), k){

		scanf("%d %d", &n, &m);
		while(k--){
			scanf("%d %d", &x, &y);

			if(x==n || y==m){
				printf("divisa\n");
			}
			else{
				if(y>m) printf("N");
				if(y<m) printf("S");
				if(x>n) printf("E\n");
				if(x<n) printf("O\n");
			}
			
		}

	}
		

	return 0;
}