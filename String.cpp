#include <iostream>
#include <string>

using namespace std;

int main(){

	string J = "hampy";
	string S = "wmfekwef";
	cout << J.compare(S) << endl;
	string Y;
	int p = S.find_first_of(J[2]);
	cout << p << endl;
	for(int i = 0; i < J.length(); i++){
		 J[i] = toupper(J[i]) ;
	}
	//Y = J;
	cout << J << endl;

string s("asdfwegf");
cout << s.at(0) << endl;

string as;
getline(cin, as);
cout << as.substr(10,5) << endl;
cout <<as.find("DO")<<endl;
cout <<as.rfind("?")<<endl;
as.replace(10,15,"is everything");
cout << as <<endl;
as.erase(10);
cout << as <<endl;
return 0;
}

