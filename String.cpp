#include <iostream>
#include <string>

using namespace std;

int main(){

	string J = "happy";
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
return 0;
}

