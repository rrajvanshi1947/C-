#include <iostream>

using namespace std;

template <class T>
T maximum(T &a, T &b){
	return(a>=b?a:b);
}

int main(){
	int x = 10, y = 15;
	cout <<maximum(x, y) << endl;	

	string a("abc"), b("abcd");
	string max = maximum(a,b);
	cout << max << endl;	

	return 0;
}
