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

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	
	string in, f1, sb;
	int cases, a,b;
	int count = 0;
	getline(cin, in);
	while(!in.empty()){
		count++;
		cout << "Case " << count << ":\n"; 
		cin >> cases;
		for(int i = 0; i < cases; i++){
			cin >> a;
			cin >> b;
			if(a>b){
				if(!in.substr(b, (a-b)).find("1").empty() && in.substr(b, (a-b)).find("0").empty()){
					cout << "Yes" <<"\n";
				}
				else if(in.substr(b, (a-b)).find("1").empty() && !in.substr(b, (a-b)).find("0").empty()){
					cout <<"Yes" << "\n";
				}
				else{
					cout <<"No" <<"\n";
				}


			}
			else{
				if(!in.substr(a, (b-a)).find("1").empty() && in.substr(a, (b-a)).find("0").empty()){
					cout <<"Yes" << "\n";
				}
				else if(in.substr(a, (b-a)).find("1").empty() && !in.substr(a, (b-a)).find("0").empty()){
					cout << "Yes"<<"\n";
				}
				else{
					cout << "No" << "\n";
				}

			}


		}
		getline(cin, in);
		in.clear();
		getline(cin, in);
	}

	return 0;
}
