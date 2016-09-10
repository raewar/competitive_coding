#include <iostream>
#include <map>
#include <string>

using namespace std;

main(){
	string cont[26];
	cont[0] = "a";
	cont[1] = "b";
	cont[2] = "c";
	cont[3] = "d";
	cont[4] = "e";
	cont[5] = "f";
	cont[6] = "g";
	cont[7] = "h";
	cont[8] = "i";
	cont[9] = "j";
	cont[10] = "k";
	cont[11] = "l";
	cont[12] = "m";
	cont[13] = "n";
	cont[14] = "o";
	cont[15] = "p";
	cont[16] = "q";
	cont[17] = "r";
	cont[18] = "s";
	cont[19] = "t";
	cont[20] = "u";
	cont[21] = "v";
	cont[22] = "w";
	cont[23] = "x";
	cont[24] = "y";
	cont[25] = "z";

	map<string, int> map;

	for(int i=0; i<26;i++){
		map[cont[i]]=i+1;
	}

	string cont2[26*26];

	int ind = 0;
	int l = 0;
	for (int i = 0; i < 26; i++){
	
		for (int j = i+1; j < 26; j++){
			if(cont[i] != cont[j]){
				map[cont[i] + cont[j]] = (i+1)*26+j-ind;
				cont2[l] = cont[i]+cont[j];
				l++;

			}
			else{
				ind++;
			}
		}
	}

	

	cout << cont2[1][1];

}