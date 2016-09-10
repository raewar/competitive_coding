#include <cstdio>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
	char in[100];
	char aux[100];
	char f, s, fa, sa;
	char data[3];
	char dataa[3];
	int a, k, q, j, point;
	int sv, h ,d ,c;
	int fk, fq, fj;
	int countq, countj;

	gets(in);

	while(1){
		for (int i = 0; i < 13; i++){
			sscanf(in, "%s", data);


			f = data[0];
			s = data[1];
			if(f == 'A'){
				a++;
				point += 4;
			}			
			if(f == 'K'){
				k++;
				point+=3;
				fk++;
			}
			if(q == 'Q'){
				q++;
				point+=2;
				fq++;
			}
			if(q == 'J'){
				j++;
				point+=1;
				fj++;
			}
			if(s == 'S'){
				sv++;
			}
			if(s == 'H'){
				h++;
			}
			if(s == 'D'){
				d++;
			}
			if(s == 'C'){
				c++;
			}

			strcpy(aux, in);

			for (int j = 0; j < 13; i++){
				sscanf(aux, "%s", dataa);
				fa = dataa[0];
				sa = dataa[1];
				if(i == j){
					continue;
				}
				if(f == 'K' && fk>0 && sa == s){
					fk--;
				}
				if(q == 'Q' && fq>0 && sa == s){
					countq ++;
					if(countq >=2){
						fq--;
					}
				}
				if(j == 'J' && fj>0 && sa == s){
					countj ++;
					if (countj >=3){
						fj--;
					}

				}
			}
		}
		point-=fk+fq+fj;
		printf("%d", point);
		break;

	}

	

	
	return 0;
}

