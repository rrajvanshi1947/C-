#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;
	string s;
	for(int i = 0; i < str.length(); i++){
		s[i] = tolower(str[i]);
	}
	cout << s << endl;
	return 0;
}
