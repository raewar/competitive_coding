#include "stdio.h"

int main(int argc, char const *argv[])
{
	int t, n, flag, aux;
	int cont = 1;
	
	scanf("%d", &t);

	while(cont <= t){
		scanf("%d", &n);
		aux = 0;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &flag);
			if(flag>aux){
				aux = flag;
			}
			
		}

		printf("Case %d: %d\n", cont, aux);
		cont++;
	}

	return 0;
}
