#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>



using namespace std;

int toint(std::string s){
    return atoi(s.c_str());
}

int main(int argc, char const *argv[]){

	ios::sync_with_stdio(false);

	int in;
	string aux;
	int n_comp;

	string qrry;
	int c1,c2;

	cin >> in;
	while(getline(cin, aux)){
		if(!aux.empty()){
			break;
		}
	}

	int win, fail;
	win = 0;
	fail = 0;


	set< pair<int, int> > v1, v2, v3;
	pair<int, int> pai;


	while(in--){

		n_comp = toint(aux);

	

		while(!aux.empty()){
			cin >> qrry;
			cin >> c1;
			cin >> c2;

			if(qrry == "c"){
				pai = make_pair(c1,c2);

				v1.insert(pai);
			}
			else{
				pai = make_pair(c1,c2);

				v2.insert(pai);

				//set_intersection(v1.begin(),v2.end(), v2.begin(), v2.end(), v3.begin());
				if(v3.empty()){
					fail++;
				}
				else{
					win++;
				}
				v2.clear();
			}

			
		}
		getline(cin, aux);

	}
	cout << "win:" << win << "\n";
	cout << "fail:" << fail << "\n";
	
	return 0;
}
