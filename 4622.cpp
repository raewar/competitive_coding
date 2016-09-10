#include <cstdio>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
	char in[100];
	char data[10];
	char f[10];
	int a,k,q,j;
	int sv,h,d,c;
	int point;
	int fk, fq,fj;

	gets(in);
	while(1){
		point = 0;

		for (int i = 0; i < 13; i++){
			sscanf(in, "%s", data);
			strcpy(f, data);
			
			if(strcmp(f[0],"K")==0){
				printf("HOLA\n");
			}
		}

		printf("%d\n", point);
		break;
	}



	return 0;
}