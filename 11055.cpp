#include "stdio.h"
#include "math.h"

using namespace std;


int main(int argc, char const *argv[]){
	int t, a, b;

	scanf("%d", &t);

	while(t--){
		scanf("%d %d", &a, &b);

		printf("%d\n", (int)(a*b)/9);
	}

	return 0;
}
