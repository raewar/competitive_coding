#include <cstdio>
#include <cstring>

using namespace std;

bool c_sig(char pos, char sign, char p_n){
	if(pos=='x' && sign=='-'){
		return true;
	}
	else if(pos == 'y' && sign=='+' && p_n == 'y'){
		return true;
	}
	else if(pos == 'z' && sign == '+' && p_n == 'z'){
		return true;
	}
	else{
		return false;
	}

}


int main(int argc, char const *argv[]){
	int l, i, sign;
	char pos;
	char mov[3];



	while(scanf("%d", &l), l){
		sign = 1;
		pos = 'x';
		for(i = 0; i < l-1; i++){
			scanf("%s", mov);
			if(strcmp(mov, "No")==0){
				continue;
			}

			if(c_sig(pos, mov[0], mov[1])){
				sign = -sign;
			}
			if(pos == 'x'){
				pos = mov[1]; 
			}
			else if(pos == 'y'){
				if(mov[1] == 'y'){
					pos = 'x';
				}
			}
			else if(pos == 'z'){
				if(mov[1] == 'z'){
					pos = 'x';
				}
			}
		}
		if(sign == -1){
			printf("%c", '-');

		}
		else{
			printf("%c", '+');
		}

		printf("%c\n", pos);

	}


	return 0;
}