#include "stdio.h"

int main(int argc, char const *argv[])
{
	int a, c, day;
	float bajo, alt, b, d;

	while(scanf("%d %f %d %f", &a, &b, &c, &d), (a||b||c||d)){

		day = 1;
		alt = 0;
		bajo = b*(d/100);

		while(1){
			alt += b;
			if(alt > a){
				printf("success on day %d\n", day);
				break;
			}
			if(b > 0){
				b = b - bajo;
			}
			if(b < 0){
				b = 0;
			}

			alt -= c;

			if(alt < 0){
				printf("failure on day %d\n", day);
				break;
			}

			day++;
		}


	}
	return 0;
}